$NetBSD$

--- src/libmowgli/mowgli_object_class.c.orig	2010-07-14 03:43:15.000000000 +0000
+++ src/libmowgli/mowgli_object_class.c
@@ -21,7 +21,7 @@
  * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  * POSSIBILITY OF SUCH DAMAGE.
  */
-
+#include <strings.h>
 #include "mowgli.h"
 
 static mowgli_dictionary_t *mowgli_object_class_dict = NULL;
