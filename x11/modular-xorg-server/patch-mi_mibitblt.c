$NetBSD$

--- mi/mibitblt.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ mi/mibitblt.c
@@ -62,9 +62,7 @@ SOFTWARE.
 #include <X11/Xmd.h>
 #include "servermd.h"
 
-#ifndef HAVE_FFS
 extern int ffs(int);
-#endif
 
 /* MICOPYAREA -- public entry for the CopyArea request 
  * For each rectangle in the source region
