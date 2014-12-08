$NetBSD: patch-src_common__interface.c,v 1.1 2013/12/21 11:05:23 jperkin Exp $

Add Darwin support.

--- src/common_interface.c.orig	2013-07-20 22:54:34.006029312 +0000
+++ src/common_interface.c
@@ -28,7 +28,7 @@
  *
  * \author Ian Romanick <idr@us.ibm.com>
  */
-
+#include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
 #include <errno.h>
@@ -67,9 +67,34 @@
 # define HTOLE_32(x)   (x)
 #endif /* Solaris */
 
+#elif defined(__APPLE__)
+
+#include <architecture/byte_order.h>
+
+#if __BYTE_ORDER == __BIG_ENDIAN
+# define LETOH_16(x)	OSSwapInt16(x)
+# define HTOLE_16(x)	OSSwapInt16(x)
+# define LETOH_32(x)	OSSwapInt32(x)
+# define HTOLE_32(x)	OSSwapInt32(x)
+#else
+# define LETOH_16(x)	(x)
+# define HTOLE_16(x)	(x)
+# define LETOH_32(x)	(x)
+# define HTOLE_32(x)	(x)
+#endif /* darwin */
+
+#elif defined(__HAIKU__)
+
+#if __BYTE_ORDER == __BIG_ENDIAN
+# define LETOH_16(x)	(x)
+# define HTOLE_16(x)	(x)
+# define LETOH_32(x)	(x)
+# define HTOLE_32(x)	(x)
+#endif /* haiku */
+
 #else
 
-#include <sys/endian.h>
+#include <endian.h>
 
 #define HTOLE_16(x)	htole16(x)
 #define HTOLE_32(x)	htole32(x)
