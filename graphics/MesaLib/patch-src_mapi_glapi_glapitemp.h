$NetBSD$

--- src/mapi/glapi/glapitemp.h.orig	2011-10-15 00:43:58.013631488 +0000
+++ src/mapi/glapi/glapitemp.h
@@ -27,7 +27,7 @@
  */
 
 
-#  if (defined(__GNUC__) && !defined(__CYGWIN__) && !defined(__MINGW32__)) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590) && defined(__ELF__))
+#  if (defined(__GNUC__) && !defined(__CYGWIN__) && !defined(__MINGW32__)) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590) && defined(__ELF__)&& defined(__HAIKU__))
 #    define HIDDEN  __attribute__((visibility("hidden")))
 #  else
 #    define HIDDEN
