$NetBSD$

--- src/tools/timelimit.c.orig	2013-02-19 19:21:35.000000000 +0000
+++ src/tools/timelimit.c
@@ -27,7 +27,7 @@
 
 /* we hope all OS's have those..*/
 #include <sys/types.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/time.h>
 #include <sys/wait.h>
 
