$NetBSD: patch-nsprpub_pr_include_md__pth.h,v 1.3 2013/07/20 08:57:20 ryoon Exp $

--- nspr/pr/include/md/_pth.h.orig	2014-06-05 21:42:08.062652416 +0000
+++ nspr/pr/include/md/_pth.h
@@ -114,10 +114,11 @@
 #define _PT_PTHREAD_COPY_THR_HANDLE(st, dt)   (dt) = (st)
 #elif defined(IRIX) || defined(OSF1) || defined(AIX) || defined(SOLARIS) \
 	|| defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-	|| defined(HPUX) || defined(FREEBSD) \
+	|| defined(HPUX) || defined(FREEBSD) || defined(__DragonFly__) \
 	|| defined(NETBSD) || defined(OPENBSD) || defined(BSDI) \
 	|| defined(NTO) || defined(DARWIN) \
-	|| defined(UNIXWARE) || defined(RISCOS)	|| defined(SYMBIAN)
+	|| defined(UNIXWARE) || defined(RISCOS)	|| defined(SYMBIAN) \
+	|| defined(HAIKU)
 #define _PT_PTHREAD_INVALIDATE_THR_HANDLE(t)  (t) = 0
 #define _PT_PTHREAD_THR_HANDLE_IS_INVALID(t)  (t) == 0
 #define _PT_PTHREAD_COPY_THR_HANDLE(st, dt)   (dt) = (st)
@@ -170,7 +171,7 @@
 	|| defined(LINUX) || defined(__GNU__)|| defined(__GLIBC__) \
 	|| defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
 	|| defined(BSDI) || defined(UNIXWARE) \
-	|| defined(DARWIN) || defined(SYMBIAN)
+	|| defined(DARWIN) || defined(SYMBIAN) || defined(HAIKU)
 #define PT_NO_SIGTIMEDWAIT
 #endif
 
@@ -201,7 +202,8 @@
 #endif /* defined(_PR_DCETHREADS) */
 
 #elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-	|| defined(FREEBSD) || defined(SYMBIAN)
+	|| defined(FREEBSD) || defined(SYMBIAN) || defined(__DragonFly__) \
+	|| defined(HAIKU)
 #define PT_PRIO_MIN            sched_get_priority_min(SCHED_OTHER)
 #define PT_PRIO_MAX            sched_get_priority_max(SCHED_OTHER)
 #elif defined(NTO)
@@ -260,8 +262,10 @@ extern int (*_PT_aix_yield_fcn)();
 #elif defined(HPUX) || defined(SOLARIS) \
 	|| defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
 	|| defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
+	|| defined(__DragonFly__) \
 	|| defined(BSDI) || defined(NTO) || defined(DARWIN) \
-	|| defined(UNIXWARE) || defined(RISCOS) || defined(SYMBIAN)
+	|| defined(UNIXWARE) || defined(RISCOS) || defined(SYMBIAN) \
+	|| defined(HAIKU)
 #define _PT_PTHREAD_YIELD()            	sched_yield()
 #else
 #error "Need to define _PT_PTHREAD_YIELD for this platform"
