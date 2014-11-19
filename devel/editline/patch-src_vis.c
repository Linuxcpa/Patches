$NetBSD$

--- src/vis.c.orig	2014-02-18 02:51:42.697040896 +0000
+++ src/vis.c
@@ -64,6 +64,10 @@ __RCSID("$NetBSD: vis.c,v 1.60 2013/02/2
 __FBSDID("$FreeBSD$");
 #endif
 
+#ifndef NBBY
+#define NBBY   8
+#endif
+
 #include <sys/types.h>
 #include <sys/param.h>
 
