$NetBSD$

--- regtest/sndfile-regtest.c.orig	2011-01-19 10:26:46.000000000 +0000
+++ regtest/sndfile-regtest.c
@@ -15,7 +15,7 @@
 **	along with this program; if not, write to the Free Software
 **	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
-
+#include <stdint.h>
 #include "config.h"
 
 #include <stdio.h>
