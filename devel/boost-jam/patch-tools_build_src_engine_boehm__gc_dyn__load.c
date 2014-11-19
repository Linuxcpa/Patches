$NetBSD$

--- tools/build/src/engine/boehm_gc/dyn_load.c.orig	2014-06-19 17:15:38.000000000 +0000
+++ tools/build/src/engine/boehm_gc/dyn_load.c
@@ -64,7 +64,7 @@ static int (*GC_has_static_roots)(const 
     !defined(AIX) && !defined(SCO_ELF) && !defined(DGUX) && \
     !(defined(FREEBSD) && defined(__ELF__)) && \
     !(defined(NETBSD) && defined(__ELF__)) && !defined(HURD) && \
-    !defined(DARWIN) && !defined(CYGWIN32)
+    !defined(DARWIN) && !defined(CYGWIN32) && !defined(HAIKU)
  --> We only know how to find data segments of dynamic libraries for the
  --> above.  Additional SVR4 variants might not be too
  --> hard to add.
