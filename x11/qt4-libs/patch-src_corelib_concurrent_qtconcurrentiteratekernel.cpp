$NetBSD$

--- src/corelib/concurrent/qtconcurrentiteratekernel.cpp.orig	2014-04-10 18:37:11.008126464 +0000
+++ src/corelib/concurrent/qtconcurrentiteratekernel.cpp
@@ -67,7 +67,13 @@ enum {
     MedianSize = 7
 };
 
-#if defined(Q_OS_MAC)
+#if defined(Q_OS_HAIKU)
+#include <os/kernel/OS.h>
+static qint64 getticks()
+{
+    return system_time();
+}
+#elif defined(Q_OS_MAC) || defined(__APPLE__)
 
 static qint64 getticks()
 {
