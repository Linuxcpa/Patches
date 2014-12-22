$NetBSD$

--- src/stdout.c.orig	2010-03-22 22:56:50.000000000 +0000
+++ src/stdout.c
@@ -28,7 +28,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <unistd.h>
 #include <string.h>
 
