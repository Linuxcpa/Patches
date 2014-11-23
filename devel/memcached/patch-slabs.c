$NetBSD$

--- slabs.c.orig	2014-04-28 05:51:18.000000000 +0000
+++ slabs.c
@@ -7,10 +7,11 @@
  * slab size is always 1MB, since that's the maximum item size allowed by the
  * memcached protocol.
  */
+
 #include "memcached.h"
 #include <sys/stat.h>
 #include <sys/socket.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/resource.h>
 #include <fcntl.h>
 #include <netinet/in.h>
