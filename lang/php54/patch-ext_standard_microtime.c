$NetBSD$

--- ext/standard/microtime.c.orig	2014-09-17 07:03:27.000000000 +0000
+++ ext/standard/microtime.c
@@ -131,7 +131,7 @@ PHP_FUNCTION(getrusage)
 	array_init(return_value);
 #define PHP_RUSAGE_PARA(a) \
 		add_assoc_long(return_value, #a, usg.a)
-#if !defined( _OSD_POSIX) && !defined(__BEOS__) /* BS2000 has only a few fields in the rusage struct */
+#if !defined( _OSD_POSIX) && !defined(__BEOS__) & !defined(__HAIKU__)/* BS2000 has only a few fields in the rusage struct */
 	PHP_RUSAGE_PARA(ru_oublock);
 	PHP_RUSAGE_PARA(ru_inblock);
 	PHP_RUSAGE_PARA(ru_msgsnd);
