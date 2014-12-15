$NetBSD$

--- wand/studio.h.orig	2014-01-14 20:41:22.041418752 +0000
+++ wand/studio.h
@@ -119,9 +119,7 @@ extern "C" {
 #include <signal.h>
 #include <assert.h>
 
-#if defined(MAGICKCORE_HAVE_XLOCALE_H)
-# include <xlocale.h>
-#endif
+
 #if defined(MAGICKCORE_THREAD_SUPPORT)
 # include <pthread.h>
 #elif defined(MAGICKWAND_WINDOWS_SUPPORT)
