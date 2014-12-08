$NetBSD$

--- bstr.c.orig	2010-07-18 22:00:48.000000000 +0000
+++ bstr.c
@@ -15,7 +15,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <string.h>
 #include <libavutil/avutil.h>
 
