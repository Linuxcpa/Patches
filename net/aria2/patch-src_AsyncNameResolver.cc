$NetBSD$

--- src/AsyncNameResolver.cc.orig	2014-03-23 16:12:57.000000000 +0000
+++ src/AsyncNameResolver.cc
@@ -33,7 +33,7 @@
  */
 /* copyright --> */
 #include "AsyncNameResolver.h"
-
+#include <sys/select.h>
 #include <cstring>
 
 #include "A2STR.h"
