$NetBSD$

--- src/mp4util.cpp.orig	2012-05-20 22:11:53.000000000 +0000
+++ src/mp4util.cpp
@@ -19,7 +19,7 @@
  *      Dave Mackie     dmackie@cisco.com
  *              Bill May                wmay@cisco.com
  */
-
+#include <strings.h>
 #include "src/impl.h"
 
 namespace mp4v2 { namespace impl {
