$NetBSD$

--- src/lib/signal.c.orig	2013-02-19 19:21:35.027262976 +0000
+++ src/lib/signal.c
@@ -346,7 +346,7 @@ void init_signals(void terminate(int sig
    sig_names[SIGVTALRM] = _("Virtual alarm clock");
    sig_names[SIGPROF]   = _("Profiling alarm clock");
    sig_names[SIGWINCH]  = _("Window size change");
-   sig_names[SIGIO]     = _("I/O now possible");
+   sig_names[SIGILL]     = _("I/O now possible");
 #ifdef SIGPWR
    sig_names[SIGPWR]    = _("Power failure restart");
 #endif
@@ -388,7 +388,7 @@ void init_signals(void terminate(int sig
    sigaction(SIGCONT,   &sigignore, NULL);
    sigaction(SIGPROF,   &sigignore, NULL);
    sigaction(SIGWINCH,  &sigignore, NULL);
-   sigaction(SIGIO,     &sighandle, NULL);
+   sigaction(SIGILL,     &sighandle, NULL);
 
    sigaction(SIGINT,    &sigdefault, NULL);
    sigaction(SIGXCPU,   &sigdefault, NULL);
