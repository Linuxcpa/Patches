$NetBSD$

--- src/gba/GBA.cpp.orig	2009-05-15 04:25:34.000000000 +0000
+++ src/gba/GBA.cpp
@@ -15,7 +15,7 @@
 // You should have received a copy of the GNU General Public License
 // along with this program; if not, write to the Free Software Foundation,
 // Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
-
+#include <strings.h>
 #include "GBA.h"
 #include "../general.h"
 #include "../player.h"
