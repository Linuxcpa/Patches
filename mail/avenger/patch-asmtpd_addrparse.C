$NetBSD$

--- asmtpd/addrparse.C.orig	2009-06-26 21:15:58.000000000 +0000
+++ asmtpd/addrparse.C
@@ -28,7 +28,7 @@
  * DNS label has fewer than three characters).  We try to be as strict
  * as possible while remaining reasonable.
  */
-
+#include <strings.h>
 #include "asmtpd.h"
 
 static int
