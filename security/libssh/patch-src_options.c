$NetBSD$

--- src/options.c.orig	2013-01-22 10:38:30.000000000 +0000
+++ src/options.c
@@ -21,7 +21,7 @@
  * the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
  * MA 02111-1307, USA.
  */
-
+#include <strings.h>
 #include "config.h"
 #include <stdio.h>
 #include <stdlib.h>
