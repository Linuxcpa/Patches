$NetBSD$

--- local/child.c.orig	2009-06-26 21:15:58.000000000 +0000
+++ local/child.c
@@ -33,7 +33,7 @@
 #if HAVE_GETSPNAM
 # include <shadow.h>
 #endif /* HAVE_GETSPNAM */
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/wait.h>
 
 char *getusershell(void);
