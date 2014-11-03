$NetBSD$

--- glib/gstrfuncs.c.orig	2014-02-22 15:29:07.000000000 +0000
+++ glib/gstrfuncs.c
@@ -26,6 +26,7 @@
  * MT safe
  */
 
+#include <strings.h>
 #include "config.h"
 
 #include <stdarg.h>
