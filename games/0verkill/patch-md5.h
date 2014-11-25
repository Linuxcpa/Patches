$NetBSD$

--- md5.h.orig	2001-12-15 17:51:52.000000000 +0000
+++ md5.h
@@ -1,6 +1,6 @@
 #ifndef _MD5_H_
 #define _MD5_H_
-
+#include <stdint.h>
 #include <sys/types.h>
 
 #define MD5_HASHBYTES 16
