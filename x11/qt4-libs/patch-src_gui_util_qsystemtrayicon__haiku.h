$NetBSD$

--- src/gui/util/qsystemtrayicon_haiku.h.orig	2014-12-25 04:44:59.157810688 +0000
+++ src/gui/util/qsystemtrayicon_haiku.h
@@ -0,0 +1,116 @@
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
+#ifndef QSYSTRAYICONHAIKU_H
+#define QSYSTRAYICONHAIKU_H
+
+#include <QtCore/qcoreapplication.h>
+#include <QtCore/qobject.h>
+#include <qwidget.h>
+#include "qsystemtrayicon.h"
+
+#include <Application.h>
+#include <Bitmap.h>
+#include <Message.h>
+#include <Looper.h>
+#include <OS.h>
+#include <MessageRunner.h>
+
+QT_BEGIN_HEADER
+
+QT_BEGIN_NAMESPACE
+
+QT_MODULE(Gui)
+
+
+class QSystemTrayIconLooper :public QObject, public BLooper
+{
+	Q_OBJECT
+public:
+	QSystemTrayIconLooper();
+	virtual void MessageReceived(BMessage* theMessage);
+	thread_id Run(void);
+Q_SIGNALS:
+	void sendHaikuMessage(BMessage *);
+};
+
+class QSystemTrayIconSys : public QWidget
+{
+	Q_OBJECT
+public:
+    QSystemTrayIconSys(QSystemTrayIcon *object);
+    ~QSystemTrayIconSys();
+    
+    void UpdateIcon();
+    void UpdateTooltip();
+	status_t SendMessageToReplicant(BMessage *msg);	
+     
+    QSystemTrayIcon *q;
+	QSystemTrayIconLooper* Looper;
+
+	QRect	shelfRect;
+
+public slots:
+    void HaikuEvent(BMessage *m);
+
+private:	
+	BMessenger GetShelfMessenger(void);	
+	int32	ExecuteCommand(char *command);
+	int32 	DeskBarLoadIcon(team_id tid);
+	int32 	DeskBarLoadIcon(void);	
+	void 	InstallIcon(void);
+
+	int32	ReplicantId;
+	int32	LiveFactor;
+		
+	bool 	ignoreNextMouseRelease;
+	
+	BMessageRunner *pulse;
+	
+    friend class QSystemTrayIconPrivate;
+};    
+
+
+QT_END_NAMESPACE
+
+QT_END_HEADER
+
+#endif //QSYSTRAYICONHAIKU_H 
