$NetBSD$

--- asxparser.c.orig	2013-05-05 17:18:01.000000000 +0000
+++ asxparser.c
@@ -15,7 +15,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include "config.h"
 
 #include <stdlib.h>
