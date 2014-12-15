$NetBSD$

--- src/aggregate/aggregate.c.orig	2013-04-03 16:33:43.000000000 +0000
+++ src/aggregate/aggregate.c
@@ -13,6 +13,7 @@
    See the License for the specific language governing permissions and
    limitations under the License.
  ********************************/
+#include <stdint.h>
 #include <crush/dbfr.h>
 #include <crush/general.h>
 
