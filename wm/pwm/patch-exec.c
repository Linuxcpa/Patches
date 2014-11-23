$NetBSD$

--- exec.c.orig	2006-05-17 06:50:33.000000000 +0000
+++ exec.c
@@ -9,7 +9,7 @@
 
 #include <unistd.h>
 #include <sys/types.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <signal.h>
 #include <time.h>
 #include <string.h>
