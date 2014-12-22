$NetBSD$

--- nspr/pr/include/md/_linux.h.orig	2014-06-05 21:42:08.037486592 +0000
+++ nspr/pr/include/md/_linux.h
@@ -261,7 +261,8 @@ static inline PRInt32 _MD_ATOMIC_SET(PRI
 #endif /* __arm__ */
 
 #define USE_SETJMP
-#if (defined(__GLIBC__) && __GLIBC__ >= 2) || defined(ANDROID)
+#if (defined(__GLIBC__) && __GLIBC__ >= 2) || defined(ANDROID) \
+	|| defined(HAIKU)
 #define _PR_POLL_AVAILABLE
 #endif
 #undef _PR_USE_POLL
@@ -282,7 +283,7 @@ static inline PRInt32 _MD_ATOMIC_SET(PRI
 #define _PR_HAVE_GETADDRINFO
 #define _PR_INET6_PROBE
 #endif
-#ifndef ANDROID
+#if !defined(ANDROID) && !defined(HAIKU)
 #define _PR_HAVE_SYSV_SEMAPHORES
 #define PR_HAVE_SYSV_NAMED_SHARED_MEMORY
 #endif
@@ -643,12 +644,6 @@ extern void _MD_YIELD(void);
 
 #endif /* ! _PR_PTHREADS */
 
-extern void _MD_EarlyInit(void);
-
-#define _MD_EARLY_INIT                  _MD_EarlyInit
-#define _MD_FINAL_INIT                  _PR_UnixInit
-#define HAVE_CLOCK_MONOTONIC
-
 /*
  * We wrapped the select() call.  _MD_SELECT refers to the built-in,
  * unwrapped version.
