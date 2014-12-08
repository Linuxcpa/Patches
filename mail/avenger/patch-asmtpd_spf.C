$NetBSD$

--- asmtpd/spf.C.orig	2010-02-05 09:21:16.000000000 +0000
+++ asmtpd/spf.C
@@ -20,7 +20,7 @@
  * USA
  *
  */
-
+#include <strings.h>
 #include "asmtpd.h"
 
 spfhosts_map smap;
