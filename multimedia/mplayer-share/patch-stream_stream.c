$NetBSD$

--- stream/stream.c.orig	2012-04-23 18:39:14.000000000 +0000
+++ stream/stream.c
@@ -15,7 +15,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
