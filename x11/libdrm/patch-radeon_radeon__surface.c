$NetBSD$

--- radeon/radeon_surface.c.orig	2014-07-28 22:24:32.000000000 +0000
+++ radeon/radeon_surface.c
@@ -26,6 +26,7 @@
  * Authors:
  *      Jérôme Glisse <jglisse@redhat.com>
  */
+#include <stdint.h>
 #include <stdbool.h>
 #include <assert.h>
 #include <errno.h>
