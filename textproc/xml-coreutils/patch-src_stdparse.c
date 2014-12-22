$NetBSD$

--- src/stdparse.c.orig	2010-03-19 23:00:37.000000000 +0000
+++ src/stdparse.c
@@ -26,7 +26,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <string.h>
 #include <unistd.h>
 
