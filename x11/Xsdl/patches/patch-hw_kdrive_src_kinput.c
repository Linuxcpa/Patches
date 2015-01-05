$NetBSD$

--- hw/kdrive/src/kinput.c.orig	2009-10-21 21:52:56.033816576 +0000
+++ hw/kdrive/src/kinput.c
@@ -107,7 +107,9 @@ KdBlockSigio (void)
     sigset_t	set;
     
     sigemptyset (&set);
+#ifndef __HAIKU__
     sigaddset (&set, SIGIO);
+#endif
     sigprocmask (SIG_BLOCK, &set, 0);
 }
 
@@ -117,7 +119,9 @@ KdUnblockSigio (void)
     sigset_t	set;
     
     sigemptyset (&set);
+#ifndef __HAIKU__
     sigaddset (&set, SIGIO);
+#endif
     sigprocmask (SIG_UNBLOCK, &set, 0);
 }
 
@@ -147,8 +151,12 @@ static int  kdnFds;
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
@@ -166,7 +174,11 @@ KdNonBlockFd (int fd)
 {
     int	flags;
     flags = fcntl (fd, F_GETFL);
+#ifdef FASYNC
     flags |= FASYNC|NOBLOCK;
+#else
+    flags |= NOBLOCK;
+#endif    
     fcntl (fd, F_SETFL, flags);
 }
 
@@ -177,16 +189,22 @@ KdAddFd (int fd)
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
+#ifdef SIGIO
     sigaddset (&act.sa_mask, SIGIO);
+#endif
     sigaddset (&act.sa_mask, SIGALRM);
     sigaddset (&act.sa_mask, SIGVTALRM);
+#ifdef SIGIO
     sigaction (SIGIO, &act, 0);
+#endif    
     sigemptyset (&set);
     sigprocmask (SIG_SETMASK, &set, 0);
 }
@@ -200,14 +218,20 @@ KdRemoveFd (int fd)
     kdnFds--;
     RemoveEnabledDevice (fd);
     flags = fcntl (fd, F_GETFL);
+#ifdef FASYNC
     flags &= ~(FASYNC|NOBLOCK);
+#else
+    flags &= ~(NOBLOCK);
+#endif
     fcntl (fd, F_SETFL, flags);
     if (kdnFds == 0)
     {
 	memset (&act, '\0', sizeof act);
 	act.sa_handler = SIG_IGN;
 	sigemptyset (&act.sa_mask);
+#ifdef SIGIO
 	sigaction (SIGIO, &act, 0);
+#endif
     }
 }
 
