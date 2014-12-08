$NetBSD$

--- os/oscolor.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ os/oscolor.c
@@ -43,7 +43,7 @@ ARISING OUT OF OR IN CONNECTION WITH THE
 SOFTWARE.
 
 ******************************************************************/
-
+#include <strings.h>
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
