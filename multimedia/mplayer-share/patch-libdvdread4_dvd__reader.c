$NetBSD$

--- libdvdread4/dvd_reader.c.orig	2013-03-17 14:08:05.000000000 +0000
+++ libdvdread4/dvd_reader.c
@@ -19,7 +19,7 @@
  * with libdvdread; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <strings.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <sys/time.h> /* For the timing of dvdcss_title crack. */
