$NetBSD$

--- src/mp4file.cpp.orig	2012-05-20 22:11:53.000000000 +0000
+++ src/mp4file.cpp
@@ -27,7 +27,7 @@
  *              Ximpo Group Ltd.          mp4v2@ximpo.com
  *              Bill May                  wmay@cisco.com
  */
-
+#include <strings.h>
 #include "src/impl.h"
 
 namespace mp4v2 { namespace impl {
