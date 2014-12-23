$NetBSD$

--- libvisual/lv_mem.c.orig	2006-02-05 18:45:57.000000000 +0000
+++ libvisual/lv_mem.c
@@ -20,7 +20,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
-
+#include <stdint.h>
 #include <config.h>
 
 #include <string.h>
