$NetBSD$

--- os/xdmcp.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ os/xdmcp.c
@@ -35,7 +35,7 @@
 #include <X11/X.h>
 #include <X11/Xmd.h>
 #include "misc.h"
-#include <X11/Xpoll.h>
+#include "Xmpoll.h"
 #include "osdep.h"
 #include "input.h"
 #include "dixstruct.h"
