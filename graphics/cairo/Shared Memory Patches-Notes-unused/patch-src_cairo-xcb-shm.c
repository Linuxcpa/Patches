$NetBSD$

--- src/cairo-xcb-shm.c.orig	2013-08-26 15:07:21.000000000 +0000
+++ src/cairo-xcb-shm.c
@@ -42,9 +42,9 @@
 #include "cairo-list-inline.h"
 #include "cairo-mempool-private.h"
 
-#include <xcb/shm.h>
+#include "/boot/home/pkg/include/xcb/shm.h"
 #include <sys/ipc.h>
-#include <sys/shm.h>
+#include "shm.h"
 #include <errno.h>
 
 #define CAIRO_MAX_SHM_MEMORY (16*1024*1024)
