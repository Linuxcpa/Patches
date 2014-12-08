$NetBSD$

--- stream/network.c.orig	2012-05-21 09:42:04.000000000 +0000
+++ stream/network.c
@@ -19,7 +19,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
