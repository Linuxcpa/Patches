$NetBSD$

--- programs/sndfile-convert.c.orig	2011-03-28 04:49:22.000000000 +0000
+++ programs/sndfile-convert.c
@@ -29,7 +29,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
