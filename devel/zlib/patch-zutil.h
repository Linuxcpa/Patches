$NetBSD$

--- zutil.h.orig	2014-11-03 05:41:41.000000000 +0000
+++ zutil.h
@@ -145,7 +145,7 @@ extern z_const char * const z_errmsg[10]
 #  define OS_CODE  0x0f
 #endif
 
-#if defined(_BEOS_) || defined(RISCOS)
+#if defined(_BEOS_) || defined(RISCOS) || defined(_HAIKU_)
 #  define fdopen(fd,mode) NULL /* No fdopen() */
 #endif
 
