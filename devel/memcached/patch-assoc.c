$NetBSD$

--- assoc.c.orig	2014-04-28 05:51:18.000000000 +0000
+++ assoc.c
@@ -14,7 +14,7 @@
 #include "memcached.h"
 #include <sys/stat.h>
 #include <sys/socket.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/resource.h>
 #include <fcntl.h>
 #include <netinet/in.h>
