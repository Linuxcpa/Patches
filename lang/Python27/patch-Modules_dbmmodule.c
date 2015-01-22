$NetBSD$

--- Modules/dbmmodule.c.orig	2014-05-31 18:58:40.000000000 +0000
+++ Modules/dbmmodule.c
@@ -12,7 +12,7 @@
  * whichever configure was able to locate.
  */
 #if defined(HAVE_NDBM_H)
-#include <ndbm.h>
+#include "ndbm.h"
 #if defined(PYOS_OS2) && !defined(PYCC_GCC)
 static char *which_dbm = "ndbm";
 #else
