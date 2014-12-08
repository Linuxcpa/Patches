$NetBSD$

--- sub/subassconvert.c.orig	2012-04-07 11:18:59.000000000 +0000
+++ sub/subassconvert.c
@@ -17,7 +17,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <string.h>
 #include <stdint.h>
 #include <stdlib.h>
