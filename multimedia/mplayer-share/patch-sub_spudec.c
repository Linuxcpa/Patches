$NetBSD$

--- sub/spudec.c.orig	2012-04-23 18:39:16.000000000 +0000
+++ sub/spudec.c
@@ -26,7 +26,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include "config.h"
 #include "mp_msg.h"
 
