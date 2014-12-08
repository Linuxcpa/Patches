$NetBSD$

--- subopt-helper.c.orig	2011-08-11 17:45:38.000000000 +0000
+++ subopt-helper.c
@@ -34,7 +34,7 @@
  * one.
  *
  */
-
+#include <strings.h>
 #include "subopt-helper.h"
 #include "mp_msg.h"
 
