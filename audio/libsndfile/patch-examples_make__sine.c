$NetBSD$

--- examples/make_sine.c.orig	2011-01-19 10:21:25.000000000 +0000
+++ examples/make_sine.c
@@ -29,7 +29,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include	<stdio.h>
 #include	<stdlib.h>
 #include	<string.h>
