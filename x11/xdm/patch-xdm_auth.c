$NetBSD$

--- xdm/auth.c.orig	2011-09-25 07:35:47.000000000 +0000
+++ xdm/auth.c
@@ -34,7 +34,7 @@ from The Open Group.
  *
  * maintain the authorization generation daemon
  */
-
+#include <sys/sockio.h>
 #include <X11/X.h>
 #include <X11/Xlibint.h>
 #include <sys/types.h>
