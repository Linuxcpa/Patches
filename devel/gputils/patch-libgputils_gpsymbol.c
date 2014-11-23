$NetBSD$

--- libgputils/gpsymbol.c.orig	2013-03-29 22:21:40.000000000 +0000
+++ libgputils/gpsymbol.c
@@ -18,7 +18,7 @@ You should have received a copy of the G
 along with gputils; see the file COPYING.  If not, write to
 the Free Software Foundation, 59 Temple Place - Suite 330,
 Boston, MA 02111-1307, USA.  */
-
+#include <strings.h>
 #include "stdhdr.h"
 #include "libgputils.h"
 
