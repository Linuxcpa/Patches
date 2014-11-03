$NetBSD$

--- glib/glib-init.c.orig	2014-02-12 20:08:36.000000000 +0000
+++ glib/glib-init.c
@@ -17,6 +17,7 @@
  * Author: Ryan Lortie <desrt@desrt.ca>
  */
 
+#include <strings.h>
 #include "config.h"
 
 #include "glib-init.h"
