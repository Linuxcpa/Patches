$NetBSD$

--- lib/rpc/clnt_generic.c.orig	2013-11-06 20:52:23.054263808 +0000
+++ lib/rpc/clnt_generic.c
@@ -39,7 +39,11 @@ static char sccsid[] = "@(#)clnt_generic
 #include <string.h>
 #include <gssrpc/rpc.h>
 #include <sys/socket.h>
+#if defined(__HAIKU__)
+#include <errno.h>
+#else
 #include <sys/errno.h>
+#endif
 #include <netdb.h>
 #include "autoconf.h"
 
