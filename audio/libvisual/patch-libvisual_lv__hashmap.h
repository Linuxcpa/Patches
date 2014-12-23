$NetBSD$

--- libvisual/lv_hashmap.h.orig	2006-02-17 22:00:17.000000000 +0000
+++ libvisual/lv_hashmap.h
@@ -20,7 +20,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
-
+#include <stdint.h>
 #ifndef _LV_HASHMAP_H
 #define _LV_HASHMAP_H
 
