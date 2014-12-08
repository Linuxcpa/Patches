$NetBSD$

--- protocols/smtp.cc.orig	2012-12-20 03:09:05.000000000 +0000
+++ protocols/smtp.cc
@@ -18,7 +18,7 @@
 // You can contact me at <bruce@untroubled.org>.  There is also a mailing list
 // available to discuss this package.  To subscribe, send an email to
 // <nullmailer-subscribe@lists.untroubled.org>.
-
+#include <strings.h>
 #include "config.h"
 #include <stdlib.h>
 #include <unistd.h>
