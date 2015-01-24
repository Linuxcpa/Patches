--- proxyserver.c.orig	1996-08-31 01:14:33.003407872 -0700
+++ proxyserver.c	2015-01-23 22:24:06.600834048 -0800
@@ -20,8 +20,7 @@
  *  Koji Suzuki   : suz@kt.rim.or.jp
  */
 
-#ident "$Id: proxyserver.c,v 1.8 1996/08/31 08:14:33 suz Exp $"
-
+#include <sys/select.h>
 #define USE_PIPE
 
 #include <stdio.h>
@@ -31,7 +30,7 @@
 #define SIGCHLD SIGCLD
 #endif
 #include <sys/time.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 
 #ifndef USE_PIPE
 #ifdef USE_TERMIOS /* for POSIX */
@@ -61,6 +60,8 @@
 
 char *cmd = "/bin/sh";
 
+static void proxy_start(void);
+
 void term() {
 	proxy_term();
 	exit(1);
@@ -224,7 +225,7 @@
 	}
 }
 
-proxy_start() {
+static void proxy_start(void) {
 	char buf[256];
 	fd_set fds;
 	int maxfd;
