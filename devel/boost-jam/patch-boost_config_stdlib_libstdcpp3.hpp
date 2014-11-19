$NetBSD$

--- boost/config/stdlib/libstdcpp3.hpp.orig	2014-06-02 15:06:28.013107200 +0000
+++ boost/config/stdlib/libstdcpp3.hpp
@@ -36,6 +36,7 @@
         || defined(_GLIBCXX__PTHREADS) \
         || defined(_GLIBCXX_HAS_GTHREADS) \
         || defined(_WIN32) \
+        || defined(__HAIKU__) \
         || defined(_AIX)
       //
       // If the std lib has thread support turned on, then turn it on in Boost
