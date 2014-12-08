$NetBSD$

--- libplot/g_colors.c.orig	2008-07-16 00:54:08.000000000 +0000
+++ libplot/g_colors.c
@@ -30,7 +30,7 @@
    fillcolor, or bgcolor is called to set the color.  If the name is not
    found, a default color (black for pen and fill, white for bg) is
    substituted. */
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 #include "g_colorname.h"
