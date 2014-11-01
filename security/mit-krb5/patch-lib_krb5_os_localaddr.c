$NetBSD$

--- lib/krb5/os/localaddr.c.orig	2013-11-06 20:52:23.019922944 +0000
+++ lib/krb5/os/localaddr.c
@@ -101,6 +101,10 @@
 #endif
 #endif
 
+#if defined(__HAIKU__)
+#include <sys/sockio.h>
+#endif
+
 #ifdef KRB5_USE_NS
 #include <netns/ns.h>
 #ifndef USE_AF
