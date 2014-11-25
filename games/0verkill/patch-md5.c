$NetBSD$

--- md5.c.orig	2001-12-15 17:51:52.000000000 +0000
+++ md5.c
@@ -14,7 +14,7 @@
  * needed on buffers full of bytes, and then call MD5Final, which
  * will fill a supplied 16-byte array with the digest.
  */
-
+#include <stdint.h>.
 #include <string.h>		/* for memcpy() */
 #include "md5.h"
 
