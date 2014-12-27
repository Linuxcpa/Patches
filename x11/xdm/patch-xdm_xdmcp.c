$NetBSD$

--- xdm/xdmcp.c.orig	2011-09-25 07:35:47.000000000 +0000
+++ xdm/xdmcp.c
@@ -841,7 +841,7 @@ forward_respond (
 		    client = (struct sockaddr *) &un_addr;
 #  if defined(BSD44SOCKETS) && defined(UNIXCONN)
 		    un_addr.sun_len = strlen(un_addr.sun_path);
-		    clientlen = SUN_LEN(&un_addr);
+		    clientlen = sizeof(&un_addr);
 #  else
 		    clientlen = sizeof (un_addr);
 #  endif
