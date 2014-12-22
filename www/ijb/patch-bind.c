$NetBSD$

--- bind.c.orig	1998-10-31 03:58:47.000000000 +0000
+++ bind.c
@@ -27,7 +27,7 @@ char *bind_rcs = "$Id: bind.c,v 2.9 1998
 #ifndef __BEOS__
 #include <netinet/tcp.h>
 #include <arpa/inet.h>
-#include <sys/signal.h>
+#include <signal.h>
 #endif
 
 #endif
