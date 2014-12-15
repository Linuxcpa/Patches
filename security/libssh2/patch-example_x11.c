$NetBSD$

--- example/x11.c.orig	2012-03-13 21:19:51.000000000 +0000
+++ example/x11.c
@@ -5,7 +5,7 @@
  * Usage :
  * "ssh2 host user password [DEBUG]"
  */
-
+#include <sys/select.h>
 #include <string.h>
 #include <sys/ioctl.h>
 #include <netinet/in.h>
