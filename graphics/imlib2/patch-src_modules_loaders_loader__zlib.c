$NetBSD$

--- src/modules/loaders/loader_zlib.c.orig	2013-12-21 10:16:10.000000000 +0000
+++ src/modules/loaders/loader_zlib.c
@@ -4,7 +4,7 @@
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <assert.h>
-
+#include <strings.h>
 #define OUTBUF_SIZE 16484
 
 static int
