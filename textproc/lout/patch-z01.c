$NetBSD$

--- z01.c.orig	2010-09-09 20:53:02.000000000 +0000
+++ z01.c
@@ -28,6 +28,7 @@
 /*                PrintSym, AllowCrossDb                                     */
 /*                                                                           */
 /*****************************************************************************/
+#include <nl_types.h>
 #include "externs.h"
 #include <signal.h>
 
