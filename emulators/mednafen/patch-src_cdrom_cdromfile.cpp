$NetBSD$

--- src/cdrom/cdromfile.cpp.orig	2009-05-15 01:31:25.000000000 +0000
+++ src/cdrom/cdromfile.cpp
@@ -16,7 +16,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include "../mednafen.h"
 
 #include <sys/types.h>
