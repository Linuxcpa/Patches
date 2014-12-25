$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_wtf_ThreadSafeRefCounted.h,v 1.1 2013/05/09 14:07:08 joerg Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/ThreadSafeRefCounted.h.orig	2014-04-10 18:37:11.020447232 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/ThreadSafeRefCounted.h
@@ -96,7 +96,7 @@ public:
 #if !USE(LOCKFREE_THREADSAFEREFCOUNTED)
         MutexLocker locker(m_mutex);
 #endif
-        return static_cast<int const volatile &>(m_refCount);
+        return m_refCount;
     }
 
 protected:
@@ -126,7 +126,7 @@ private:
     template<class T>
     friend class CrossThreadRefCounted;
 
-    int m_refCount;
+    atomic_int m_refCount;
 #if !USE(LOCKFREE_THREADSAFEREFCOUNTED)
     mutable Mutex m_mutex;
 #endif
