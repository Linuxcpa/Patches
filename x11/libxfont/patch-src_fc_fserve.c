$NetBSD$

--- src/fc/fserve.c.orig	2014-05-16 02:38:27.000000000 +0000
+++ src/fc/fserve.c
@@ -49,7 +49,7 @@ in this Software without prior written a
 /*
  * font server specific font access
  */
-
+#include <sys/select.h>
 #ifdef HAVE_CONFIG_H
 #include <config.h>
 #endif
@@ -1307,8 +1307,6 @@ fs_block_handler(pointer data, OSTimePtr
     int		soonest;
     FSFpePtr    conn;
 
-    XFD_ORSET((fd_set *)LastSelectMask, (fd_set *)LastSelectMask,
-	      &_fs_fd_mask);
     /*
      * Flush all pending output
      */
