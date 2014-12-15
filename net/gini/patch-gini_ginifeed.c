$NetBSD$

--- gini/ginifeed.c.orig	2003-01-30 17:46:13.056623104 +0000
+++ gini/ginifeed.c
@@ -23,7 +23,7 @@
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/time.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/stat.h>
 #include <glib.h>
 #ifdef ENV_LINUX
@@ -315,7 +315,7 @@ static void setup_signal_traps ()
 // signal (SIGUSR1, signalh);
 // signal (SIGUSR2, signalh);
 // signal (SIGCHLD, signalh);
-  signal (SIGIO, signalh);
+  signal (SIGILL, signalh);
 #ifndef ENV_CYGWIN
   signal (SIGALRM, SIG_IGN);
 #endif
@@ -332,7 +332,7 @@ void signalh (const int sig)
   case SIGSEGV:
   case SIGBUS:
   case SIGFPE:
-  case SIGIO:
+  case SIGILL:
   case SIGTERM:
     printf ("\nEEEEK!\n");
     closeallsockets ();
