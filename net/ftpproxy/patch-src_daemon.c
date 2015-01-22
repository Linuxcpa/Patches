$NetBSD$

--- src/daemon.c.orig	2003-10-26 22:10:19.000000000 +0000
+++ src/daemon.c
@@ -36,7 +36,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <sys/socket.h>
 #include <netdb.h>
 #include <netinet/in.h>
