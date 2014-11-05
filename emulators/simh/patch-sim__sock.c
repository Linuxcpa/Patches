$NetBSD$

--- sim_sock.c.orig	2010-06-22 07:21:06.000000000 +0000
+++ sim_sock.c
@@ -315,7 +315,8 @@ if (fl == -1)
 sta = fcntl (sock, F_SETFL, fl | O_NONBLOCK);           /* set nonblock */
 if (sta == -1)
     return SOCKET_ERROR;
-#if !defined (macintosh) && !defined (__EMX__)          /* Unix only */
+#if !defined (macintosh) && !defined (__EMX__) && \
+    !defined (__HAIKU__)                                /* Unix only */
 sta = fcntl (sock, F_SETOWN, getpid());                 /* set ownership */
 if (sta == -1)
     return SOCKET_ERROR;
