$NetBSD$

--- src/network/socket/qnativesocketengine_unix.cpp.orig	2014-04-10 18:37:12.001048576 +0000
+++ src/network/socket/qnativesocketengine_unix.cpp
@@ -871,6 +871,9 @@ qint64 QNativeSocketEnginePrivate::nativ
 #endif
         sockAddrSize = sizeof(sockAddrIPv6);
         sockAddrPtr = (struct sockaddr *)&sockAddrIPv6;
+#ifdef Q_OS_HAIKU
+		sockAddrIPv6.sin6_len = sockAddrSize;
+#endif
     } else
 #endif
     if (host.protocol() == QAbstractSocket::IPv4Protocol) {
@@ -880,6 +883,9 @@ qint64 QNativeSocketEnginePrivate::nativ
         sockAddrIPv4.sin_addr.s_addr = htonl(host.toIPv4Address());
         sockAddrSize = sizeof(sockAddrIPv4);
         sockAddrPtr = (struct sockaddr *)&sockAddrIPv4;
+#ifdef Q_OS_HAIKU
+        sockAddrIPv4.sin_len = sockAddrSize;
+#endif        
     }
 
     ssize_t sentBytes = qt_safe_sendto(socketDescriptor, data, len,
