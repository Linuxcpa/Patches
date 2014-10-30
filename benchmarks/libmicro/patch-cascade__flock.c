$NetBSD$

--- cascade_flock.c.orig	2007-07-02 21:17:45.000000000 +0000
+++ cascade_flock.c
@@ -50,7 +50,7 @@
 #include "libmicro.h"
 
 #ifndef LOCK_EX
-#include "/usr/ucbinclude/sys/file.h"
+#include <sys/file.h>
 extern int flock(int fd, int operation);
 #endif
 
