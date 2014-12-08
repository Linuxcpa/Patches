$NetBSD$

--- lib/sj3compat/fake-rfc2553.c.orig	2014-12-03 05:37:17.000000000 +0000
+++ lib/sj3compat/fake-rfc2553.c
@@ -36,7 +36,7 @@
  */
 
 #include "sj3compat.h"
-
+#include "netdb.h"
 #include <stdlib.h>
 #include <string.h>
 
