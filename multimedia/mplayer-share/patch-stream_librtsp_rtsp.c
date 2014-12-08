$NetBSD$

--- stream/librtsp/rtsp.c.orig	2010-11-14 09:12:34.000000000 +0000
+++ stream/librtsp/rtsp.c
@@ -28,7 +28,7 @@
  *    2006, Benjamin Zores and Vincent Mussard
  *      fixed a lot of RFC compliance issues.
  */
-
+#include <strings.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <assert.h>
