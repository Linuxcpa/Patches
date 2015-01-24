$NetBSD$

--- src/gui/kernel/qwidget_p.h.orig	2014-04-10 18:37:12.006553600 +0000
+++ src/gui/kernel/qwidget_p.h
@@ -919,6 +919,9 @@ public:
     void registerTouchWindow();
     QList<WId> widCleanupList;
     uint isGLGlobalShareWidget : 1;
+#elif defined(Q_WS_HAIKU) // <--------------------------------------------------------- HAIKU
+	QtHaikuWindow *nativeWindow;
+	QtHaikuView *nativeView;
 #endif
 
 };
