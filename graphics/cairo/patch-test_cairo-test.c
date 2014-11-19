$NetBSD$

--- test/cairo-test.c.orig	2013-08-26 15:07:21.016777216 +0000
+++ test/cairo-test.c
@@ -40,6 +40,7 @@
 #include <unistd.h>
 #endif
 #include <errno.h>
+#include <fenv.h>
 #include <string.h>
 #if HAVE_FCFINI
 #include <fontconfig/fontconfig.h>
@@ -149,10 +150,6 @@ _cairo_test_init (cairo_test_context_t *
 
     MF (MEMFAULT_DISABLE_FAULTS ());
 
-#if HAVE_FEENABLEEXCEPT
-    feenableexcept (FE_DIVBYZERO | FE_INVALID | FE_OVERFLOW);
-#endif
-
     ctx->test = test;
     ctx->test_name = _cairo_test_fixup_name (test_name);
     ctx->output = output;
