$NetBSD$

--- src/ima_oki_adpcm.c.orig	2014-12-07 20:06:49.000000000 +0000
+++ src/ima_oki_adpcm.c
@@ -18,7 +18,7 @@
 */
 
 /* ADPCM: IMA, OKI <==> 16-bit PCM. */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <string.h>
