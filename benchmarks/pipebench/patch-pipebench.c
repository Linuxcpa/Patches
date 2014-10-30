$NetBSD$

--- pipebench.c.orig	2003-04-20 16:49:58.000000000 +0000
+++ pipebench.c
@@ -33,6 +33,7 @@
 #include <sys/time.h>
 #include <sys/types.h>
 #include <errno.h>
+#include <stdint.h>
 
 #ifdef sun
 #define u_int8_t uint8_t
