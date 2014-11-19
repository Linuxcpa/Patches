$NetBSD$

--- util/options.cc.orig	2014-07-25 16:34:02.000000000 +0000
+++ util/options.cc
@@ -25,7 +25,7 @@
  */
 
 #include "options.hh"
-
+#include <strings.h>
 #ifdef HAVE_FREETYPE
 #include <hb-ft.h>
 #endif
