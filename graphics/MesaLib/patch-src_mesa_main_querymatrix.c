$NetBSD$

--- src/mesa/main/querymatrix.c.orig	2011-10-15 00:43:58.058982400 +0000
+++ src/mesa/main/querymatrix.c
@@ -75,12 +75,6 @@ fpclassify(double x)
      (defined(__sun) && defined(__C99FEATURES__)) || defined(__MINGW32__) || \
      (defined(__sun) && defined(__GNUC__))
 
-/* fpclassify is available. */
-
-#elif !defined(_XOPEN_SOURCE) || _XOPEN_SOURCE < 600
-
-enum {FP_NAN, FP_INFINITE, FP_ZERO, FP_SUBNORMAL, FP_NORMAL}
-fpclassify(double x)
 {
    /* XXX do something better someday */
    return FP_NORMAL;
