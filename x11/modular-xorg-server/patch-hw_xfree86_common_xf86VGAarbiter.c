$NetBSD$

--- hw/xfree86/common/xf86VGAarbiter.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86VGAarbiter.c
@@ -27,7 +27,7 @@
  * OTHER DEALINGS IN THE SOFTWARE.
  *
  */
-
+#include <PCI.h>
 #include "xorg-config.h"
 
 #include "xf86VGAarbiter.h"
