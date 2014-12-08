$NetBSD$

--- lib/selfpipe.cc.orig	2012-03-03 04:04:28.000000000 +0000
+++ lib/selfpipe.cc
@@ -18,7 +18,7 @@
 // You can contact me at <bruce@untroubled.org>.  There is also a mailing list
 // available to discuss this package.  To subscribe, send an email to
 // <nullmailer-subscribe@lists.untroubled.org>.
-
+#include <sys/select.h>
 #include <sys/types.h>
 #include <errno.h>
 #include <fcntl.h>
