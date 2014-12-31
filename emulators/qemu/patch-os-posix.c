$NetBSD$

--- os-posix.c.orig	2014-08-01 14:12:17.000000000 +0000
+++ os-posix.c
@@ -334,6 +334,9 @@ bool is_daemonized(void)
 
 int os_mlock(void)
 {
+#ifdef __HAIKU__
+	return ENOSYS;
+#else	
     int ret = 0;
 
     ret = mlockall(MCL_CURRENT | MCL_FUTURE);
@@ -342,4 +345,5 @@ int os_mlock(void)
     }
 
     return ret;
+#endif
 }
