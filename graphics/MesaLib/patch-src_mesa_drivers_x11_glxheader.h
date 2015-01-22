$NetBSD$

--- src/mesa/drivers/x11/glxheader.h.orig	2011-01-08 02:17:57.000000000 +0000
+++ src/mesa/drivers/x11/glxheader.h
@@ -38,7 +38,6 @@
 # include <X11/Xutil.h>
 # ifdef USE_XSHM  /* was SHM */
 #  include <sys/ipc.h>
-#  include <sys/shm.h>
 #  include <X11/extensions/XShm.h>
 # endif
 # include <GL/glx.h>
