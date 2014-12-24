$NetBSD$

--- src/FeatureConfig.cc.orig	2014-03-23 16:12:57.000000000 +0000
+++ src/FeatureConfig.cc
@@ -33,7 +33,7 @@
  */
 /* copyright --> */
 #include "FeatureConfig.h"
-
+#include <sys/select.h>
 #ifdef HAVE_ZLIB
 # include <zlib.h>
 #endif // HAVE_ZLIB
