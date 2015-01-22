$NetBSD$

--- src/client/cl_net.c.orig	2000-11-08 09:59:24.000000000 +0000
+++ src/client/cl_net.c
@@ -4,7 +4,7 @@
  */
 
 #include <unistd.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <fcntl.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
