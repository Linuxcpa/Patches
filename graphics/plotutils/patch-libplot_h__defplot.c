$NetBSD$

--- libplot/h_defplot.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/h_defplot.c
@@ -43,7 +43,7 @@
    appropriate for an HP-GL[/2] device.  And in fact, that's what
    determines our choice of default viewport size -- for all Plotters, not
    just HPGLPlotters.  See comments in g_pagetype.h.  */
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 
