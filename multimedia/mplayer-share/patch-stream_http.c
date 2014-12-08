$NetBSD$

--- stream/http.c.orig	2011-12-11 15:41:37.000000000 +0000
+++ stream/http.c
@@ -19,7 +19,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include "config.h"
 
 #include <stdio.h>
