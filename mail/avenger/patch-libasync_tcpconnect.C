$NetBSD$

--- libasync/tcpconnect.C.orig	2011-12-15 00:48:54.000000000 +0000
+++ libasync/tcpconnect.C
@@ -20,7 +20,7 @@
  * USA
  *
  */
-
+#include <strings.h>
 #include "async.h"
 #include "dns.h"
 
