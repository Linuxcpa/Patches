$NetBSD$

--- include/vlc_demux.h.orig	2011-07-12 18:11:23.000000000 +0000
+++ include/vlc_demux.h
@@ -20,7 +20,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
  *****************************************************************************/
-
+#include <strings.h>
 #ifndef VLC_DEMUX_H
 #define VLC_DEMUX_H 1
 
