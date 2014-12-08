$NetBSD$

--- src/windows.c.orig	2011-01-19 10:08:28.000000000 +0000
+++ src/windows.c
@@ -20,7 +20,7 @@
 **	This needs to be a separate file so that we don't have to include
 **	<windows.h> elsewhere (too many symbol clashes).
 */
-
+#include <stdint.h>
 
 #include "sfconfig.h"
 
