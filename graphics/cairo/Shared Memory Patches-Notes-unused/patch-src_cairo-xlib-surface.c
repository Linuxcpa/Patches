$NetBSD$

--- src/cairo-xlib-surface.c.orig	2013-08-26 15:07:21.051118080 +0000
+++ src/cairo-xlib-surface.c
@@ -70,7 +70,7 @@
 
 #include <X11/extensions/XShm.h>
 #include <sys/ipc.h>
-#include <sys/shm.h>
+#include "shm.h"
 
 #define XLIB_COORD_MAX 32767
 
