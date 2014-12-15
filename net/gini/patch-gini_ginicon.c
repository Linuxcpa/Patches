$NetBSD$

--- gini/ginicon.c.orig	2003-01-29 20:16:42.000000000 +0000
+++ gini/ginicon.c
@@ -24,7 +24,7 @@
 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/time.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/stat.h>
 //#include <time.h>
 #include <glib.h>
@@ -162,7 +162,7 @@ static void setup_signal_traps ()
   // signal (SIGUSR1, s1gnal);
   // signal (SIGUSR2, s1gnal);
   // signal (SIGCHLD, s1gnal);
-  signal (SIGIO, s1gnal);
+  signal (SIGILL, s1gnal);
   signal (SIGALRM, SIG_IGN);
 }
 
@@ -175,7 +175,7 @@ void s1gnal (const int sig)
   case SIGSEGV:
   case SIGBUS:
   case SIGFPE:
-  case SIGIO:
+  case SIGILL:
   case SIGTERM:
     printf ("EEEEK!\n");
 //    closeallsockets ();
