$NetBSD$

--- lib/crypto/krb/enctype_util.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/crypto/krb/enctype_util.c
@@ -34,6 +34,7 @@
  * krb5_enctype_to_string()
  */
 
+#include <strings.h>
 #include "crypto_int.h"
 
 krb5_boolean KRB5_CALLCONV
