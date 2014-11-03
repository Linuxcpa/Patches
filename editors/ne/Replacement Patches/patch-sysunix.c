$NetBSD: patch-sysunix.c,v 1.1 2013/10/24 09:35:10 jperkin Exp $

--- sysunix.c.orig	2003-10-01 09:57:29.064749568 +0000
+++ sysunix.c
@@ -12,6 +12,7 @@
 with the exception of the window-specific code, which lives in
 its own modules. */
 
+#include <signal.h>
 #include <memory.h>
 #include <fcntl.h>
 #include <pwd.h>
@@ -21,6 +22,10 @@ its own modules. */
 #include <fcntl.h>
 #include <dirent.h>
             
+#if defined(__sun)
+# include <sys/filio.h>
+#endif
+
 #include "ehdr.h"
 #include "unixhdr.h"
 #include "scomhdr.h"
@@ -41,7 +46,7 @@ problems with dedicated xterm windows. *
 /* SIGSYS not on Linux */
 
 int signal_list[] = {
-  SIGQUIT, SIGILL,  SIGIOT,
+  SIGQUIT, SIGILL,
   SIGFPE,  SIGBUS,  SIGSEGV, SIGTERM,
 #ifdef SIGSYS
   SIGSYS,
@@ -55,7 +60,7 @@ int signal_list[] = {
   -1 };
 
 char *signal_names[] = {
-  "(SIGQUIT)", "(SIGILL)",  "(SIGIOT)",
+  "(SIGQUIT)", "(SIGILL)",
   "(SIGFPE)",  "(SIGBUS)",  "(SIGSEGV)", "(SIGTERM)",
 #ifdef SIGSYS
   "(SIGSYS)",
