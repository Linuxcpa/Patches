$NetBSD$

--- src/config.c.orig	2004-07-30 12:51:03.000000000 +0000
+++ src/config.c
@@ -36,7 +36,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <sys/socket.h>
 #include <netdb.h>
 #include <netinet/in.h>
