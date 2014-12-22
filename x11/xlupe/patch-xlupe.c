$NetBSD$

--- xlupe.c.orig	2014-12-20 09:29:45.362020864 +0000
+++ xlupe.c
@@ -64,7 +64,6 @@
 #endif /* MOTIF */
 
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #include <X11/extensions/XShm.h>
 
 #ifdef HAS_XPM
