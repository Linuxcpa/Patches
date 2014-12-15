$NetBSD: patch-id__open.c,v 1.1 2013/12/13 10:46:40 jperkin Exp $

Need sys/file.h for FNDELAY on SunOS.

--- id_open.c.orig	2004-01-18 17:21:28.029622272 +0000
+++ id_open.c
@@ -8,7 +8,7 @@
 #if HAVE_CONFIG_H
 # include "config.h"
 #endif
-
+#include <syslog.h>
 #include <stdio.h>
 #include <errno.h>
 #include <fcntl.h>
@@ -30,6 +30,9 @@
 # endif
 #endif
 
+#ifdef __sun
+#include <sys/file.h>
+#endif
 
 #define IN_LIBIDENT_SRC
 #include "ident.h"
@@ -98,7 +101,7 @@ ident_t *id_open_addr (const struct sock
     if (timeout)
     {
 	if (((res = fcntl(id->fd, F_GETFL, 0)) < 0)
-	 || (fcntl(id->fd, F_SETFL, res | FNDELAY) < 0))
+	 || (fcntl(id->fd, F_SETFL, res | O_NDELAY) < 0))
 	    goto ERROR;
     }
 
