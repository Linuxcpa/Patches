$NetBSD$

--- src/corelib/kernel/qsystemsemaphore_unix.cpp.orig	2014-04-10 18:37:11.057147392 +0000
+++ src/corelib/kernel/qsystemsemaphore_unix.cpp
@@ -55,6 +55,9 @@
 #endif
 #include <fcntl.h>
 #include <errno.h>
+#if !defined(Q_OS_HAIKU)
+#include <sys/shm.h>
+#endif
 
 #include "private/qcore_unix_p.h"
 
