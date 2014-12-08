$NetBSD$

--- asmtpd/asmtpd.C.orig	2010-02-05 09:21:16.000000000 +0000
+++ asmtpd/asmtpd.C
@@ -20,7 +20,7 @@
  * USA
  *
  */
-
+#include <strings.h>
 #include "asmtpd.h"
 #include "rawnet.h"
 #include "getopt_long.h"
