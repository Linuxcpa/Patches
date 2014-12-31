$NetBSD$

--- main-loop.c.orig	2014-08-01 14:12:17.000000000 +0000
+++ main-loop.c
@@ -81,7 +81,9 @@ static int qemu_signal_init(void)
      */
     sigemptyset(&set);
     sigaddset(&set, SIG_IPI);
+#ifndef __HAIKU__
     sigaddset(&set, SIGIO);
+#endif
     sigaddset(&set, SIGALRM);
     sigaddset(&set, SIGBUS);
     pthread_sigmask(SIG_BLOCK, &set, NULL);
