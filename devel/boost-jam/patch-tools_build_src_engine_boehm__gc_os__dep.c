$NetBSD$

--- tools/build/src/engine/boehm_gc/os_dep.c.orig	2014-06-19 17:15:38.000000000 +0000
+++ tools/build/src/engine/boehm_gc/os_dep.c
@@ -776,6 +776,14 @@ ptr_t GC_get_main_stack_base(void){
 }
 # endif /* BEOS */
 
+# ifdef HAIKU
+# include <OS.h>
+ptr_t GC_get_main_stack_base(void){
+	thread_info th;
+	get_thread_info(find_thread(NULL),&th);
+	return th.stack_end;
+}
+# endif /* HAIKU */
 
 # ifdef OS2
 
@@ -1095,7 +1103,7 @@ ptr_t GC_get_main_stack_base(void)
 
 #endif /* FREEBSD_STACKBOTTOM */
 
-#if !defined(BEOS) && !defined(AMIGA) && !defined(MSWIN32) \
+#if !defined(BEOS) && !defined(HAIKU) && !defined(AMIGA) && !defined(MSWIN32) \
     && !defined(MSWINCE) && !defined(OS2) && !defined(NOSYS) && !defined(ECOS) \
     && !defined(CYGWIN32)
 
