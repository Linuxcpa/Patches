$NetBSD$

--- plugins/preauth/pkinit/pkinit_profile.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ plugins/preauth/pkinit/pkinit_profile.c
@@ -29,6 +29,7 @@
  * SUCH DAMAGES.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>
