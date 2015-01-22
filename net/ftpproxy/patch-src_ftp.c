$NetBSD$

--- src/ftp.c.orig	2004-07-30 12:52:12.000000000 +0000
+++ src/ftp.c
@@ -37,7 +37,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <sys/socket.h>
 #include <netdb.h>
 #include <netinet/in.h>
