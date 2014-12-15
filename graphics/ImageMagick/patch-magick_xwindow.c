$NetBSD$

--- magick/xwindow.c.orig	2014-05-25 23:27:31.003407872 +0000
+++ magick/xwindow.c
@@ -95,7 +95,6 @@
 # include <machine/param.h>
 #endif
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #include <X11/extensions/XShm.h>
 #endif
 #if defined(MAGICKCORE_HAVE_SHAPE)
