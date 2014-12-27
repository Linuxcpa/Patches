$NetBSD$

--- chooser/chooser.c.orig	2011-09-25 07:35:47.000000000 +0000
+++ chooser/chooser.c
@@ -48,7 +48,7 @@ in this Software without prior written a
  *  |    cancel  accept  ping                          |
  *  +--------------------------------------------------+
  */
-
+#include <sys/sockio.h>
 #include    <X11/Intrinsic.h>
 #include    <X11/StringDefs.h>
 #include    <X11/Xatom.h>
