$NetBSD$

--- include/libnet.h.orig	2014-12-09 23:17:45.000000000 +0000
+++ include/libnet.h
@@ -103,8 +103,6 @@ extern "C" {
 #if (__linux__) && !(__GLIBC__)
 /* we get multiple definitions of IGMP_AGE_THRESHOLD if we include netinet */
 #include <linux/igmp.h>
-#else
-#include <netinet/igmp.h>
 #endif
 #include <arpa/inet.h>
 #include <sys/time.h>
