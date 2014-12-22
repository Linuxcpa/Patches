$NetBSD$

--- hw/xfree86/common/xf86Events.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86Events.c
@@ -48,7 +48,7 @@
  */
 
 /* [JCH-96/01/21] Extended std reverse map to four buttons. */
-
+#include <errno.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
