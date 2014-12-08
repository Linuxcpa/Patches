$NetBSD$

--- ffmpeg/libavformat/jacosubdec.c.orig	2013-05-05 18:11:42.000000000 +0000
+++ ffmpeg/libavformat/jacosubdec.c
@@ -24,7 +24,7 @@
  * @see http://unicorn.us.com/jacosub/jscripts.html
  * @todo Support P[ALETTE] directive.
  */
-
+#include <strings.h>
 #include "avformat.h"
 #include "internal.h"
 #include "libavcodec/jacosub.h"
