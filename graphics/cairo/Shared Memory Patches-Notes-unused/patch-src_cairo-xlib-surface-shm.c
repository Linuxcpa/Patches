$NetBSD$

--- src/cairo-xlib-surface-shm.c.orig	2013-08-26 15:07:21.015466496 +0000
+++ src/cairo-xlib-surface-shm.c
@@ -150,7 +150,7 @@ void _cairo_xlib_display_fini_shm (cairo
 #include <X11/extensions/shmstr.h>
 #endif
 #include <sys/ipc.h>
-#include <sys/shm.h>
+#include "shm.h"
 
 #define MIN_PIXMAP_SIZE 4096
 
