$NetBSD$

--- include/sj3compat/sj3compat.h.orig	2010-02-14 12:19:46.000000000 +0000
+++ include/sj3compat/sj3compat.h
@@ -101,12 +101,6 @@ int sj3_daemon(int, int);
 
 /* #include "fake-rfc2553.h" */
 
-/* inet_ntoa.c */
-#if defined(BROKEN_INET_NTOA) || !defined(HAVE_INET_NTOA)
-#define inet_ntoa	sj3_inet_ntoa
-char* sj3_inet_ntoa(struct in_addr in);
-#endif
-
 /* setproctitle.c */
 #ifndef HAVE_SETPROCTITLE
 #define setproctitle	sj3_setproctitle
