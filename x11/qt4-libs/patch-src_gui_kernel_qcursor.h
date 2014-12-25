$NetBSD$

--- src/gui/kernel/qcursor.h.orig	2014-04-10 18:37:12.028835840 +0000
+++ src/gui/kernel/qcursor.h
@@ -76,6 +76,10 @@ class QCursorData;
 class QBitmap;
 class QPixmap;
 
+#if defined(Q_WS_HAIKU)
+class BCursor;
+#endif
+
 #if defined(Q_WS_MAC)
 void qt_mac_set_cursor(const QCursor *c);
 #endif
@@ -134,6 +138,8 @@ public:
     int handle() const;
 #elif defined(Q_OS_SYMBIAN)
     Qt::HANDLE handle() const;
+#elif defined(Q_WS_HAIKU)
+    BCursor *handle() const;
 #endif
 #endif
 
