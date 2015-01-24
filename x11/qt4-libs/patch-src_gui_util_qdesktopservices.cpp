$NetBSD$

--- src/gui/util/qdesktopservices.cpp.orig	2014-04-10 18:37:12.033816576 +0000
+++ src/gui/util/qdesktopservices.cpp
@@ -57,6 +57,8 @@
 #include "qdesktopservices_mac.cpp"
 #elif defined(Q_OS_SYMBIAN)
 #include "qdesktopservices_s60.cpp"
+#elif defined(Q_WS_HAIKU)
+#include "qdesktopservices_haiku.cpp"
 #endif
 
 #include <qhash.h>
