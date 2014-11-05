$NetBSD$

--- Xtranssock.c.orig	2014-03-31 09:45:04.018350080 +0000
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
@@ -2000,9 +2000,7 @@ TRANS(SocketUNIXConnect) (XtransConnInfo
     sockname.sun_len = strlen (sockname.sun_path);
 #endif
 
-#if defined(BSD44SOCKETS) || defined(SUN_LEN)
-    namelen = SUN_LEN (&sockname);
-#else
+#if defined(BSD44SOCKETS) || defined(sizeof)
     namelen = strlen (sockname.sun_path) + offsetof(struct sockaddr_un, sun_path);
 #endif
 
