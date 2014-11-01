$NetBSD$

--- lib/gssapi/mechglue/g_initialize.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/gssapi/mechglue/g_initialize.c
@@ -26,6 +26,7 @@
  * This function will initialize the gssapi mechglue library
  */
 
+#include <strings.h>
 #include "mglueP.h"
 #ifdef HAVE_STDLIB_H
 #include <stdlib.h>
