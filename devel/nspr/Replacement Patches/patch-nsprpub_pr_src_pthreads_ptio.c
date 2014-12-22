$NetBSD: patch-nsprpub_pr_src_pthreads_ptio.c,v 1.3 2013/07/20 08:57:20 ryoon Exp $

--- nspr/pr/src/pthreads/ptio.c.orig	2014-06-05 21:42:08.008650752 +0000
+++ nspr/pr/src/pthreads/ptio.c
@@ -28,7 +28,7 @@
 #include <sys/uio.h>
 #include <sys/file.h>
 #include <sys/ioctl.h>
-#if defined(DARWIN)
+#if defined(DARWIN) || defined(HAIKU)
 #include <sys/utsname.h> /* for uname */
 #endif
 #if defined(SOLARIS) || defined(UNIXWARE)
@@ -180,7 +180,8 @@ static PRBool _pr_ipv6_v6only_on_by_defa
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
     || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
     || defined(BSDI) || defined(NTO) || defined(DARWIN) \
-    || defined(UNIXWARE) || defined(RISCOS) || defined(SYMBIAN)
+    || defined(UNIXWARE) || defined(RISCOS) || defined(SYMBIAN) \
+    || defined(__DragonFly__) || defined(HAIKU)
 #define _PRSelectFdSetArg_t fd_set *
 #else
 #error "Cannot determine architecture"
@@ -3256,7 +3257,7 @@ static PRIOMethods _pr_socketpollfd_meth
     || defined(AIX) || defined(FREEBSD) || defined(NETBSD) \
     || defined(OPENBSD) || defined(BSDI) || defined(NTO) \
     || defined(DARWIN) || defined(UNIXWARE) || defined(RISCOS) \
-    || defined(SYMBIAN)
+    || defined(SYMBIAN) || defined(__DragonFly__) || defined(HAIKU)
 #define _PR_FCNTL_FLAGS O_NONBLOCK
 #else
 #error "Can't determine architecture"
