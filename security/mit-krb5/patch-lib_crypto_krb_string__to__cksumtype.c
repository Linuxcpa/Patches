$NetBSD$

--- lib/crypto/krb/string_to_cksumtype.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/crypto/krb/string_to_cksumtype.c
@@ -25,6 +25,7 @@
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
  */
 
+#include <strings.h>
 #include "crypto_int.h"
 
 krb5_error_code KRB5_CALLCONV
