$NetBSD$

--- src/flac.c.orig	2011-07-04 05:13:02.048758784 +0000
+++ src/flac.c
@@ -16,7 +16,7 @@
 ** along with this program ; if not, write to the Free Software
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
-
+#include <stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
