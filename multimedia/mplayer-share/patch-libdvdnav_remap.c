$NetBSD$

--- libdvdnav/remap.c.orig	2013-03-17 14:06:49.000000000 +0000
+++ libdvdnav/remap.c
@@ -15,7 +15,7 @@
  * with libdvdnav; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
