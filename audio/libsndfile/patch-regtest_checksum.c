$NetBSD$

--- regtest/checksum.c.orig	2011-01-19 10:26:58.000000000 +0000
+++ regtest/checksum.c
@@ -19,7 +19,7 @@
 /*
 **	A simple checksum for short, int and float data.
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
