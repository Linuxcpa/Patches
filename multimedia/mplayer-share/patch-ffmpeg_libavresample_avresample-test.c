$NetBSD$

--- ffmpeg/libavresample/avresample-test.c.orig	2013-05-05 18:11:42.000000000 +0000
+++ ffmpeg/libavresample/avresample-test.c
@@ -18,7 +18,7 @@
  * License along with Libav; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
  */
-
+#include <strings.h>
 #include <stdint.h>
 #include <stdio.h>
 
