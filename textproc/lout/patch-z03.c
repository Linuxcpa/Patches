$NetBSD$

--- z03.c.orig	2010-09-09 20:53:24.000000000 +0000
+++ z03.c
@@ -30,6 +30,7 @@
 /*                EchoFileFrom()                                             */
 /*                                                                           */
 /*****************************************************************************/
+#include <nl_types.h>
 #include "externs.h"
 #if USE_STAT
 #include <sys/types.h>
