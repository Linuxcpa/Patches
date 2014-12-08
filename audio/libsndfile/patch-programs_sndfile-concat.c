$NetBSD$

--- programs/sndfile-concat.c.orig	2011-03-20 23:10:34.000000000 +0000
+++ programs/sndfile-concat.c
@@ -29,7 +29,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include	<stdio.h>
 #include	<stdlib.h>
 #include	<string.h>
