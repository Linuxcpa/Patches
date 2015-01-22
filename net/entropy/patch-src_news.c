$NetBSD$

--- src/news.c.orig	2005-07-13 05:55:08.000000000 +0000
+++ src/news.c
@@ -21,7 +21,7 @@
  *****************************************************************************/
 #include "news.h"
 #include "logger.h"
-
+#include <strings.h>
 #define	LINESIZE	4096
 
 #define	INV_ON	"\033[7m"
