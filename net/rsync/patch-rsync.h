$NetBSD$

--- rsync.h.orig	2013-11-09 00:01:30.065273856 +0000
+++ rsync.h
@@ -442,7 +442,13 @@ enum delret {
 #ifdef MAKEDEV_TAKES_3_ARGS
 #define MAKEDEV(devmajor,devminor) makedev(0,devmajor,devminor)
 #else
+#ifndef __HAIKU__
 #define MAKEDEV(devmajor,devminor) makedev(devmajor,devminor)
+#else
+#define MAKEDEV(devmajor,devminor) ((dev_t)0)
+#define major(dev) (0)
+#define minor(dev) (0)
+#endif
 #endif
 
 #ifdef HAVE_COMPAT_H
