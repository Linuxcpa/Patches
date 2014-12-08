$NetBSD$

--- src/pciaccess_private.h.orig	2013-07-20 22:54:34.000000000 +0000
+++ src/pciaccess_private.h
@@ -42,7 +42,7 @@
  * know of any OS we support where this isn't available in a sufficiently
  * new version, so warn unconditionally.
  */
-#include <sys/fcntl.h>
+#include <fcntl.h>
 
 #ifndef O_CLOEXEC
 #warning O_CLOEXEC not available, please upgrade.
