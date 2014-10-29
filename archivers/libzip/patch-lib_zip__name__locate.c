$NetBSD$

--- lib/zip_name_locate.c.orig	2012-08-11 00:39:10.000000000 +0000
+++ lib/zip_name_locate.c
@@ -32,7 +32,7 @@
 */
 
 
-
+#include <strings.h>
 #include <string.h>
 #ifdef HAVE_STRINGS_H
 #include <strings.h>
