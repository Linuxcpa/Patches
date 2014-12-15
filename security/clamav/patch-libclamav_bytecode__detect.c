$NetBSD$

--- libclamav/bytecode_detect.c.orig	2014-05-21 15:25:05.058720256 +0000
+++ libclamav/bytecode_detect.c
@@ -212,6 +212,8 @@ void cli_detect_environment(struct cli_e
     env->os_category = os_aix;
 #elif defined(C_BEOS)
     env->os_category = os_beos;
+#elif defined(C_HAIKU)
+    env->os_category = os_haiku;
     /* DARWIN must come before BSD since it defines both */
 #elif defined(C_DARWIN)
     env->os_category = os_darwin;
@@ -241,7 +243,7 @@ void cli_detect_environment(struct cli_e
     env->os_category = os_win64;
 #elif defined(_WIN32)
     env->os_category = os_win32;
-#else
+#elif defined(C_GENERIC)
     env->os_category = os_generic;
 #endif
 
