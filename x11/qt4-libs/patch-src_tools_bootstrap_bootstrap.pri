$NetBSD$

--- src/tools/bootstrap/bootstrap.pri.orig	2014-04-10 18:37:12.009699328 +0000
+++ src/tools/bootstrap/bootstrap.pri
@@ -55,7 +55,7 @@ hpux-acc*|hpuxi-acc* {
 }
 !contains(QT_CONFIG, zlib):!contains(QT_CONFIG, no-zlib):!cross_compile {
     symbian:LIBS_PRIVATE += -llibz
-    else:if(unix|win32-g++*):LIBS_PRIVATE += -lz
+    else:if(unix|win32-g++*|haiku):LIBS_PRIVATE += -lz
     else:LIBS += zdll.lib
 }
 win32:LIBS += -luser32
