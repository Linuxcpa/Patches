$NetBSD$

--- lib/zip_name_locate.c.orig	2014-09-17 07:03:27.000000000 +0000
+++ lib/zip_name_locate.c
@@ -32,7 +32,7 @@
 */
 
 
-
+#include <strings.h>
 #include <string.h>
 
 #include "zipint.h"
