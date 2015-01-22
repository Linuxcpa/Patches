$NetBSD$

--- src/main.c.orig	2004-07-30 13:30:00.000000000 +0000
+++ src/main.c
@@ -34,7 +34,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <sys/socket.h>
 #include <netdb.h>
 #include <netinet/in.h>
