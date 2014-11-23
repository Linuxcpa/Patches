$NetBSD$

--- find_dep.y.orig	2006-06-13 08:27:28.000000000 +0000
+++ find_dep.y
@@ -18,7 +18,7 @@
  *     Software Foundation, Inc., 59  Temple  Place,  Suite  330,
  *     Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include <errno.h>
 #include <string.h>
 #include <stdio.h>
