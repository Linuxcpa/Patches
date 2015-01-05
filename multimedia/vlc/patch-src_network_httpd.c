$NetBSD$

--- src/network/httpd.c.orig	2011-11-01 18:24:20.000000000 +0000
+++ src/network/httpd.c
@@ -22,7 +22,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
  *****************************************************************************/
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
