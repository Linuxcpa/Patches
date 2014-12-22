$NetBSD: patch-nsprpub_pr_src_md_unix_uxrng.c,v 1.3 2013/07/20 08:57:20 ryoon Exp $

--- nspr/pr/src/md/unix/uxrng.c.orig	2014-06-05 21:42:08.041943040 +0000
+++ nspr/pr/src/md/unix/uxrng.c
@@ -86,7 +86,8 @@ GetHighResClock(void *buf, size_t maxbyt
 
 #elif (defined(LINUX) || defined(FREEBSD) || defined(__FreeBSD_kernel__) \
     || defined(NETBSD) || defined(__NetBSD_kernel__) || defined(OPENBSD) \
-    || defined(SYMBIAN) || defined(__GNU__))
+    || defined(SYMBIAN) || defined(__GNU__)) || defined(__DragonFly__) \
+    || defined(HAIKU)
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
