$NetBSD$

--- src/xcb_util.c.orig	2014-06-15 11:44:14.000000000 +0000
+++ src/xcb_util.c
@@ -434,9 +434,6 @@ static int _xcb_open_unix(char *protocol
 
     strcpy(addr.sun_path, file);
     addr.sun_family = AF_UNIX;
-#ifdef HAVE_SOCKADDR_SUN_LEN
-    addr.sun_len = SUN_LEN(&addr);
-#endif
     fd = _xcb_socket(AF_UNIX, SOCK_STREAM, 0);
     if(fd == -1)
         return -1;
