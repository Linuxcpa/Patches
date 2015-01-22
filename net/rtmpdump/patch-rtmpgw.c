$NetBSD$

--- rtmpgw.c.orig	2011-07-12 00:24:33.000000000 +0000
+++ rtmpgw.c
@@ -19,7 +19,7 @@
  *  http://www.gnu.org/copyleft/gpl.html
  *
  */
-
+#include <sys/select.h>
 #include <stdlib.h>
 #include <string.h>
 #include <math.h>
