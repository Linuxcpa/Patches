$NetBSD$

--- misc.h.orig	2010-04-04 19:34:56.000000000 +0000
+++ misc.h
@@ -27,7 +27,7 @@
  */
 #ifndef _MISC_H_
 #define _MISC_H_
-
+#include <stdint.h>
 #include <openssl/md5.h>
 
 #include <sys/types.h>
