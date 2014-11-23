$NetBSD$

--- src/modules/loaders/loader_bz2.c.orig	2013-12-21 10:16:10.000000000 +0000
+++ src/modules/loaders/loader_bz2.c
@@ -4,7 +4,7 @@
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <assert.h>
-
+#include <string.h>
 #define OUTBUF_SIZE 16384
 #define INBUF_SIZE 1024
 
