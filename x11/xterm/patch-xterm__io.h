$NetBSD$

--- xterm_io.h.orig	2014-07-25 08:26:56.000000000 +0000
+++ xterm_io.h
@@ -102,6 +102,10 @@
 #define USE_POSIX_TERMIOS
 #endif
 
+#ifdef __HAIKU__
+#define USE_POSIX_TERMIOS
+#endif
+
 #if defined(__osf__)
 #define USE_POSIX_TERMIOS
 #undef SYSV
