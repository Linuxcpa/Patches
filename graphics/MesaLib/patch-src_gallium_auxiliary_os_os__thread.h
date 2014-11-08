$NetBSD$

--- src/gallium/auxiliary/os/os_thread.h.orig	2011-10-15 00:43:58.024641536 +0000
+++ src/gallium/auxiliary/os/os_thread.h
@@ -314,7 +314,7 @@ typedef int64_t pipe_condvar;
  * pipe_barrier
  */
 
-#if defined(PIPE_OS_LINUX) || defined(PIPE_OS_BSD) || defined(PIPE_OS_SOLARIS) || defined(PIPE_OS_HAIKU)
+#if defined(PIPE_OS_LINUX) || defined(PIPE_OS_BSD) || defined(PIPE_OS_SOLARIS)
 
 typedef pthread_barrier_t pipe_barrier;
 
