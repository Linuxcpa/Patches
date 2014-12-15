--- splitmrb.c.orig	2005-11-17 12:19:38.000000000 +0100
+++ splitmrb.c	2012-03-02 13:05:31.593391213 +0100
--- splitmrb.c.orig	2005-11-17 11:19:38.045088768 +0000
+++ splitmrb.c
@@ -30,6 +30,7 @@ Output files are created in the current 
 extensions *.EGA,*.VGA,*.CGA,*.854,*.MAC or *.BMP,*.WMF or *.Snn,*.nnn (where
 n is a digit from 0 to 9). Discarded hotspot info will be written to stdout.
 */
+#include <stdint.h>
 #include <sys/types.h>
 #include <stdio.h>
 #include <string.h>
@@ -237,9 +238,9 @@ int GetPackedByte(FILE *f) // RulLen dec
 #endif
 typedef struct
 {
-  u_int8_t c1,c2,c3;
-  u_int16_t x,y,w,h;
-  u_int32_t hash;
+  uint8_t c1,c2,c3;
+  uint16_t x,y,w,h;
+  uint32_t hash;
 } HOTSPOT
 #if defined(__GNUC__) && __GNUC__ < 3
 __attribute__((packed))
