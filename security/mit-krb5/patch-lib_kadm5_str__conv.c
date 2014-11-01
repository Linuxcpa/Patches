$NetBSD$

--- lib/kadm5/str_conv.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/kadm5/str_conv.c
@@ -38,6 +38,7 @@
  * krb5_flags_to_string()       - Convert krb5_flags to string.
  */
 
+#include <strings.h>
 #include "k5-int.h"
 #include "admin_internal.h"
 #include "adm_proto.h"
