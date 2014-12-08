$NetBSD$

--- src/rix.cpp.orig	2007-04-01 15:32:49.000000000 +0000
+++ src/rix.cpp
@@ -19,7 +19,7 @@
  * rix.cpp - Softstar RIX OPL Format Player by palxex <palxex.ys168.com>
  *                                             BSPAL <BSPAL.ys168.com>
  */
-
+#include <strings.h>
 #include "rix.h"
 #include "debug.h"
 
