$NetBSD$

--- src/tools/db-merger.c.orig	2008-01-10 22:31:37.000000000 +0000
+++ src/tools/db-merger.c
@@ -44,7 +44,7 @@
 
  */
 
-
+#include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
 #include <stdio.h>
