$NetBSD$

--- src/proxy.c.orig	2005-07-24 23:39:22.000000000 +0000
+++ src/proxy.c
@@ -21,7 +21,7 @@
  *****************************************************************************/
 #include "proxy.h"
 #include "logger.h"
-
+#include <strings.h>
 #define	LINESIZE		4096
 
 /*
