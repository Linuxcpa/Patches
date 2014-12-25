$NetBSD$

--- tracker.h.orig	2008-06-15 00:00:19.000000000 +0000
+++ tracker.h
@@ -19,7 +19,7 @@
 #include <arpa/inet.h>
 #include <sys/param.h>
 #endif
-
+#include <sys/select.h>
 #include <time.h>
 
 #include "btconfig.h"
