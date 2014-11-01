$NetBSD$

--- lib/krb5/krb/libdef_parse.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/krb5/krb/libdef_parse.c
@@ -29,6 +29,7 @@
  * krb5int_libdefault_boolean()
  *
  */
+#include <strings.h>
 #include "k5-int.h"
 #include "int-proto.h"
 /* For _krb5_conf_boolean prototype */
