$NetBSD$

--- glib/gmain.c.orig	2014-03-24 18:49:34.000000000 +0000
+++ glib/gmain.c
@@ -77,6 +77,11 @@
 
 #include "glib_trace.h"
 
+#if defined(G_OS_BEOS) || defined(G_PLATFORM_HAIKU)
+ #include <sys/socket.h>
+ #include <sys/wait.h>
+#endif /* G_OS_BEOS & G_PLATFORM_HAIKU */
+
 #include "gmain.h"
 
 #include "garray.h"
