$NetBSD$

--- libvisual/lv_config.c.orig	2006-01-22 13:23:37.000000000 +0000
+++ libvisual/lv_config.c
@@ -20,7 +20,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
-
+#include <stdint.h>
 #include <config.h>
 
 #include <stdio.h>
