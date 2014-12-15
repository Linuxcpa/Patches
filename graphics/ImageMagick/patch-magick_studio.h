$NetBSD$

--- magick/studio.h.orig	2013-11-18 13:03:16.002621440 +0000
+++ magick/studio.h
@@ -115,7 +115,6 @@ extern "C" {
 #include <assert.h>
 
 #if defined(MAGICKCORE_HAVE_XLOCALE_H)
-# include <xlocale.h>
 #endif
 #if defined(MAGICKCORE_THREAD_SUPPORT)
 # include <pthread.h>
