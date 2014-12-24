$NetBSD$

--- rpc2-src/rpc2test.c.orig	2010-03-22 19:18:30.000000000 +0000
+++ rpc2-src/rpc2test.c
@@ -50,7 +50,7 @@ int lwp_nextindex;
 #include <sys/types.h>
 #include <sys/time.h>
 #include <time.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/stat.h>
 #include <sys/file.h>
 #include <netinet/in.h>
