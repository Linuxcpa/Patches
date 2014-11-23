$NetBSD$

--- http.c.orig	2014-11-21 08:34:16.000000000 +0000
+++ http.c
@@ -62,7 +62,7 @@
  * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
  * SUCH DAMAGE.
  */
-
+#include <strings.h>
 #if defined(__linux__) || defined(__MINT__) || defined(__FreeBSD_kernel__)
 /* Keep this down to Linux or MiNT, it can create surprises elsewhere. */
 /*
