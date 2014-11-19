$NetBSD$

--- lib/libsystem.c.orig	2014-05-29 01:55:14.582746112 +0000
+++ lib/libsystem.c
@@ -216,8 +216,10 @@ signalName(unsigned int const signalClas
         return "SIGPROF";
     case SIGWINCH:
         return "SIGWINCH";
+#ifdef SIGIO
     case SIGIO:
         return "SIGIO";
+#endif
     case SIGSYS:
         return "SIGSYS";
     default:
