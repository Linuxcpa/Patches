$NetBSD$

--- src/flow-report.c.orig	2004-01-05 17:59:41.000000000 +0000
+++ src/flow-report.c
@@ -30,7 +30,7 @@
 #include <ftlib.h>
 
 #include <sys/types.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
