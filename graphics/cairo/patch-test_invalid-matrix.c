$NetBSD$

--- test/invalid-matrix.c.orig	2013-08-26 15:07:21.037486592 +0000
+++ test/invalid-matrix.c
@@ -26,7 +26,6 @@
 
 #define _ISOC99_SOURCE	/* for INFINITY */
 #define _GNU_SOURCE 1	/* for fedisableeexcept() et al */
-
 #include "cairo-test.h"
 
 #if !defined(INFINITY)
@@ -65,9 +64,6 @@ if ((status) == CAIRO_STATUS_SUCCESS) {	
 }
 
     /* clear floating point exceptions (added by cairo_test_init()) */
-#if HAVE_FEDISABLEEXCEPT
-    fedisableexcept (FE_INVALID);
-#endif
 
     /* create a bogus matrix and check results of attempted inversion */
     bogus.x0 = bogus.xy = bogus.xx = cairo_test_NaN ();
