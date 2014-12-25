$NetBSD$

--- src/gui/text/qfont_p.h.orig	2014-04-10 18:37:12.008126464 +0000
+++ src/gui/text/qfont_p.h
@@ -285,6 +285,10 @@ public:
     int timer_id;
 };
 
+#ifdef Q_WS_HAIKU
+Q_GUI_EXPORT const char *qt_fontFamilyFromStyleHint(const QFontDef &request);
+#endif
+
 Q_GUI_EXPORT int qt_defaultDpiX();
 Q_GUI_EXPORT int qt_defaultDpiY();
 Q_GUI_EXPORT int qt_defaultDpi();
