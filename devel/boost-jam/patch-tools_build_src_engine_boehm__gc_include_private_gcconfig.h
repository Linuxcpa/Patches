$NetBSD$

--- tools/build/src/engine/boehm_gc/include/private/gcconfig.h.orig	2014-06-19 17:15:38.000000000 +0000
+++ tools/build/src/engine/boehm_gc/include/private/gcconfig.h
@@ -215,6 +215,11 @@
 #    define BEOS
 #    define mach_type_known
 # endif
+# if defined(__HAIKU__) && defined(_X86_)
+#    define I386
+#    define HAIKU
+#    define mach_type_known
+# endif
 # if defined(LINUX) && (defined(i386) || defined(__i386__))
 #    define I386
 #    define mach_type_known
@@ -1014,6 +1019,13 @@
       extern int etext[];
 #     define DATASTART ((ptr_t)((((word) (etext)) + 0xfff) & ~0xfff))
 #   endif
+#ifdef HAIKU
+#     define OS_TYPE "HAIKU"
+#     include <OS.h>
+#     define GETPAGESIZE() B_PAGE_SIZE
+      extern int etext[];
+#     define DATASTART ((ptr_t)((((word) (etext)) + 0xfff) & ~0xfff))
+#   endif
 #   ifdef SOLARIS
 #	define OS_TYPE "SOLARIS"
         extern int _etext[], _end[];
