$NetBSD$

--- pdns/unix_utility.cc.orig	2012-01-05 13:54:51.000000000 +0000
+++ pdns/unix_utility.cc
@@ -15,7 +15,7 @@
     along with this program; if not, write to the Free Software
     Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
-
+#include <strings.h>
 #include "utility.hh"
 #include <cstring>
 #include <fcntl.h>
