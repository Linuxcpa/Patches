$NetBSD$

--- lib/rpc/bindresvport.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/rpc/bindresvport.c
@@ -35,7 +35,9 @@
 #include <string.h>
 #include <unistd.h>
 #include <sys/types.h>
+#if !defined(__HAIKU__)
 #include <sys/errno.h>
+#endif
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <gssrpc/rpc.h>
