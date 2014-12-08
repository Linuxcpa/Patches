$NetBSD$

--- hw/xfree86/dixmods/xkbPrivate.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/dixmods/xkbPrivate.c
@@ -1,4 +1,4 @@
-
+#include <strings.h>
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
