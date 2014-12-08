$NetBSD$

--- libplot/g_retrieve.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/g_retrieve.c
@@ -50,7 +50,7 @@
    (i.e. non-uniform).  It is also used by X Drawable Plotters, which may
    or may not have a PS font available, and in fact may or may not have any
    given font of type `PL_F_OTHER' (see above) available. */
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 #include "g_her_metr.h"
