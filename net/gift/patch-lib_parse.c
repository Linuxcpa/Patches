$NetBSD$

--- lib/parse.c.orig	2003-12-23 04:22:53.000000000 +0000
+++ lib/parse.c
@@ -25,7 +25,7 @@
 #include "file.h"
 #include "conf.h"
 #include "parse.h"
-
+#include <strings.h>
 /*****************************************************************************/
 
 /*
