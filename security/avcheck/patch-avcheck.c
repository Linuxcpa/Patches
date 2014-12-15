$NetBSD$

--- avcheck.c.orig	2002-10-09 22:07:59.057671680 +0000
+++ avcheck.c
@@ -3,7 +3,7 @@
  * Michael Tokarev <mjt@corpit.ru>
  * Public domain.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
