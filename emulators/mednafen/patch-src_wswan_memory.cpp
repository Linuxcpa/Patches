$NetBSD$

--- src/wswan/memory.cpp.orig	2009-05-15 01:31:25.000000000 +0000
+++ src/wswan/memory.cpp
@@ -17,7 +17,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include "wswan.h"
 #include "gfx.h"
 #include "memory.h"
