$NetBSD$

--- unix/vm-display-X11/sqUnixX11.c.orig	2012-07-30 18:32:54.000000000 +0000
+++ unix/vm-display-X11/sqUnixX11.c
@@ -119,7 +119,7 @@
 #endif
 #if defined(USE_XSHM)
 #  include <sys/ipc.h>
-#  include <sys/shm.h>
+#  include "shm.h"
 #  include <X11/extensions/XShm.h>
 #endif
 #if defined(HAVE_LIBXRENDER)
