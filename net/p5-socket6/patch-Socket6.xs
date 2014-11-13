$NetBSD$

--- Socket6.xs.orig	2008-08-16 16:47:00.000000000 +0000
+++ Socket6.xs
@@ -68,7 +68,7 @@ const struct in6_addr in6addr_loopback =
 #  include <netinet6/ipsec.h>
 # endif
 #endif
-#include <netdb.h>
+#include "/boot/home/pkg/include/netdb.h"
 #define	WSA_DECLARE
 #define	WSA_STARTUP()
 #define	WSA_CLEANUP()
