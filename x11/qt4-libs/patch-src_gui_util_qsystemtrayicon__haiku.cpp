$NetBSD$

--- src/gui/util/qsystemtrayicon_haiku.cpp.orig	2014-12-25 04:44:58.836763648 +0000
+++ src/gui/util/qsystemtrayicon_haiku.cpp
@@ -0,0 +1,463 @@
+/****************************************************************************
+**
+** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
+** All rights reserved.
+** Contact: Nokia Corporation (qt-info@nokia.com)
+**
+** This file is part of the QtGui module of the Qt Toolkit.
+**
+** $QT_BEGIN_LICENSE:LGPL$
+** No Commercial Usage
+** This file contains pre-release code and may not be distributed.
+** You may use this file in accordance with the terms and conditions
+** contained in the Technology Preview License Agreement accompanying
+** this package.
+**
+** GNU Lesser General Public License Usage
+** Alternatively, this file may be used under the terms of the GNU Lesser
+** General Public License version 2.1 as published by the Free Software
+** Foundation and appearing in the file LICENSE.LGPL included in the
+** packaging of this file.  Please review the following information to
+** ensure the GNU Lesser General Public License version 2.1 requirements
+** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
+**
+** In addition, as a special exception, Nokia gives you certain additional
+** rights.  These rights are described in the Nokia Qt LGPL Exception
+** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
+**
+** If you have questions regarding the use of this file, please contact
+** Nokia at qt-info@nokia.com.
+**
+**
+**
+**
+**
+**
+**
+**
+** $QT_END_LICENSE$
+**
+****************************************************************************/
+
+#include "qsystemtrayicon_p.h"
+
+#ifndef QT_NO_SYSTEMTRAYICON
+
+QT_BEGIN_NAMESPACE
+
+#include "qapplication.h"
+#include "qsystemtrayicon.h"
+#include "qdebug.h"
+#include "qcolor.h"
+#include "qfileinfo.h"
+
+#include <OS.h>
+#include <Application.h>
+#include <Window.h>
+#include <Message.h>
+#include <Deskbar.h>
+#include <View.h>
+#include <String.h>
+#include <Roster.h>
+#include <Screen.h>
+#include <Resources.h>
+#include <Bitmap.h>
+#include <Looper.h>
+#include <Notification.h>
+
+#include <stdlib.h>
+#include <string.h>
+#include <stdio.h>
+
+#define TRAY_MOUSEDOWN 	1
+#define TRAY_MOUSEUP	2
+
+enum notify_mode {
+		NM_NONE,
+		NM_QT,
+		NM_NATIVE
+};
+
+#define maxTipLength 	128
+
+#define DBAR_SIGNATURE 	"application/x-vnd.Be-TSKB"
+
+static 	notify_mode notifyMode = NM_NATIVE;
+
+QSystemTrayIconLooper::QSystemTrayIconLooper() : QObject(), BLooper("traylooper")
+{	
+}
+
+thread_id 
+QSystemTrayIconLooper::Run(void)
+{
+	thread_id Thread = BLooper::Run();	
+	return Thread;
+}
+
+void 
+QSystemTrayIconLooper::MessageReceived(BMessage* theMessage)
+{
+	if( theMessage->what == 'TRAY' || 
+		theMessage->what == 'PULS' || 
+		theMessage->what == 'LIVE') {
+		BMessage *mes = new BMessage(*theMessage);
+		emit sendHaikuMessage(mes);
+	}
+	BLooper::MessageReceived(theMessage);
+} 
+
+QSystemTrayIconSys::QSystemTrayIconSys(QSystemTrayIcon *object)
+    : ReplicantId(0), q(object), ignoreNextMouseRelease(false), LiveFactor(0)
+{
+	Looper = new QSystemTrayIconLooper();
+	Looper->Run();		
+	
+	pulse = new BMessageRunner(BMessenger(NULL, Looper),new BMessage('PULS'),1000000);
+		
+	InstallIcon();
+	
+	QObject::connect(Looper,SIGNAL(sendHaikuMessage(BMessage *)),this,SLOT(HaikuEvent(BMessage *)),Qt::QueuedConnection);
+}
+
+QSystemTrayIconSys::~QSystemTrayIconSys()
+{
+	BDeskbar deskbar;
+	if(ReplicantId>0)
+		deskbar.RemoveItem(ReplicantId);
+	if(pulse)
+		delete pulse;	
+	if(Looper->Lock())
+		Looper->Quit();
+}
+
+void
+QSystemTrayIconSys::InstallIcon(void)
+{
+	ReplicantId = DeskBarLoadIcon();
+
+	QString appName = QFileInfo(QApplication::applicationFilePath()).fileName();
+	BString app_name((const char *)(appName.toUtf8()));
+
+	BMessage mes('MSGR');
+	QSystemTrayIconSys *sys=this;
+	mes.AddMessenger("messenger",BMessenger(NULL,Looper));
+	mes.AddData("qtrayobject",B_ANY_TYPE,&sys,sizeof(void*));
+	mes.AddString( "application_name",app_name);
+
+	SendMessageToReplicant(&mes);
+}
+
+void QSystemTrayIconSys::HaikuEvent(BMessage *m)
+{	
+	if(m->what == 'PULS') {
+		LiveFactor--;
+		if(LiveFactor<-5) {		//Reinstallation time
+			LiveFactor = 0;
+			ReplicantId = 0;
+			InstallIcon();
+			LiveFactor = 0;
+			UpdateIcon();
+			UpdateTooltip();
+		}		
+	}
+	if(m->what == 'LIVE') {
+		LiveFactor++;		
+		BRect rect;
+		if(m->FindRect("rect",&rect)==B_OK) {
+			shelfRect.setRect(rect.left, rect.top, rect.Width(), rect.Height());
+		}		
+	}
+	if(m->what == 'TRAY') {
+		int32 event = 0;
+		BPoint point(0,0);
+		int32 buttons = 0,
+			  clicks = 0;
+	
+		m->FindInt32("event",&event);
+		m->FindPoint("point",&point);
+		m->FindInt32("buttons",&buttons);
+		m->FindInt32("clicks",&clicks);
+		
+		switch(event) {
+			case TRAY_MOUSEUP:
+				{				                
+					if(buttons==B_PRIMARY_MOUSE_BUTTON) {
+					if (ignoreNextMouseRelease)
+	                    ignoreNextMouseRelease = false;
+	                else
+	                    emit q->activated(QSystemTrayIcon::Trigger);
+						break;
+					}
+					if(buttons==B_TERTIARY_MOUSE_BUTTON) {
+						emit q->activated(QSystemTrayIcon::MiddleClick);
+						break;
+					}
+					if(buttons==B_SECONDARY_MOUSE_BUTTON) {
+						QPoint gpos = QPoint(point.x,point.y);
+		                if (q->contextMenu()) {
+		                    q->contextMenu()->popup(gpos);
+		
+							BScreen screen(NULL);
+		                    QRect desktopRect( screen.Frame().left, screen.Frame().top,
+		                    				   screen.Frame().right, screen.Frame().bottom);
+		                    int maxY = desktopRect.y() + desktopRect.height() - q->contextMenu()->height();
+		                    if (gpos.y() > maxY) {
+		                        gpos.ry() = maxY;
+		                        q->contextMenu()->move(gpos);
+		                    }
+		                }
+		                emit q->activated(QSystemTrayIcon::Context);		
+		             	break;   			
+					}
+				}
+				break;
+			case TRAY_MOUSEDOWN:
+				{				
+					if(buttons==B_PRIMARY_MOUSE_BUTTON && clicks==2) {
+						ignoreNextMouseRelease = true;
+						emit q->activated(QSystemTrayIcon::DoubleClick);
+						break;
+					}
+				}
+				break;
+			default:
+				break;
+		}
+	}
+}
+
+void QSystemTrayIconSys::UpdateTooltip()
+{   	
+    QString tip = q->toolTip();
+
+    BString tipStr("");
+    
+    if (!tip.isNull()) {
+    	tip = tip.left(maxTipLength - 1) + QChar();        
+    	const char *str = (const char *)(tip.toUtf8());
+    	tipStr.SetTo(str);
+    }
+	
+	BMessage *mes = new BMessage('TTIP');		
+	mes->AddString("tooltip",tipStr.String());	
+	SendMessageToReplicant(mes);
+}
+
+void QSystemTrayIconSys::UpdateIcon()
+{    
+    QIcon qicon = q->icon();
+    if (qicon.isNull())
+        return;
+
+    QSize size = qicon.actualSize(QSize(16, 16));
+    QPixmap pm = qicon.pixmap(size);
+    if (pm.isNull())
+        return;
+	
+	BBitmap *icon = pm.toHaikuBitmap();
+	if(icon) {
+		BMessage	bits(B_ARCHIVED_OBJECT);
+		icon->Archive(&bits);	
+		BMessage *mes = new BMessage('BITS');
+		mes->AddMessage("icon",&bits);
+		bits.MakeEmpty();
+		SendMessageToReplicant(mes);
+		delete icon;
+	}	
+	UpdateTooltip();
+}
+
+BMessenger 
+QSystemTrayIconSys::GetShelfMessenger(void)
+{
+	BMessenger aResult;
+	status_t aErr = B_OK;
+	BMessenger aDeskbar(DBAR_SIGNATURE, -1, &aErr);
+	if (aErr != B_OK)return aResult;
+
+	BMessage aMessage(B_GET_PROPERTY);
+	
+	aMessage.AddSpecifier("Messenger");
+	aMessage.AddSpecifier("Shelf");
+	aMessage.AddSpecifier("View", "Status");
+	aMessage.AddSpecifier("Window", "Deskbar");
+	
+	BMessage aReply;
+
+	if (aDeskbar.SendMessage(&aMessage, &aReply, 500000, 500000) == B_OK)
+		aReply.FindMessenger("result", &aResult);
+	return aResult;
+}
+
+status_t 
+QSystemTrayIconSys::SendMessageToReplicant(BMessage *msg)
+{
+	if(ReplicantId<=0)
+		return B_ERROR;
+		
+	BMessage aReply;
+	status_t aErr = B_OK;
+	
+	msg->AddInt32( "what2", msg->what );
+	msg->what = B_SET_PROPERTY;
+
+	BMessage	uid_specifier(B_ID_SPECIFIER);
+	
+	msg->AddSpecifier("View");
+	uid_specifier.AddInt32("id", ReplicantId);
+	uid_specifier.AddString("property", "Replicant");
+	msg->AddSpecifier(&uid_specifier);
+		
+	aErr = GetShelfMessenger().SendMessage( msg, (BHandler*)NULL, 500000 );
+	return aErr;
+}
+
+int32	
+QSystemTrayIconSys::ExecuteCommand(char *command)
+{
+   FILE *fpipe;
+   char line[256];
+   if ( !(fpipe = (FILE*)popen(command,"r")) )
+   		return -1;
+
+   fgets( line, sizeof line, fpipe);
+   pclose(fpipe);
+   
+   int res = atoi(line);
+   return res;
+}
+
+int32 
+QSystemTrayIconSys::DeskBarLoadIcon(team_id tid)
+{
+	char cmd[256];
+	sprintf(cmd,"qsystray %d",(int)tid);	
+	int32 id = ExecuteCommand(cmd);
+	return id;
+}
+
+int32 
+QSystemTrayIconSys::DeskBarLoadIcon(void)
+{
+	thread_info threadInfo;
+	status_t error = get_thread_info(find_thread(NULL), &threadInfo);
+	if (error != B_OK) {
+		fprintf(stderr, "Failed to get info for the current thread: %s\n", strerror(error));
+		return -1;	
+	}
+	team_id sTeam = threadInfo.team;
+	
+	return DeskBarLoadIcon(sTeam);
+}
+
+void QSystemTrayIconPrivate::install_sys()
+{
+    Q_Q(QSystemTrayIcon);
+    if (!sys) {
+        sys = new QSystemTrayIconSys(q);		
+        sys->UpdateIcon();
+    }
+    supportsMessages_sys();    
+}
+
+void QSystemTrayIconPrivate::showMessage_sys(const QString &title,  const QString &message, QSystemTrayIcon::MessageIcon type, int timeOut)
+{
+	if(notifyMode == NM_QT) {
+		QPoint point(sys->shelfRect.x(),sys->shelfRect.y());
+				
+		BDeskbar deskbar;
+		BRect deskRect = deskbar.Frame();
+		BScreen  screen(B_MAIN_SCREEN_ID);
+		
+		switch(deskbar.Location())
+		{
+			case B_DESKBAR_TOP:
+				point.setX(screen.Frame().Width()-8);
+				point.setY(deskRect.Height()+8);
+				break;
+			case B_DESKBAR_RIGHT_TOP:		
+				point.setX(screen.Frame().Width()-deskRect.Width()-8);
+				point.setY(8);
+				break;
+			case B_DESKBAR_BOTTOM:
+				point.setX(screen.Frame().Width()-8);
+				point.setY(screen.Frame().Height()-deskRect.Height()-8);
+				break;	
+			case B_DESKBAR_LEFT_BOTTOM:
+				point.setX(deskRect.Width()+8);
+				point.setY(screen.Frame().Height()-8);
+				break;				
+			case B_DESKBAR_RIGHT_BOTTOM:		
+				point.setX(deskRect.Width()-deskRect.Width()-8);
+				point.setY(screen.Frame().Height()-8);
+				break;				
+			case B_DESKBAR_LEFT_TOP:
+				point.setX(deskRect.Width()+8);
+				point.setY(8);
+				break;				
+		}
+	    QBalloonTip::showBalloon(type, title, message, sys->q, point, timeOut, false);
+	}
+	if(notifyMode == NM_NATIVE) {	
+		BString stitle((const char *)(title.toUtf8()));
+		BString smessage((const char *)(message.toUtf8()));
+		BString smessageId((const char *)(QFileInfo(QApplication::applicationFilePath()).fileName().toUtf8()));
+		
+		notification_type ntype = type==QSystemTrayIcon::Warning?B_IMPORTANT_NOTIFICATION:
+								   type==QSystemTrayIcon::Critical?B_ERROR_NOTIFICATION:B_INFORMATION_NOTIFICATION;
+		BNotification notification(ntype);
+		//notification.SetGroup("");
+		notification.SetTitle(stitle);
+		notification.SetMessageID(smessageId);
+		notification.SetContent(smessage);
+		notification.Send(timeOut*1000);
+	}
+}
+
+QRect QSystemTrayIconPrivate::geometry_sys() const
+{
+	return sys->shelfRect;
+}
+
+void QSystemTrayIconPrivate::remove_sys()
+{
+	if(sys) {    
+    	delete sys;
+    	sys = NULL;
+	}
+}
+
+void QSystemTrayIconPrivate::updateIcon_sys()
+{
+    if (sys) {
+	    sys->UpdateIcon();
+    }
+}
+
+void QSystemTrayIconPrivate::updateMenu_sys()
+{
+	fprintf(stderr, "Unimplemented:  QSystemTrayIconPrivate::updateMenu_sys\n");	
+}
+
+void QSystemTrayIconPrivate::updateToolTip_sys()
+{
+	if (sys) {
+		sys->UpdateTooltip();
+	}
+}
+
+bool QSystemTrayIconPrivate::isSystemTrayAvailable_sys()
+{
+	// We assume the qsystray executable will always be available
+	return true;
+}
+
+bool QSystemTrayIconPrivate::supportsMessages_sys()
+{
+	return notifyMode != NM_NONE;
+}
+
+QT_END_NAMESPACE
+
+#endif // QT_NO_SYSTEMTRAYICON
