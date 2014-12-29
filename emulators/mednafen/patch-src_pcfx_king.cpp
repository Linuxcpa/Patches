$NetBSD$

--- src/pcfx/king.cpp.orig	2009-05-15 21:44:51.000000000 +0000
+++ src/pcfx/king.cpp
@@ -16,7 +16,7 @@
  */
 
 /* Emulation for HuC6261(descendant of the VCE) and the HuC6272(KING) */
-
+#include <strings.h>
 #include "pcfx.h"
 #include "v810_cpu.h"
 #include "vdc.h"
