$NetBSD$

--- main.c.orig	2006-06-13 08:27:28.000000000 +0000
+++ main.c
@@ -17,7 +17,7 @@
  *     Software Foundation, Inc., 59  Temple  Place,  Suite  330,
  *     Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
