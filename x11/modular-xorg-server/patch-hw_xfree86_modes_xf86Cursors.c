$NetBSD$

--- hw/xfree86/modes/xf86Cursors.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/modes/xf86Cursors.c
@@ -20,7 +20,7 @@
  * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
  * OF THIS SOFTWARE.
  */
-
+#include <endian.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #else
