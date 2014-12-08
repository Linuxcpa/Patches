$NetBSD$

--- programs/sndfile-metadata-get.c.orig	2011-03-20 23:06:59.000000000 +0000
+++ programs/sndfile-metadata-get.c
@@ -30,7 +30,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include <config.h>
 
 #include <stdio.h>
