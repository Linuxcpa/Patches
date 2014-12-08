$NetBSD$

--- unix/plugins/AsynchFilePlugin/sqUnixAsynchFile.c.orig	2006-10-18 17:10:25.000000000 +0000
+++ unix/plugins/AsynchFilePlugin/sqUnixAsynchFile.c
@@ -60,7 +60,7 @@
   Note: These primitives are experimental!  They need not be implemented on
   every platform, and they may be withdrawn or replaced in a future release.
  */
-
+#include <sys/select.h>
 #include "sq.h"
 #include "AsynchFilePlugin.h"
 #include "sqUnixAsynchFile.h"
