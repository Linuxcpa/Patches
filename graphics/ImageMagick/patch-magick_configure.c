$NetBSD$

--- magick/configure.c.orig	2014-12-14 20:28:22.000000000 +0000
+++ magick/configure.c
@@ -59,6 +59,11 @@
 /*
   Define declarations.
 */
+/* Directory where architecture-dependent files live. */
+#ifndef MAGICKCORE_LIBRARY_PATH
+#define MAGICKCORE_LIBRARY_PATH "/boot/home/pkg/lib/ImageMagick-6.8.9/"
+#endif
+
 #define ConfigureFilename  "configure.xml"
 
 #ifdef _OPENMP
