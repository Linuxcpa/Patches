$NetBSD$

--- tcucodec.c.orig	2012-08-18 02:08:38.000000000 +0000
+++ tcucodec.c
@@ -13,7 +13,7 @@
  * Boston, MA 02111-1307 USA.
  *************************************************************************************************/
 
-
+#include <wchar.h>
 #include <tcutil.h>
 #include "myconf.h"
 
