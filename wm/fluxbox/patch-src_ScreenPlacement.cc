$NetBSD$

--- src/ScreenPlacement.cc.orig	2011-10-29 13:46:15.000000000 +0000
+++ src/ScreenPlacement.cc
@@ -18,7 +18,7 @@
 // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 // FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 // DEALINGS IN THE SOFTWARE.
-
+#include <strings.h>
 #include "ScreenPlacement.hh"
 
 #include "RowSmartPlacement.hh"
