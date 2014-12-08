$NetBSD$

--- ffmpeg/libavformat/http.c.orig	2013-05-05 18:11:42.000000000 +0000
+++ ffmpeg/libavformat/http.c
@@ -18,7 +18,7 @@
  * License along with FFmpeg; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
  */
-
+#include <strings.h>
 #include "libavutil/avstring.h"
 #include "avformat.h"
 #include <unistd.h>
