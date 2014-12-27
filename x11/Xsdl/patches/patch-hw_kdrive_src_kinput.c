$NetBSD$

--- hw/kdrive/src/kinput.c.orig	2009-10-21 21:52:56.019398656 +0000
+++ hw/kdrive/src/kinput.c
@@ -1,6 +1,6 @@
 /*
- * Copyright © 1999 Keith Packard
- * Copyright © 2006 Nokia Corporation
+ * Copyright  1999 Keith Packard
+ * Copyright  2006 Nokia Corporation
  *
  * Permission to use, copy, modify, distribute, and sell this software and its
  * documentation for any purpose is hereby granted without fee, provided that
@@ -107,7 +107,7 @@ KdBlockSigio (void)
     sigset_t	set;
     
     sigemptyset (&set);
-    sigaddset (&set, SIGIO);
+    sigaddset (&set, SIGILL);
     sigprocmask (SIG_BLOCK, &set, 0);
 }
 
@@ -117,7 +117,7 @@ KdUnblockSigio (void)
     sigset_t	set;
     
     sigemptyset (&set);
-    sigaddset (&set, SIGIO);
+    sigaddset (&set, SIGILL);
     sigprocmask (SIG_UNBLOCK, &set, 0);
 }
 
@@ -130,8 +130,8 @@ KdAssertSigioBlocked (char *where)
 
     sigemptyset (&set);
     sigprocmask (SIG_BLOCK, &set, &old);
-    if (!sigismember (&old, SIGIO)) {
-	ErrorF ("SIGIO not blocked at %s\n", where);
+    if (!sigismember (&old, SIGILL)) {
+	ErrorF ("SIGILL not blocked at %s\n", where);
         KdBacktrace(0);
     }
 }
@@ -147,8 +147,12 @@ static int  kdnFds;
 #ifdef FNONBLOCK
 #define NOBLOCK FNONBLOCK
 #else
+#ifdef __HAIKU__
+#define NOBLOCK 0
+#else
 #define NOBLOCK FNDELAY
 #endif
+#endif
 
 void
 KdResetInputMachine (void)
@@ -166,7 +170,7 @@ KdNonBlockFd (int fd)
 {
     int	flags;
     flags = fcntl (fd, F_GETFL);
-    flags |= FASYNC|NOBLOCK;
+    flags |= NOBLOCK;
     fcntl (fd, F_SETFL, flags);
 }
 
@@ -177,16 +181,18 @@ KdAddFd (int fd)
     sigset_t		set;
     
     kdnFds++;
+#ifdef F_SETOWN
     fcntl (fd, F_SETOWN, getpid());
+#endif
     KdNonBlockFd (fd);
     AddEnabledDevice (fd);
     memset (&act, '\0', sizeof act);
     act.sa_handler = KdSigio;
     sigemptyset (&act.sa_mask);
-    sigaddset (&act.sa_mask, SIGIO);
+    sigaddset (&act.sa_mask, SIGILL);
     sigaddset (&act.sa_mask, SIGALRM);
     sigaddset (&act.sa_mask, SIGVTALRM);
-    sigaction (SIGIO, &act, 0);
+    sigaction (SIGILL, &act, 0);
     sigemptyset (&set);
     sigprocmask (SIG_SETMASK, &set, 0);
 }
@@ -200,14 +206,14 @@ KdRemoveFd (int fd)
     kdnFds--;
     RemoveEnabledDevice (fd);
     flags = fcntl (fd, F_GETFL);
-    flags &= ~(FASYNC|NOBLOCK);
+    flags &= ~(NOBLOCK);
     fcntl (fd, F_SETFL, flags);
     if (kdnFds == 0)
     {
 	memset (&act, '\0', sizeof act);
 	act.sa_handler = SIG_IGN;
 	sigemptyset (&act.sa_mask);
-	sigaction (SIGIO, &act, 0);
+	sigaction (SIGILL, &act, 0);
     }
 }
 
