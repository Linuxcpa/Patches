$NetBSD$

--- src/multipleAlign/Iteration.cpp.orig	2010-09-09 14:26:01.000000000 +0000
+++ src/multipleAlign/Iteration.cpp
@@ -7,6 +7,8 @@
  * Mark 30-5-2007: Changed iterationOnTreeNode function as it was adding in extra gaps
  * at the end of an alignment.  
  */
+ 
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
     #include "config.h"
 #endif
