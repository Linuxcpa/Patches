$NetBSD$

--- ffmpeg/libavutil/internal.h.orig	2013-05-05 18:11:42.000000000 +0000
+++ ffmpeg/libavutil/internal.h
@@ -22,7 +22,7 @@
  * @file
  * common internal API header
  */
-
+#include <strings.h>
 #ifndef AVUTIL_INTERNAL_H
 #define AVUTIL_INTERNAL_H
 
