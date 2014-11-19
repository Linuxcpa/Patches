$NetBSD$

--- net.c.orig	2014-06-06 05:57:01.029884416 +0000
+++ net.c
@@ -533,7 +533,7 @@ void net_send_query(int index) 
 
     ip->check = checksum(packet, abs(packetsize));
     break;
-#ifdef ENABLE_IPV6
+#if defined(ENABLE_IPV6) && defined(IPV6_CHECKSUM)
   case AF_INET6:
     switch ( mtrtype ) {
     case IPPROTO_UDP:
