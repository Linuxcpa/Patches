$NetBSD$

--- nmz/list.c.orig	2008-03-06 15:38:09.000000000 +0000
+++ nmz/list.c
@@ -25,7 +25,7 @@
  * 
  * 
  */
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 #  include "config.h"
 #endif
