$NetBSD$

--- src/leafparse.c.orig	2010-03-14 21:39:42.000000000 +0000
+++ src/leafparse.c
@@ -27,7 +27,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <string.h>
 #include <unistd.h>
 
