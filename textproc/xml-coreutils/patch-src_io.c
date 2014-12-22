$NetBSD$

--- src/io.c.orig	2010-05-16 09:36:20.000000000 +0000
+++ src/io.c
@@ -29,7 +29,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <sys/wait.h>
 #include <string.h>
 #include <unistd.h>
