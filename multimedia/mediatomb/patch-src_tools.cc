$NetBSD$

--- src/tools.cc.orig	2014-07-18 06:06:36.000000000 +0000
+++ src/tools.cc
@@ -53,6 +53,10 @@
     #include <net/if.h>
     #include <sys/sockio.h>
 #endif
+#ifdef __HAIKU__
+    #include <sys/sockio.h>
+#endif
+
 
 #include "md5/md5.h"
 #include "file_io_handler.h"
