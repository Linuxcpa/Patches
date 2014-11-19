$NetBSD$

--- tools/build/src/engine/boehm_gc/include/gc.h.orig	2014-11-18 01:39:05.051642368 +0000
+++ tools/build/src/engine/boehm_gc/include/gc.h
@@ -494,7 +494,7 @@ GC_API void * GC_malloc_atomic_ignore_of
 /* of compilers.							*/
 /* This may also be desirable if it is possible but expensive to	*/
 /* retrieve the call chain.						*/
-#if (defined(__linux__) || defined(__NetBSD__) || defined(__OpenBSD__) \
+#if (defined(__linux__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__HAIKU__) \
      || defined(__FreeBSD__) || defined(__DragonFly__)) & !defined(GC_CAN_SAVE_CALL_STACKS)
 # define GC_ADD_CALLER
 # if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95) 
