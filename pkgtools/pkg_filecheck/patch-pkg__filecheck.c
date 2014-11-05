$NetBSD$

--- pkg_filecheck.c.orig	2014-11-05 00:51:48.000000000 +0000
+++ pkg_filecheck.c
@@ -30,6 +30,7 @@
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
+#include <stdint.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <db_185.h>
