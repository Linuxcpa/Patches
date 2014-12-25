$NetBSD$

--- config.tests/unix/iconv/iconv.pro.orig	2014-04-10 18:37:08.036175872 +0000
+++ config.tests/unix/iconv/iconv.pro
@@ -1,3 +1,3 @@
 SOURCES = iconv.cpp
 CONFIG -= qt dylib app_bundle
-mac|win32-g++*|qnx:LIBS += -liconv
+mac|win32-g++*|qnx|haiku:LIBS += -liconv
