$NetBSD$

--- mkspecs/haiku-g++/qplatformdefs.h.orig	2014-12-25 04:44:26.503840768 +0000
+++ mkspecs/haiku-g++/qplatformdefs.h
@@ -0,0 +1,43 @@
+#ifndef QPLATFORMDEFS_H
+#define QPLATFORMDEFS_H
+
+// Get Qt defines/settings
+
+#include "qglobal.h"
+
+// Set any POSIX/XOPEN defines at the top of this file to turn on specific APIs
+
+#include <unistd.h>
+
+
+// We are hot - unistd.h should have turned on the specific APIs we requested
+
+#include <pthread.h>
+#include <dirent.h>
+#include <fcntl.h>
+#include <grp.h>
+#include <pwd.h>
+#include <signal.h>
+#include <dlfcn.h>
+
+#include <sys/types.h>
+#include <sys/ioctl.h>
+#include <sys/ipc.h>
+#include <sys/time.h>
+//#include <sys/shm.h>
+#include <sys/socket.h>
+#include <sys/stat.h>
+#include <sys/wait.h>
+#include <netinet/in.h>
+#ifndef QT_NO_IPV6IFNAME
+#include <net/if.h>
+#endif
+
+#include "../common/posix/qplatformdefs.h"
+
+#define QT_SOCKLEN_T		socklen_t
+
+#define QT_SNPRINTF		::snprintf
+#define QT_VSNPRINTF		::vsnprintf
+
+#endif // QPLATFORMDEFS_H
