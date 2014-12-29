$NetBSD$

--- src/nes/input.cpp.orig	2009-05-15 01:31:25.000000000 +0000
+++ src/nes/input.cpp
@@ -19,7 +19,7 @@
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
 #include <string.h>
-
+#include <strings.h>
 #include "nes.h"
 #include "../netplay.h"
 #include "x6502.h"
