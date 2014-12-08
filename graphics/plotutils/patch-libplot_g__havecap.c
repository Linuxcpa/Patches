$NetBSD$

--- libplot/g_havecap.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/g_havecap.c
@@ -23,7 +23,7 @@
    Return value is 0/1/2 (no/yes/maybe).  If the capability is not
    recognized, the return value is 0. */
 
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 
