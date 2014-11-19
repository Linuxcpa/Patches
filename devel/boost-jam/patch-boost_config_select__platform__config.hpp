$NetBSD$

--- boost/config/select_platform_config.hpp.orig	2014-06-02 15:06:28.018612224 +0000
+++ boost/config/select_platform_config.hpp
@@ -41,6 +41,10 @@
 // win32:
 #  define BOOST_PLATFORM_CONFIG "boost/config/platform/win32.hpp"
 
+#elif defined(__HAIKU__)
+// Haiku
+#  define BOOST_PLATFORM_CONFIG "boost/config/platform/haiku.hpp"
+
 #elif defined(__BEOS__)
 // BeOS
 #  define BOOST_PLATFORM_CONFIG "boost/config/platform/beos.hpp"
