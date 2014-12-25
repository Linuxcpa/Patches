$NetBSD$

--- include/Qt/qwidget_haiku.h.orig	2014-12-25 04:44:21.016777216 +0000
+++ include/Qt/qwidget_haiku.h
@@ -0,0 +1,9 @@
+#ifndef QT_NO_QT_INCLUDE_WARN
+    #if defined(__GNUC__)
+        #warning "Inclusion of header files from include/Qt is deprecated."
+    #elif defined(_MSC_VER)
+        #pragma message("WARNING: Inclusion of header files from include/Qt is deprecated.")
+    #endif
+#endif
+
+#include "../QtGui/qwidget_haiku.h"
