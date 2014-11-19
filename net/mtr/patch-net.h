$NetBSD$

--- net.h.orig	2013-04-29 18:22:05.000000000 +0000
+++ net.h
@@ -26,6 +26,10 @@
 #include <netinet/icmp6.h>
 #endif
 
+#ifdef __HAIKU__
+#include <sys/select.h>
+#endif
+
 int net_preopen(void);
 int net_selectsocket(void);
 int net_open(struct hostent *host);
