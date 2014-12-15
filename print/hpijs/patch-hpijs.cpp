$NetBSD$

--- hpijs.cpp.orig	2005-08-22 18:47:00.000000000 +0000
+++ hpijs.cpp
@@ -28,7 +28,7 @@
     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
     POSSIBILITY OF SUCH DAMAGE.
 \*****************************************************************************/
-
+#include <strings.h>
 #include <sys/stat.h>
 #include <stdio.h>
 #include <stdlib.h>
