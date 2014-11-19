$NetBSD$

--- dns.c.orig	2013-06-26 08:25:56.000000000 +0000
+++ dns.c
@@ -27,7 +27,9 @@
 #include <sys/time.h>
 #include <sys/select.h>
 #include <sys/stat.h>
+#ifndef __HAIKU__
 #include <sys/errno.h>
+#endif
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
