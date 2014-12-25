$NetBSD$

--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/Platform.h.orig	2014-04-10 18:37:11.021233664 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/Platform.h
@@ -737,13 +737,26 @@
 #endif
 #endif
 
-#if PLATFORM(HAIKU)
+#if OS(HAIKU) 
+#define WTF_USE_HAIKU 1
+//#define WTF_USE_PTHREADS 1
+#define HAVE_ERRNO_H 1
+#define HAVE_LANGINFO_H 1
+#define HAVE_MMAP 1
+#define HAVE_MERGESORT 1
 #define HAVE_POSIX_MEMALIGN 1
-#define WTF_USE_CURL 1
-#define WTF_USE_PTHREADS 1
 #define HAVE_PTHREAD_RWLOCK 1
+#define HAVE_SIGNAL_H 1
+#define HAVE_STRINGS_H 1
+#define HAVE_SYS_PARAM_H 1
+#define HAVE_SYS_TIME_H 1
+#define HAVE_TIMEGM 1
+#define HAVE_TM_GMTOFF 1
+#define HAVE_TM_ZONE 1
+#define HAVE_SYS_TIME_H 1
 #define USE_SYSTEM_MALLOC 1
-#define ENABLE_NETSCAPE_PLUGIN_API 0
+#define ENABLE_INSPECTOR 1
+#define ENABLE_JAVASCRIPT_DEBUGGER 1
 #endif
 
 #if PLATFORM(BREWMP)
@@ -771,7 +784,7 @@
 #endif
 
 #if !OS(WINDOWS) && !OS(SOLARIS) && !OS(QNX) \
-    && !OS(SYMBIAN) && !OS(HAIKU) && !OS(RVCT) \
+    && !OS(SYMBIAN) && !OS(RVCT) \
     && !OS(ANDROID) && !PLATFORM(BREWMP)
 #define HAVE_TM_GMTOFF 1
 #define HAVE_TM_ZONE 1
@@ -860,10 +873,7 @@
 /* FIXME: is this actually used or do other platforms generate their own config.h? */
 
 #define HAVE_ERRNO_H 1
-/* As long as Haiku doesn't have a complete support of locale this will be disabled. */
-#if !OS(HAIKU)
 #define HAVE_LANGINFO_H 1
-#endif
 #define HAVE_MMAP 1
 #define HAVE_SBRK 1
 #define HAVE_STRINGS_H 1
