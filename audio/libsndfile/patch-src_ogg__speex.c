$NetBSD$

--- src/ogg_speex.c.orig	2011-07-04 11:56:33.000000000 +0000
+++ src/ogg_speex.c
@@ -16,7 +16,7 @@
 ** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
 
-
+#include	<stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
