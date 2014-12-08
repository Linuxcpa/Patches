$NetBSD$

--- libplot/x_retrieve.c.orig	2008-07-16 00:54:10.000000000 +0000
+++ libplot/x_retrieve.c
@@ -63,7 +63,7 @@
    ever-growing linked list is probably good enough if there aren't huge
    numbers of font or font size changes.  It's deallocated when the Plotter
    is destroyed; see x_defplot.c. */
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 #include "g_her_metr.h"
