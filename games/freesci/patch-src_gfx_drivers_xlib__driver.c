$NetBSD$

--- src/gfx/drivers/xlib_driver.c.orig	2006-02-11 22:52:35.017563648 +0000
+++ src/gfx/drivers/xlib_driver.c
@@ -38,7 +38,6 @@
 
 #ifdef HAVE_MITSHM
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #include <X11/extensions/XShm.h>
 #if defined(HAVE_X11_EXTENSIONS_XRENDER_H)
 #  define HAVE_RENDER
