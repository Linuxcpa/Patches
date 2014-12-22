$NetBSD$

--- common/jk_global.h.orig	2012-03-06 12:33:58.000000000 +0000
+++ common/jk_global.h
@@ -150,9 +150,6 @@ typedef int socklen_t;
 #include <netinet/tcp.h>
 #include <arpa/inet.h>
 #include <sys/un.h>
-#if !defined(_OSD_POSIX) && !defined(AS400) && !defined(__CYGWIN__) && !defined(HPUX11)
-#include <sys/socketvar.h>
-#endif
 #if !defined(HPUX11) && !defined(AS400)
 #include <sys/select.h>
 #endif
