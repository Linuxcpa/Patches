$NetBSD$

--- hw/xfree86/common/xf86Events.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86Events.c
@@ -48,13 +48,13 @@
  */
 
 /* [JCH-96/01/21] Extended std reverse map to four buttons. */
-
+#include <errno.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
 
 #include <X11/X.h>
-#include <X11/Xpoll.h>
+#include "Xmpoll.h"
 #include <X11/Xproto.h>
 #include "misc.h"
 #include "compiler.h"
