$NetBSD$

--- lib/krb5/krb/str_conv.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/krb5/krb/str_conv.c
@@ -41,6 +41,7 @@
  * krb5_deltat_to_string()      - Convert krb5_deltat to string.
  */
 
+#include <strings.h>
 #include "k5-int.h"
 #include <ctype.h>
 
