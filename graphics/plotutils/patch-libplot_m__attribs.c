$NetBSD$

--- libplot/m_attribs.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/m_attribs.c
@@ -18,7 +18,7 @@
 
 #include "sys-defines.h"
 #include "extern.h"
-
+#include <strings.h>
 /* ARGS: mask = attributes to be updated */
 void
 _pl_m_set_attributes (R___(Plotter *_plotter) unsigned int mask)
