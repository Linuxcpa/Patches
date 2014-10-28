$NetBSD$

--- zzip/stat.c.orig	2009-08-23 11:38:22.000000000 +0000
+++ zzip/stat.c
@@ -18,6 +18,7 @@
  *      of 
  */
 
+#include <strings.h>
 #include <zzip/lib.h>           /* exported... */
 #include <zzip/file.h>
 #include <string.h>
