$NetBSD$

--- lib/randutils.c.orig	2014-06-02 08:40:58.720633856 +0000
+++ lib/randutils.c
@@ -13,7 +13,9 @@
 #include <string.h>
 #include <sys/time.h>
 
+#ifndef __HAIKU__
 #include <sys/syscall.h>
+#endif
 
 #include "randutils.h"
 
