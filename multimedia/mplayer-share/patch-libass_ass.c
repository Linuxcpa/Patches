$NetBSD$

--- libass/ass.c.orig	2011-12-03 21:35:56.000000000 +0000
+++ libass/ass.c
@@ -15,7 +15,7 @@
  * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
  */
-
+#include <strings.h>
 #include "config.h"
 
 #include <stdio.h>
