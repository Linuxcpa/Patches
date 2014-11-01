$NetBSD$

--- lib/krb5/krb/init_ctx.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/krb5/krb/init_ctx.c
@@ -49,6 +49,7 @@
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
  */
 
+#include <strings.h>
 #include "k5-int.h"
 #include "int-proto.h"
 #include <ctype.h>
