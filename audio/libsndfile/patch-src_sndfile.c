$NetBSD$

--- src/sndfile.c.orig	2011-07-06 09:29:01.014155776 +0000
+++ src/sndfile.c
@@ -15,7 +15,7 @@
 ** along with this program; if not, write to the Free Software
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
-
+#include <stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdlib.h>
