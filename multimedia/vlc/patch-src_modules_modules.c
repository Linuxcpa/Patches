$NetBSD$

--- src/modules/modules.c.orig	2010-04-15 16:56:15.000000000 +0000
+++ src/modules/modules.c
@@ -23,7 +23,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
  *****************************************************************************/
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
