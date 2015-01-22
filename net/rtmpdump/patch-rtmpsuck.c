$NetBSD$

--- rtmpsuck.c.orig	2011-07-12 00:24:33.000000000 +0000
+++ rtmpsuck.c
@@ -23,7 +23,7 @@
 /* This is a Proxy Server that displays the connection parameters from a
  * client and then saves any data streamed to the client.
  */
-
+#include <sys/select.h>
 #include <stdlib.h>
 #include <string.h>
 #include <math.h>
