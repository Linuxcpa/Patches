$NetBSD$

--- src/chanmap.c.orig	2011-01-19 10:13:07.000000000 +0000
+++ src/chanmap.c
@@ -21,7 +21,7 @@
 **
 **		http://developer.apple.com/documentation/MusicAudio/Reference/CAFSpec/CAFSpec.pdf
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
