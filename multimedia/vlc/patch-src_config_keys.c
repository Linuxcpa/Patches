$NetBSD$

--- src/config/keys.c.orig	2010-04-15 16:56:14.000000000 +0000
+++ src/config/keys.c
@@ -19,7 +19,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
  *****************************************************************************/
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 # include <config.h>
 #endif
