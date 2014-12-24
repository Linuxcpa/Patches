$NetBSD$

--- src/chksniff.c.orig	2003-04-06 20:28:03.051118080 +0000
+++ src/chksniff.c
@@ -7,7 +7,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <sys/ioctl.h>
-
+#include <sys/sockio.h>
 #if defined (__linux__)
 #include <linux/if.h>
 #else
