$NetBSD$

--- src/ogg_vorbis.c.orig	2011-07-13 11:11:16.000000000 +0000
+++ src/ogg_vorbis.c
@@ -50,7 +50,7 @@
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 ** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include	<stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
