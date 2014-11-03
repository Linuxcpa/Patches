$NetBSD$

--- float.h.orig	2014-02-20 00:04:04.000000000 +0000
+++ float.h
@@ -39,13 +39,16 @@
 #ifndef NASM_FLOAT_H
 #define NASM_FLOAT_H
 
-#include "nasm.h"
+#ifdef __HAIKU__
+  #include <stdint.h>
+  #include "nasm.h"
+#endif
 
 enum float_round {
     FLOAT_RC_NEAR,
     FLOAT_RC_ZERO,
     FLOAT_RC_DOWN,
-    FLOAT_RC_UP,
+    FLOAT_RC_UP
 };
 
 int float_const(const char *string, int sign, uint8_t *result, int bytes,
