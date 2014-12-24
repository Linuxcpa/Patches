$NetBSD$

--- rpc2-src/rpc2b.c.orig	2010-03-22 19:18:30.000000000 +0000
+++ rpc2-src/rpc2b.c
@@ -37,7 +37,7 @@ Pittsburgh, PA.
 
 */
 
-
+#include <fcntl.h>
 #ifdef HAVE_CONFIG_H
 #include <config.h>
 #endif
