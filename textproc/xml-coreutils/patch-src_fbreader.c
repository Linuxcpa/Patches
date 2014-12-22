$NetBSD$

--- src/fbreader.c.orig	2010-02-01 03:56:37.000000000 +0000
+++ src/fbreader.c
@@ -26,7 +26,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <string.h>
 #include <unistd.h>
 #include <sys/stat.h>
