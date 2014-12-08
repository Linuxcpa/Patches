$NetBSD$

--- regtest/database.c.orig	2011-07-10 23:41:47.000000000 +0000
+++ regtest/database.c
@@ -15,7 +15,7 @@
 **	along with this program; if not, write to the Free Software
 **	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
-
+#include <stdint.h>
 #include "config.h"
 
 #include <stdio.h>
