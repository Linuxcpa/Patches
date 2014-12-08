$NetBSD$

--- libmpdemux/demux_audio.c.orig	2012-05-18 17:03:09.000000000 +0000
+++ libmpdemux/demux_audio.c
@@ -15,7 +15,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include "config.h"
 #include "mp_msg.h"
 #include "help_mp.h"
