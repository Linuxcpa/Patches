$NetBSD$

--- src/gui/kernel/qapplication_p.h.orig	2014-04-10 18:37:12.002359296 +0000
+++ src/gui/kernel/qapplication_p.h
@@ -298,6 +298,8 @@ public:
 #elif defined(Q_WS_QWS)
     static bool qws_apply_settings();
     static QWidget *findWidget(const QObjectList&, const QPoint &, bool rec);
+#elif defined(Q_WS_HAIKU)
+    static bool haiku_apply_settings();
 #endif
     static bool quitOnLastWindowClosed;
     static void emitLastWindowClosed();
@@ -353,6 +355,10 @@ public:
     static void x11_initialize_style();
 #endif
 
+#if defined(Q_WS_HAIKU)
+    static void haiku_initialize_style();
+#endif
+
     enum KeyPlatform {
         KB_Win = 1,
         KB_Mac = 2,
@@ -530,7 +536,7 @@ public:
     static Qt::NavigationMode navigationMode;
 #endif
 
-#if defined(Q_WS_MAC) || defined(Q_WS_X11)
+#if defined(Q_WS_MAC) || defined(Q_WS_X11) || defined(Q_WS_HAIKU)
     void _q_alertTimeOut();
     QHash<QWidget *, QTimer *> alertTimerHash;
 #endif
