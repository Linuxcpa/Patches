$NetBSD$

--- nspr/pr/src/md/unix/linux.c.orig	2014-06-05 21:42:08.010747904 +0000
+++ nspr/pr/src/md/unix/linux.c
@@ -25,12 +21,14 @@ PRWord *_MD_HomeGCRegisters(PRThread *t,
 
 #ifdef _PR_PTHREADS
 
+#ifndef HAIKU
 extern void _MD_unix_terminate_waitpid_daemon(void);
 
 void _MD_CleanupBeforeExit(void)
 {
     _MD_unix_terminate_waitpid_daemon();
 }
+#endif
 
 #else /* ! _PR_PTHREADS */
 
