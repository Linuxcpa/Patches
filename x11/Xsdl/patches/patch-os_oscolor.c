$NetBSD$

--- os/oscolor.c.orig	2009-07-10 04:05:36.003145728 +0000
+++ os/oscolor.c
@@ -44,7 +44,7 @@ ARISING OUT OF OR IN CONNECTION WITH THE
 SOFTWARE.
 
 ******************************************************************/
-
+#include <strings.h>
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
