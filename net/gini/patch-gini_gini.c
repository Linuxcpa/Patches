$NetBSD$

--- gini/gini.c.orig	2003-01-30 17:38:28.000000000 +0000
+++ gini/gini.c
@@ -24,7 +24,7 @@
 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/time.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/socket.h>
 #include <glib.h>
 #include <string.h>
@@ -1085,7 +1085,7 @@ static void setup_signal_traps ()
 // signal (SIGUSR1, signalh);
 // signal (SIGUSR2, signalh);
 // signal (SIGCHLD, signalh);
-  signal (SIGIO, signalh);
+  signal (SIGILL, signalh);
 #ifndef ENV_CYGWIN
   signal (SIGALRM, SIG_IGN);
 #endif
@@ -1100,7 +1100,7 @@ void signalh (const int sig)
   case SIGSEGV:
   case SIGBUS:
   case SIGFPE:
-  case SIGIO:
+  case SIGILL:
   case SIGTERM:
 //    printf ("\nEEEEK!\n");
 	  quit=1;
