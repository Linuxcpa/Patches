$NetBSD$

--- src/common.c.orig	2011-02-22 11:05:08.000000000 +0000
+++ src/common.c
@@ -15,7 +15,7 @@
 ** along with this program; if not, write to the Free Software
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
-
+#include	<stdint.h>
 #include	<config.h>
 
 #include	<stdarg.h>
