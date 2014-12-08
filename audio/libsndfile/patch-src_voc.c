$NetBSD$

--- src/voc.c.orig	2011-01-19 10:08:49.000000000 +0000
+++ src/voc.c
@@ -23,7 +23,7 @@
 **	hacked it to fit their needs.
 **	Utterly woeful.
 */
-
+#include	<stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
