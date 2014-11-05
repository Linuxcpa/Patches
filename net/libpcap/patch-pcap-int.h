$NetBSD$

--- pcap-int.h.orig	2013-03-24 21:48:24.018350080 +0000
+++ pcap-int.h
@@ -34,4 +34,8 @@
  */
 
+#include <stdint.h>
+#ifdef U_INT64_T
+#endif
+
 #ifndef pcap_int_h
 #define	pcap_int_h
