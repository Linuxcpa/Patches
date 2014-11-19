$NetBSD$

--- boost/config/platform/haiku.hpp.orig	2014-11-18 01:18:46.971505664 +0000
+++ boost/config/platform/haiku.hpp
@@ -0,0 +1,25 @@
+//  (C) Copyright John Maddock 2001. 
+//  Use, modification and distribution are subject to the 
+//  Boost Software License, Version 1.0. (See accompanying file 
+//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
+
+//  See http://www.boost.org for most recent version.
+	
+//  Haiku specific config options:
+
+#define BOOST_PLATFORM "Haiku"
+
+#define BOOST_HAS_UNISTD_H
+	
+#ifndef BOOST_DISABLE_THREADS
+#   define BOOST_HAS_THREADS
+#endif
+
+//
+// thread API's not auto detected:
+//
+#define BOOST_HAS_GETTIMEOFDAY
+//#define BOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
+
+// boilerplate code:
+#include <boost/config/posix_features.hpp>
