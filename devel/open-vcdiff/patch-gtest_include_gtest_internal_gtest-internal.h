$NetBSD$

--- gtest/include/gtest/internal/gtest-internal.h.orig	2012-04-03 17:43:13.000000000 +0000
+++ gtest/include/gtest/internal/gtest-internal.h
@@ -33,7 +33,7 @@
 //
 // This header file declares functions and macros used internally by
 // Google Test.  They are subject to change without notice.
-
+#include <strings.h>
 #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_
 #define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_
 
