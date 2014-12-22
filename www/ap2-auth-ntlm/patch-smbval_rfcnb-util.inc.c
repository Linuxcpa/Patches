$NetBSD$

--- smbval/rfcnb-util.inc.c.orig	2003-06-05 19:56:19.000000000 +0000
+++ smbval/rfcnb-util.inc.c
@@ -19,7 +19,7 @@
  * should have received a copy of the GNU General Public License along
  * with this program; if not, write to the Free Software Foundation, Inc., 
  * 675 Mass Ave, Cambridge, MA 02139, USA. */
-
+#include <strings.h>
 #include <string.h>
 #include <malloc.h>
 
