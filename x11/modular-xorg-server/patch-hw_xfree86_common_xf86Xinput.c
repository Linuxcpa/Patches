$NetBSD$

--- hw/xfree86/common/xf86Xinput.c.orig	2012-07-24 04:36:54.000000000 +0000
+++ hw/xfree86/common/xf86Xinput.c
@@ -45,7 +45,7 @@
  * the sale, use or other dealings in this Software without prior written
  * authorization from the copyright holder(s) and author(s).
  */
-
+#include <strings.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
