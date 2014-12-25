$NetBSD: patch-src_3rdparty_javascriptcore_JavaScriptCore_runtime_Collector.cpp,v 1.1 2013/09/21 09:40:36 joerg Exp $

--- src/3rdparty/javascriptcore/JavaScriptCore/runtime/Collector.cpp.orig	2014-04-10 18:37:12.065011712 +0000
+++ src/3rdparty/javascriptcore/JavaScriptCore/runtime/Collector.cpp
@@ -793,10 +793,8 @@ void Heap::markConservatively(MarkStack&
 
 void NEVER_INLINE Heap::markCurrentThreadConservativelyInternal(MarkStack& markStack)
 {
-    void* dummy;
-    void* stackPointer = &dummy;
     void* stackBase = currentThreadStackBase();
-    markConservatively(markStack, stackPointer, stackBase);
+    markConservatively(markStack, __builtin_frame_address(0), stackBase);
 }
 
 #if COMPILER(GCC)
