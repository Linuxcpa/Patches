$NetBSD$

--- parse.y.orig	2005-04-20 23:16:32.000000000 +0000
+++ parse.y
@@ -123,7 +123,7 @@ static char Rcs_Id[] =
  * Get rid of all old RCS log lines in preparation for the 3.1 release.
  *
  */
-
+#include <strings.h>
 #include <ctype.h>
 #include "config.h"
 #include "ispell.h"
