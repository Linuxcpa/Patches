$NetBSD$

--- Xtranssock.c.orig	2014-03-31 09:45:04.007077888 +0000
+++ Xtranssock.c
@@ -1128,8 +1128,8 @@ TRANS(SocketUNIXCreateListener) (XtransC
     sockname.sun_len = strlen(sockname.sun_path);
 #endif
 
-#if defined(BSD44SOCKETS) || defined(SUN_LEN)
-    namelen = SUN_LEN(&sockname);
+#if defined(BSD44SOCKETS) || defined(sizeof)
+    namelen = sizeof(&sockname);
 #else
     namelen = strlen(sockname.sun_path) + offsetof(struct sockaddr_un, sun_path);
 #endif
@@ -1996,12 +1996,8 @@ TRANS(SocketUNIXConnect) (XtransConnInfo
 	return TRANS_CONNECT_FAILED;
     }
 
-#if (defined(BSD44SOCKETS) || defined(__UNIXWARE__))
-    sockname.sun_len = strlen (sockname.sun_path);
-#endif
-
-#if defined(BSD44SOCKETS) || defined(SUN_LEN)
-    namelen = SUN_LEN (&sockname);
+#if defined(BSD44SOCKETS) || defined(sizeof)
+    namelen = sizeof(&sockname);
 #else
     namelen = strlen (sockname.sun_path) + offsetof(struct sockaddr_un, sun_path);
 #endif
