$NetBSD$

--- lib/rpc/pmap_rmt.c.orig	2013-11-06 20:52:23.051118080 +0000
+++ lib/rpc/pmap_rmt.c
@@ -47,7 +47,7 @@ static char sccsid[] = "@(#)pmap_rmt.c 1
 #include <gssrpc/pmap_clnt.h>
 #include <gssrpc/pmap_rmt.h>
 #include <sys/socket.h>
-#ifdef sun
+#if defined(sun) || defined(__HAIKU__)
 #include <sys/sockio.h>
 #endif
 #include <stdio.h>
