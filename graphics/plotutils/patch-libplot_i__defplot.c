$NetBSD$

--- libplot/i_defplot.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/i_defplot.c
@@ -24,7 +24,7 @@
 #include "sys-defines.h"
 #include "extern.h"
 #include "xmi.h"		/* use libxmi scan conversion module */
-
+#include <strings.h>
 /* forward references */
 static bool parse_bitmap_size (const char *bitmap_size_s, int *width, int *height);
 
