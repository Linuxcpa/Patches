$NetBSD$

--- src/txw.c.orig	2011-01-19 10:08:58.000000000 +0000
+++ src/txw.c
@@ -22,7 +22,7 @@
 ** This header parser was written using information from the SoX source code
 ** and trial and error experimentation. The code here however is all original.
 */
-
+#include	<stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
