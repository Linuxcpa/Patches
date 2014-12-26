$NetBSD$

--- src/dvd_reader.c.orig	2011-06-15 18:09:15.064749568 +0000
+++ src/dvd_reader.c
@@ -19,7 +19,7 @@
  * with libdvdread; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <sys/time.h> /* For the timing of dvdcss_title crack. */
