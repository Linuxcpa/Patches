$NetBSD$

--- ffmpeg/libavutil/avstring.c.orig	2013-05-05 18:11:42.000000000 +0000
+++ ffmpeg/libavutil/avstring.c
@@ -18,7 +18,7 @@
  * License along with FFmpeg; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
  */
-
+#include <strings.h>
 #include <stdarg.h>
 #include <stdio.h>
 #include <string.h>
