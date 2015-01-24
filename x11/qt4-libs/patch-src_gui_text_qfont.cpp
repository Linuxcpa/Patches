$NetBSD$

--- src/gui/text/qfont.cpp.orig	2014-04-10 18:37:12.002621440 +0000
+++ src/gui/text/qfont.cpp
@@ -232,6 +232,8 @@ Q_GUI_EXPORT int qt_defaultDpiY()
     }
 #elif defined(Q_OS_SYMBIAN)
     dpi = S60->defaultDpiY;
+#elif defined(Q_WS_HAIKU)
+	dpi = 72;    
 #endif // Q_WS_X11
 
     return dpi;
