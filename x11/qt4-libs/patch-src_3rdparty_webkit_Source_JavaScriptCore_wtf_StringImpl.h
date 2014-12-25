$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_wtf_StringImpl.h,v 1.1 2012/07/25 11:40:50 fhajny Exp $

Fix for GCC 4.7.
--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/text/StringImpl.h.orig	2014-04-10 18:37:11.016515072 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/text/StringImpl.h
@@ -24,6 +24,7 @@
 #define StringImpl_h
 
 #include <limits.h>
+#include <unistd.h>
 #include <wtf/ASCIICType.h>
 #include <wtf/CrossThreadRefCounted.h>
 #include <wtf/Forward.h>
