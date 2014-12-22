$NetBSD: patch-html_ci__string.h,v 1.1 2014/02/16 22:58:51 wiz Exp $

Fix build with clang, from
https://github.com/dhoerl/htmlcxx/

--- html/ci_string.h.orig	2011-02-13 22:24:53.062128128 +0000
+++ html/ci_string.h
@@ -3,8 +3,10 @@
 
 #include <cctype>
 #include <string>
-
-#if __GNUC__ >= 3
+#include <strings.h>
+#if __clang_major__ >= 3
+struct ci_char_traits : public std::char_traits<char>
+#elif __GNUC__ >= 3
 #include <bits/char_traits.h>
 struct ci_char_traits : public std::char_traits<char>
 #elif defined(__GNUC__)
