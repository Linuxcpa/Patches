$NetBSD$

--- dadadodo.c.orig	2003-02-09 10:47:43.000000000 +0000
+++ dadadodo.c
@@ -8,7 +8,7 @@
  * software for any purpose.  It is provided "as is" without express or 
  * implied warranty.
  */
-
+#include <strings.h>
 #include "version.h"
 
 #include <stdlib.h>
