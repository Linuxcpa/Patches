$NetBSD$

--- src/gui/kernel/haiku.pri.orig	2014-12-25 04:44:43.276299776 +0000
+++ src/gui/kernel/haiku.pri
@@ -0,0 +1,2 @@
+DEFINES += QT_NO_FONTCONFIG
+LIBS_PRIVATE += -lbe
