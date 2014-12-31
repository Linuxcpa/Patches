$NetBSD$

--- util/compatfd.c.orig	2014-08-01 14:12:17.000000000 +0000
+++ util/compatfd.c
@@ -17,7 +17,9 @@
 #include "qemu/compatfd.h"
 #include "qemu/thread.h"
 
+#ifndef __HAIKU__
 #include <sys/syscall.h>
+#endif
 
 struct sigfd_compat_info
 {
