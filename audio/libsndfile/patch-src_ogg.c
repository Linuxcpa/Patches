$NetBSD$

--- src/ogg.c.orig	2011-07-05 01:14:59.000000000 +0000
+++ src/ogg.c
@@ -16,7 +16,7 @@
 ** along with this program ; if not, write to the Free Software
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
