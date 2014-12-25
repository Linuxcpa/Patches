$NetBSD$

--- gcc/ginclude/stdarg.h.orig	2013-01-10 20:38:27.000000000 +0000
+++ gcc/ginclude/stdarg.h
@@ -93,7 +93,7 @@ typedef __gnuc_va_list va_list;
 #ifndef _VA_LIST
 /* The macro _VA_LIST_T_H is used in the Bull dpx2  */
 #ifndef _VA_LIST_T_H
-/* The macro __va_list__ is used by BeOS.  */
+/* The macro __va_list__ is used by BeOS and Haiku.  */
 #ifndef __va_list__
 typedef __gnuc_va_list va_list;
 #endif /* not __va_list__ */
