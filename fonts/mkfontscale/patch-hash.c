$NetBSD$

--- hash.c.orig	2013-07-17 05:51:03.000000000 +0000
+++ hash.c
@@ -21,7 +21,7 @@
 */
 
 #include "config.h"
-
+#include <strings.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
