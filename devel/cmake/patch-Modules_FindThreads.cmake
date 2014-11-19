$NetBSD$

--- Modules/FindThreads.cmake.orig	2014-01-16 17:15:08.000000000 +0000
+++ Modules/FindThreads.cmake
@@ -130,6 +130,11 @@ if(CMAKE_SYSTEM MATCHES "Windows")
   set(Threads_FOUND TRUE)
 endif()
 
+IF(HAIKU)
+  SET (CMAKE_THREAD_LIBS_INIT "-lroot")
+  SET(Threads_FOUND TRUE)
+ENDIF(HAIKU)
+
 if(CMAKE_USE_PTHREADS_INIT)
   if(CMAKE_SYSTEM MATCHES "HP-UX-*")
     # Use libcma if it exists and can be used.  It provides more
