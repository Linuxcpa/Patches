$NetBSD$

--- src/wav_w64.c.orig	2011-06-21 10:19:10.000000000 +0000
+++ src/wav_w64.c
@@ -16,7 +16,7 @@
 ** along with this program; if not, write to the Free Software
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
-
+#include	<stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
