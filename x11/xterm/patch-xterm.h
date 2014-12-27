$NetBSD$

--- xterm.h.orig	2014-07-24 22:47:09.000000000 +0000
+++ xterm.h
@@ -269,9 +269,11 @@ extern void exit();
 extern void free();
 #endif
 
+#if !defined(__HAIKU__)
 #ifdef HAVE_UNISTD_H
 #include <unistd.h>
 #endif
+#endif
 
 #ifdef HAVE_SYS_WAIT_H
 #include <sys/wait.h>
