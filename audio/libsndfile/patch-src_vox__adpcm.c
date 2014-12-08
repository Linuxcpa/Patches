$NetBSD$

--- src/vox_adpcm.c.orig	2011-01-19 10:08:46.000000000 +0000
+++ src/vox_adpcm.c
@@ -28,7 +28,7 @@
  * about the clipping, a DC offset can be removed by passing the decoded audio
  * through a high-pass filter at e.g. 10Hz.
  */
-
+#include <stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
