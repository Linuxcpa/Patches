$NetBSD$

--- src/config.c.orig	2013-01-22 10:38:30.000000000 +0000
+++ src/config.c
@@ -20,7 +20,7 @@
  * the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
  * MA 02111-1307, USA.
  */
-
+#include <strings.h>
 #include <ctype.h>
 #include <stdio.h>
 #include <string.h>
