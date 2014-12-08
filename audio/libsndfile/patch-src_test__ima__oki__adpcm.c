$NetBSD$

--- src/test_ima_oki_adpcm.c.orig	2011-01-19 10:09:28.000000000 +0000
+++ src/test_ima_oki_adpcm.c
@@ -16,7 +16,7 @@
 ** along with this library.  If not, write to the Free Software Foundation,
 ** Fifth Floor, 51 Franklin Street, Boston, MA 02111-1301, USA.
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
