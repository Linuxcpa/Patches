$NetBSD$

--- src/machines/machine.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/machines/machine.cc
@@ -28,6 +28,7 @@
  *  Machine registry.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdarg.h>
