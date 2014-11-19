$NetBSD$

--- src/network.c.orig	2014-06-23 10:32:12.655884288 +0000
+++ src/network.c
@@ -363,6 +363,9 @@ static int network_server_init(server *s
 		addr_len = SUN_LEN(&srv_socket->addr.un);
 #else
 		/* stevens says: */
+#ifdef __HAIKU__		
+		size_t hostlen = strlen(host) + 1;
+#endif
 		addr_len = hostlen + sizeof(srv_socket->addr.un.sun_family);
 #endif
 
