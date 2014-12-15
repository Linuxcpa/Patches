$NetBSD$

--- src/mp4info.cpp.orig	2012-05-20 22:11:53.000000000 +0000
+++ src/mp4info.cpp
@@ -24,7 +24,7 @@
  *      Alix Marchandise-Franquet alix@cisco.com
  *      Ximpo Group Ltd.          mp4v2@ximpo.com
  */
-
+#include <strings.h>
 #include "src/impl.h"
 
 namespace mp4v2 { namespace impl {
