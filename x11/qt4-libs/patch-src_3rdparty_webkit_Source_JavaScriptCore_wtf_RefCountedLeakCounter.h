$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_wtf_RefCountedLeakCounter.h,v 1.1 2013/05/09 14:07:08 joerg Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/RefCountedLeakCounter.h.orig	2014-04-10 18:37:11.003932160 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/RefCountedLeakCounter.h
@@ -38,7 +38,7 @@ namespace WTF {
 
 #ifndef NDEBUG
     private:
-        volatile int m_count;
+        atomic_int m_count;
         const char* m_description;
 #endif
     };
