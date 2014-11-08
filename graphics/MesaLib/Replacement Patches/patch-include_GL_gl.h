$NetBSD: patch-include_GL_gl.h,v 1.1 2013/06/13 14:16:21 wiz Exp $

Check for symbol existence with #ifdef, not #if.
Needed since some other files only #define the symbol without a value.

--- include/GL/gl.h.orig	2011-11-23 01:09:52.055836672 +0000
+++ include/GL/gl.h
@@ -67,7 +67,8 @@
 #elif defined(__CYGWIN__) && defined(USE_OPENGL32) /* use native windows opengl32 */
 #  define GLAPI extern
 #  define GLAPIENTRY __stdcall
-#elif (defined(__GNUC__) && __GNUC__ >= 4) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590))
+#elif (defined(__GNUC__) && ((__GNUC__ * 100 + __GNUC_MINOR__) >= 303) && \
+   defined(__ELF__)) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590))
 #  define GLAPI __attribute__((visibility("default")))
 #  define GLAPIENTRY
 #endif /* WIN32 && !CYGWIN */
@@ -2094,7 +2095,7 @@ typedef void (APIENTRYP PFNGLMULTITEXCOO
 
 
 
-#if GL_ARB_shader_objects
+#ifdef GL_ARB_shader_objects
 
 #ifndef GL_MESA_shader_debug
 #define GL_MESA_shader_debug 1
