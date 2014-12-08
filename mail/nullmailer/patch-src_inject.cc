$NetBSD$

--- src/inject.cc.orig	2013-03-27 21:22:39.000000000 +0000
+++ src/inject.cc
@@ -18,7 +18,7 @@
 // You can contact me at <bruce@untroubled.org>.  There is also a mailing list
 // available to discuss this package.  To subscribe, send an email to
 // <nullmailer-subscribe@lists.untroubled.org>.
-
+#include <strings.h>
 #include "config.h"
 #include "defines.h"
 #include <ctype.h>
