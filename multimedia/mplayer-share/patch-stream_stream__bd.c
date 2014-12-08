$NetBSD$

--- stream/stream_bd.c.orig	2012-02-19 13:15:41.000000000 +0000
+++ stream/stream_bd.c
@@ -18,7 +18,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <limits.h>
 #include <ctype.h>
