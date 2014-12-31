$NetBSD$

--- util/oslib-posix.c.orig	2014-08-01 14:12:17.000000000 +0000
+++ util/oslib-posix.c
@@ -60,7 +60,7 @@ extern int daemon(int, int);
 #include <sys/mman.h>
 #include <libgen.h>
 #include <setjmp.h>
-#include <sys/signal.h>
+#include <signal.h>
 
 #ifdef CONFIG_LINUX
 #include <sys/syscall.h>
