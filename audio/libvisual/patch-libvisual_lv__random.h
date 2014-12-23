$NetBSD$

--- libvisual/lv_random.h.orig	2006-01-22 13:23:37.000000000 +0000
+++ libvisual/lv_random.h
@@ -21,7 +21,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
-
+#include <stdint.h>
 #ifndef _LV_RANDOM_H
 #define _LV_RANDOM_H
 
