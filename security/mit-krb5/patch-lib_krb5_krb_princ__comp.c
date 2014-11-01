$NetBSD$

--- lib/krb5/krb/princ_comp.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/krb5/krb/princ_comp.c
@@ -24,6 +24,7 @@
  * or implied warranty.
  */
 
+#include <strings.h>
 #include "k5-int.h"
 #include "k5-unicode.h"
 
