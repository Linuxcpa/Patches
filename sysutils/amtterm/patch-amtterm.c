$NetBSD$

--- amtterm.c.orig	2011-05-26 09:19:45.000000000 +0000
+++ amtterm.c
@@ -17,7 +17,7 @@
  *  with this program; if not, write to the Free Software Foundation, Inc.,
  *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */
-
+#include <sys/select.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
