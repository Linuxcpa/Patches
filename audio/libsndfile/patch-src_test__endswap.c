$NetBSD$

--- src/test_endswap.c.orig	2011-02-22 11:06:31.000000000 +0000
+++ src/test_endswap.c
@@ -15,7 +15,7 @@
 ** along with this program; if not, write to the Free Software
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
