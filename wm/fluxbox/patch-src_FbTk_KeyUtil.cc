$NetBSD$

--- src/FbTk/KeyUtil.cc.orig	2011-10-29 13:46:15.000000000 +0000
+++ src/FbTk/KeyUtil.cc
@@ -19,6 +19,7 @@
 // FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 // DEALINGS IN THE SOFTWARE.
 
+#include <strings.h>
 #include "KeyUtil.hh"
 #include "App.hh"
 
