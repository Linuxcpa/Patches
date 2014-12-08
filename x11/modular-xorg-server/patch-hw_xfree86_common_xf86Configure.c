$NetBSD$

--- hw/xfree86/common/xf86Configure.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86Configure.c
@@ -22,7 +22,7 @@
  * Author:  Alan Hourihane, alanh@fairlite.demon.co.uk
  *
  */
-
+#include <errno.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
