$NetBSD$

--- src/cpus/cpu_mips.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/cpus/cpu_mips.cc
@@ -28,6 +28,7 @@
  *  MIPS core CPU emulation.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
