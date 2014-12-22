$NetBSD$

--- nspr/pr/include/md/_unixos.h.orig	2014-06-05 21:42:08.000000000 +0000
+++ nspr/pr/include/md/_unixos.h
@@ -15,7 +15,7 @@
  * not be redefined.
  */
 #if !defined(LINUX) && !defined(__GNU__) && !defined(__GLIBC__) \
-    && !defined(DARWIN)
+    && !defined(DARWIN) && !defined(HAIKU)
 #ifndef FD_SETSIZE
 #define FD_SETSIZE  4096
 #endif
@@ -46,7 +46,7 @@
  */
 #include <sys/time.h>
 #include <sys/types.h>
-#if defined(AIX) || defined(SYMBIAN)
+#if defined(AIX) || defined(SYMBIAN) || defined(HAIKU)
 #include <sys/select.h>
 #endif
 
