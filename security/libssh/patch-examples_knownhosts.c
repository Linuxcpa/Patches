$NetBSD$

--- examples/knownhosts.c.orig	2012-10-30 14:38:09.000000000 +0000
+++ examples/knownhosts.c
@@ -16,7 +16,7 @@ program.
 The goal is to show the API in action. It's not a reference on how terminal
 clients must be made or how a client should react.
  */
-
+#include <strings.h>
 #include <errno.h>
 #include <stdio.h>
 #include <stdlib.h>
