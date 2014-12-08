$NetBSD$

--- ffmpeg/ffserver.c.orig	2013-05-05 18:11:41.000000000 +0000
+++ ffmpeg/ffserver.c
@@ -22,7 +22,7 @@
  * @file
  * multiple format streaming server based on the FFmpeg libraries
  */
-
+#include <strings.h>
 #include "config.h"
 #if !HAVE_CLOSESOCKET
 #define closesocket close
