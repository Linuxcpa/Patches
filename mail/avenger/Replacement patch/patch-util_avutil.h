$NetBSD: patch-util_avutil.h,v 1.1 2012/02/16 19:00:14 hans Exp $

--- util/avutil.h.orig	2009-06-26 21:15:58.053215232 +0000
+++ util/avutil.h
@@ -20,7 +20,7 @@
  * USA
  *
  */
-
+#include <stdint.h>
 #ifndef _AVUTIL_H_
 #define _AVUTIL_H_ 1
 
@@ -70,6 +70,13 @@ int clock_gettime (int, struct timespec 
 # define CLOCK_PROF 2
 #endif /* !CLOCK_PROF */
 
+#ifndef HAVE_INT16
+typedef short int16_t;
+#endif /* !HAVE_INT16 */
+#ifndef HAVE_U_INT16
+typedef unsigned short u_int16_t;
+#endif /* !HAVE_U_INT16 */
+
 #ifndef HAVE_INT32_T
 typedef int int32_t;
 #endif /* !HAVE_INT32_T */
