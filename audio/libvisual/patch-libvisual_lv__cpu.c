$NetBSD$

--- libvisual/lv_cpu.c.orig	2006-01-22 13:23:37.000000000 +0000
+++ libvisual/lv_cpu.c
@@ -26,7 +26,7 @@
  */
 
 /* FIXME: clean this entire file up */
-
+#include <stdint.h>
 #include "lvconfig.h"
 
 #if defined(VISUAL_ARCH_POWERPC)
