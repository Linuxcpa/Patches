$NetBSD$

--- src/mp4property.cpp.orig	2012-05-20 22:11:53.000000000 +0000
+++ src/mp4property.cpp
@@ -19,7 +19,7 @@
  *      Dave Mackie     dmackie@cisco.com
  *      Kona Blend      kona8lend@@gmail.com
  */
-
+#include <strings.h>
 #include "src/impl.h"
 
 namespace mp4v2 { namespace impl {
