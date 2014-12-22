$NetBSD$

--- src/rollback.c.orig	2010-01-29 02:14:59.000000000 +0000
+++ src/rollback.c
@@ -28,7 +28,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <string.h>
 #include <unistd.h>
 #include <stdlib.h>
