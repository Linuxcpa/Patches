$NetBSD$

--- ftp.c.orig	2014-06-11 13:12:12.000000000 +0000
+++ ftp.c
@@ -56,7 +56,7 @@
  * $ftpioId: ftpio.c,v 1.30 1998/04/11 07:28:53 phk Exp $
  *
  */
-
+#include <strings.h>
 #ifdef __linux__
 /* Keep this down to Linux, it can create surprises else where. */
 #define _GNU_SOURCE
