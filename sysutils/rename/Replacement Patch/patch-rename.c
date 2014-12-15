$NetBSD: patch-rename.c,v 1.1 2011/09/10 16:35:04 abs Exp $

--- rename.c.orig	2002-05-20 15:50:50.025165824 +0000
+++ rename.c
@@ -18,7 +18,7 @@
     along with this program; if not, write to the Free Software
     Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
@@ -65,7 +65,7 @@
 
 #if HAVE_REGEX_H
   #include <regex.h>
-#elif
+#else
   #include "regex.h"
 #endif
 
