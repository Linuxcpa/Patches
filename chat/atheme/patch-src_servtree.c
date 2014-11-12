$NetBSD$

--- src/servtree.c.orig	2008-02-11 02:58:09.000000000 +0000
+++ src/servtree.c
@@ -19,7 +19,7 @@
  * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  * POSSIBILITY OF SUCH DAMAGE.
  */
-
+#include <strings.h>
 #include "atheme.h"
 
 mowgli_dictionary_t *services;
