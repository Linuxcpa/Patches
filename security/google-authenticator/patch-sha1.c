$NetBSD$

--- sha1.c.orig	2014-12-12 03:48:36.000000000 +0000
+++ sha1.c
@@ -40,6 +40,7 @@
  *
  *****************************************************************************
 */
+#include <endian.h>
 #define _BSD_SOURCE
 #include <sys/types.h> // Defines BYTE_ORDER, iff _BSD_SOURCE is defined
 #include <string.h>
