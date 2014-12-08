$NetBSD$

--- libmpcodecs/vd_zrmjpeg.c.orig	2012-04-15 15:01:09.000000000 +0000
+++ libmpcodecs/vd_zrmjpeg.c
@@ -20,7 +20,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 
