$NetBSD$

--- asmtpd/config.C.orig	2011-12-15 00:48:52.000000000 +0000
+++ asmtpd/config.C
@@ -20,7 +20,7 @@
  * USA
  *
  */
-
+#include <strings.h>
 #include "asmtpd.h"
 #include <grp.h>
 
