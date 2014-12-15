$NetBSD$

--- pxe.cc.orig	2003-02-02 12:39:26.000000000 +0000
+++ pxe.cc
@@ -30,7 +30,7 @@
 #include <strings.h>
 #include <errno.h>
 #include <signal.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <unistd.h>
 #include <pwd.h>
 
