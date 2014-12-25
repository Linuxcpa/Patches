$NetBSD$

--- gcc/defaults.h.orig	2013-01-10 20:38:27.001048576 +0000
+++ gcc/defaults.h
@@ -382,9 +382,13 @@ see the files COPYING3 and COPYING.RUNTI
    at program start-up time.  */
 #if defined (TARGET_ASM_NAMED_SECTION) && SUPPORTS_WEAK
 #ifndef JCR_SECTION_NAME
+/* Hack to remove _Jv crap on BeOS. i know it should be made somehow through
+	config files, but i don't know how (in which file ;) */
+#if !defined(__BEOS__) && !defined(__HAIKU__)
 #define JCR_SECTION_NAME ".jcr"
 #endif
 #endif
+#endif
 
 /* This decision to use a .jcr section can be overridden by defining
    USE_JCR_SECTION to 0 in target file.  This is necessary if target
