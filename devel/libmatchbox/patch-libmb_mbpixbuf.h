$NetBSD$

--- libmb/mbpixbuf.h.orig	2006-07-07 15:16:57.000000000 +0000
+++ libmb/mbpixbuf.h
@@ -39,7 +39,7 @@
 /* XXX if have_shm */
 
 #include <sys/ipc.h>
-#include <sys/shm.h>
+#include "shm.h"
 #include <sys/time.h>
 #include <X11/extensions/XShm.h>
 #include <X11/Xmd.h> 
