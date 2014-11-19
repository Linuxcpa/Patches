$NetBSD$

--- tools/build/src/engine/jam.h.orig	2014-06-19 17:15:38.045088768 +0000
+++ tools/build/src/engine/jam.h
@@ -125,6 +125,11 @@
     #define OS_BEOS
     #define NO_VFORK
 #endif
+#ifdef __HAIKU__
+    #define unix
+    #define OSMINOR "OS=HAIKU"
+    #define OS_HAIKU
+#endif
 #ifdef __bsdi__
     #define OSMINOR "OS=BSDI"
     #define OS_BSDI
