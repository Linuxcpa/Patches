$NetBSD$

--- zzip/mmapped.c.orig	2009-08-23 11:38:22.000000000 +0000
+++ zzip/mmapped.c
@@ -26,6 +26,8 @@
  *          of the Mozilla Public License 1.1
  */
 
+#include <strings.h>
+
 #define _ZZIP_DISK_FILE_STRUCT 1
 
 #ifdef __linux__
