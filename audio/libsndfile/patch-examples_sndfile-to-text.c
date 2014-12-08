$NetBSD$

--- examples/sndfile-to-text.c.orig	2011-01-19 10:21:14.000000000 +0000
+++ examples/sndfile-to-text.c
@@ -29,7 +29,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
