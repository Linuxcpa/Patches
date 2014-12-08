$NetBSD$

--- libasync/dnsparse.C.orig	2011-12-15 00:48:54.000000000 +0000
+++ libasync/dnsparse.C
@@ -25,7 +25,7 @@
  * you also have a copy of RFC 1035.  You can get this by anonymous
  * ftp from, among other places, ftp.internic.net:/rfc/rfc1035.txt.
  */
-
+#include <strings.h>
 #include "dnsparse.h"
 #include "arena.h"
 #include "vec.h"
