$NetBSD$

--- asmtpd/rcptcheck.C.orig	2009-06-26 21:15:58.000000000 +0000
+++ asmtpd/rcptcheck.C
@@ -20,7 +20,7 @@
  * USA
  *
  */
-
+#include <strings.h>
 #include "asmtpd.h"
 
 domain_map dmap;
