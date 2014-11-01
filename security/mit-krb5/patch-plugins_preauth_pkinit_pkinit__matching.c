$NetBSD$

--- plugins/preauth/pkinit/pkinit_matching.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ plugins/preauth/pkinit/pkinit_matching.c
@@ -29,6 +29,7 @@
  * SUCH DAMAGES.
  */
 
+#include <strings.h>
 #include <errno.h>
 #include <string.h>
 #include <stdio.h>
