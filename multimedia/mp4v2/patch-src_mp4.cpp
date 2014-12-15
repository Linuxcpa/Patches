$NetBSD$

--- src/mp4.cpp.orig	2012-05-20 22:11:53.000000000 +0000
+++ src/mp4.cpp
@@ -35,7 +35,7 @@
  * to the library, and catch any internal errors, ensuring that
  * a proper return value is given.
  */
-
+#include <strings.h>
 #include "src/impl.h"
 
 using namespace mp4v2::impl;
