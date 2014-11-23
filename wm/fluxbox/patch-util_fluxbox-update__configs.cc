$NetBSD$

--- util/fluxbox-update_configs.cc.orig	2011-10-29 13:46:15.000000000 +0000
+++ util/fluxbox-update_configs.cc
@@ -18,7 +18,7 @@
 // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 // FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 // DEALINGS IN THE SOFTWARE.
-
+#include <strings.h>
 #include "../src/FbTk/I18n.hh"
 #include "../src/FbTk/Resource.hh"
 #include "../src/FbTk/StringUtil.hh"
