$NetBSD$

--- dao/Settings.cc.orig	2007-12-29 12:26:33.000000000 +0000
+++ dao/Settings.cc
@@ -16,7 +16,7 @@
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>
