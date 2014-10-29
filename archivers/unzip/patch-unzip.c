$NetBSD$

--- unzip.c.orig	2009-04-16 18:26:52.000000000 +0000
+++ unzip.c
@@ -61,7 +61,7 @@
 
   ---------------------------------------------------------------------------*/
 
-
+#include <pthread.h>
 
 #define __UNZIP_C       /* identifies this source module */
 #define UNZIP_INTERNAL
