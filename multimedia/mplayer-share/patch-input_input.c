$NetBSD$

--- input/input.c.orig	2011-12-11 14:43:16.000000000 +0000
+++ input/input.c
@@ -15,7 +15,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include "config.h"
 
 #include <stdlib.h>
