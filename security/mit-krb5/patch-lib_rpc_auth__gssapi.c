$NetBSD$

--- lib/rpc/auth_gssapi.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/rpc/auth_gssapi.c
@@ -5,7 +5,11 @@
 
 #include <stdio.h>
 #include <string.h>
+#if defined(__HAIKU__)
+#include <errno.h>
+#else
 #include <sys/errno.h>
+#endif
 
 #include <gssapi/gssapi.h>
 #include <gssapi/gssapi_generic.h>
