$NetBSD$

--- src/dotconf.c.orig	2010-06-20 23:52:43.000000000 +0000
+++ src/dotconf.c
@@ -20,7 +20,7 @@
  */
 
 /* -- dotconf.c - this code is responsible for the input, parsing and dispatching of options  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
