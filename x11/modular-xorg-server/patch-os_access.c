$NetBSD$

--- os/access.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ os/access.c
@@ -75,7 +75,8 @@ SOFTWARE.
  * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
  * DEALINGS IN THE SOFTWARE.
  */
-
+#include <sys/utsname.h>
+#include <arpa/inet.h>
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
