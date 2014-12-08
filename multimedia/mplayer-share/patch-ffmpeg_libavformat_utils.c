$NetBSD$

--- ffmpeg/libavformat/utils.c.orig	2013-05-05 18:11:42.000000000 +0000
+++ ffmpeg/libavformat/utils.c
@@ -18,9 +18,8 @@
  * License along with FFmpeg; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
  */
-
+#include <strings.h>
 /* #define DEBUG */
-
 #include "avformat.h"
 #include "avio_internal.h"
 #include "internal.h"
