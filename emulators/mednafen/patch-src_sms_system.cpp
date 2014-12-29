$NetBSD$

--- src/sms/system.cpp.orig	2010-02-06 19:12:26.000000000 +0000
+++ src/sms/system.cpp
@@ -15,7 +15,7 @@
     along with this program; if not, write to the Free Software
     Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
-
+#include <strings.h>
 #include "shared.h"
 #include "../memory.h"
 #include "../netplay.h"
