$NetBSD$

--- src/pcfx/input.cpp.orig	2009-05-15 02:02:09.000000000 +0000
+++ src/pcfx/input.cpp
@@ -14,7 +14,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include "pcfx.h"
 #include "interrupt.h"
 #include "input.h"
