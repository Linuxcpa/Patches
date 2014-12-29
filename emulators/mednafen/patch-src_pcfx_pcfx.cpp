$NetBSD$

--- src/pcfx/pcfx.cpp.orig	2009-12-24 10:03:43.000000000 +0000
+++ src/pcfx/pcfx.cpp
@@ -14,7 +14,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include "pcfx.h"
 #include "vdc.h"
 #include "soundbox.h"
