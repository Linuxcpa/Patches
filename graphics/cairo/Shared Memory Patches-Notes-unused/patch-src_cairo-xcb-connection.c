$NetBSD$

--- src/cairo-xcb-connection.c.orig	2013-08-26 15:07:21.000000000 +0000
+++ src/cairo-xcb-connection.c
@@ -43,8 +43,8 @@
 
 #if CAIRO_HAS_XCB_SHM_FUNCTIONS
 #include <sys/ipc.h>
-#include <sys/shm.h>
-#include <xcb/shm.h>
+#include "shm.h"
+#include "/boot/home/pkg/include/xcb/shm.h"
 #endif
 
 typedef struct _cairo_xcb_xrender_format {
