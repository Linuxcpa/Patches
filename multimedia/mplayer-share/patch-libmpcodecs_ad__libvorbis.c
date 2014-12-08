$NetBSD$

--- libmpcodecs/ad_libvorbis.c.orig	2011-10-26 15:12:35.000000000 +0000
+++ libmpcodecs/ad_libvorbis.c
@@ -15,7 +15,7 @@
  * with MPlayer; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
