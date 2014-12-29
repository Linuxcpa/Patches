$NetBSD$

--- trackdb/util.cc.orig	2005-05-10 00:54:43.000000000 +0000
+++ trackdb/util.cc
@@ -16,7 +16,7 @@
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  */
-
+#include <strings.h>
 #include <config.h>
 
 #include <stdio.h>
