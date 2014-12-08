$NetBSD$

--- programs/sndfile-cmp.c.orig	2011-03-21 10:13:50.000000000 +0000
+++ programs/sndfile-cmp.c
@@ -30,7 +30,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
