$NetBSD: patch-nsprpub_pr_include_md_prosdep.h,v 1.3 2013/07/20 08:57:20 ryoon Exp $

--- nspr/pr/include/md/prosdep.h.orig	2014-06-05 21:42:08.000000000 +0000
+++ nspr/pr/include/md/prosdep.h
@@ -34,7 +34,7 @@ PR_BEGIN_EXTERN_C
 #if defined(AIX)
 #include "md/_aix.h"
 
-#elif defined(FREEBSD)
+#elif defined(FREEBSD) || defined(__DragonFly__)
 #include "md/_freebsd.h"
 
 #elif defined(NETBSD)
@@ -52,7 +52,7 @@ PR_BEGIN_EXTERN_C
 #elif defined(IRIX)
 #include "md/_irix.h"
 
-#elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__)
+#elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) || defined(HAIKU)
 #include "md/_linux.h"
 
 #elif defined(OSF1)
