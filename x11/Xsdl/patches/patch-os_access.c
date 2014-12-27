$NetBSD$

--- os/access.c.orig	2009-09-08 06:04:53.005242880 +0000
+++ os/access.c
@@ -95,7 +95,7 @@ SOFTWARE.
 # endif
 #endif
 
-#if defined(SVR4) ||  (defined(SYSV) && defined(__i386__)) || defined(__GNU__)
+#if defined(SVR4) ||  (defined(SYSV) && defined(__i386__)) || defined(__GNU__) || defined(__HAIKU__)
 # include <sys/utsname.h>
 #endif
 #if defined(SYSV) &&  defined(__i386__)
