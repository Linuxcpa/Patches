$NetBSD$

--- src/pce/pce.cpp.orig	2009-05-15 01:31:25.000000000 +0000
+++ src/pce/pce.cpp
@@ -14,7 +14,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include <zlib.h>
 #include "pce.h"
 #include "vdc.h"
