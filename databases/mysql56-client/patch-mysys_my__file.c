$NetBSD$

--- mysys/my_file.c.orig	2014-02-28 03:45:33.125829120 +0000
+++ mysys/my_file.c
@@ -32,6 +32,11 @@
     May be more or less than max_file_limit!
 */
 
+#ifdef __HAIKU__
+#undef  min
+#define min(a,b) ((a) < (b) ? (a) : (b))
+#endif
+
 #if defined(HAVE_GETRLIMIT) && defined(RLIMIT_NOFILE)
 
 #ifndef RLIM_INFINITY
