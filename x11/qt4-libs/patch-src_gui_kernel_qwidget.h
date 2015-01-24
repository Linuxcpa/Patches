$NetBSD$

--- src/gui/kernel/qwidget.h.orig	2014-04-10 18:37:12.020447232 +0000
+++ src/gui/kernel/qwidget.h
@@ -110,6 +110,9 @@ class QUnifiedToolbarSurface;
 #if defined(Q_WS_X11)
 class QX11Info;
 #endif
+#if defined(Q_WS_HAIKU) && !defined(BUILDING_WEBKIT)
+#include "qwidget_haiku.h"
+#endif
 
 class QWidgetData
 {
@@ -264,6 +267,16 @@ public Q_SLOTS:
     void setEnabled(bool);
     void setDisabled(bool);
     void setWindowModified(bool);
+//#ifdef Q_WS_HAIKU // Its all for moc, but moc does not support #ifdef
+// Remove! break cross-platform! 
+	void slot_updateWidget();
+	void slot_updateWidgetRect(QRect r);
+	void slot_sendEvent(QObject *receiver, QEvent *event);
+	void slot_sendResizeWidget(int width, int height);
+	void slot_sendMoveWidget(int x, int y);
+	void slot_sendSetActiveWindow(QWidget *widget);
+	void slot_sendCloseWindow(QWidget *widget);
+//#endif
 
     // Widget coordinates
 
@@ -614,6 +627,10 @@ public:
     Qt::HANDLE handle() const;
 #endif
 
+#if defined(Q_WS_HAIKU)
+	BView* nativeView() const;
+#endif
+
     void setAttribute(Qt::WidgetAttribute, bool on = true);
     inline bool testAttribute(Qt::WidgetAttribute) const;
 
