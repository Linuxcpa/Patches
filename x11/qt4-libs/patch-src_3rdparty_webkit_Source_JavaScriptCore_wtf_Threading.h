$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_wtf_Threading.h,v 1.2 2013/05/09 14:07:08 joerg Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/Threading.h.orig	2014-04-10 18:37:11.014680064 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/Threading.h
@@ -113,6 +113,8 @@ using WTF::createThread;
 using WTF::currentThread;
 using WTF::detachThread;
 using WTF::waitForThreadCompletion;
+#if !OS(SOLARIS)
 using WTF::yield;
+#endif
 
 #endif // Threading_h
