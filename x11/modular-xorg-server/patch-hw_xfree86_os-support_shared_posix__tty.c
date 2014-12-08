$NetBSD$

--- hw/xfree86/os-support/shared/posix_tty.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/os-support/shared/posix_tty.c
@@ -51,7 +51,8 @@
  * in this Software without prior written authorization from Metro Link.
  *
  */
-
+#include <errno.h>
+#include <termios.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
