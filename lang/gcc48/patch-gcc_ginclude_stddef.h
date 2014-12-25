$NetBSD$

--- gcc/ginclude/stddef.h.orig	2013-01-10 20:38:27.066846720 +0000
+++ gcc/ginclude/stddef.h
@@ -164,7 +164,7 @@ typedef __PTRDIFF_TYPE__ ptrdiff_t;
 /* Define this type if we are doing the whole job,
    or if we want this type in particular.  */
 #if defined (_STDDEF_H) || defined (__need_size_t)
-#ifndef __size_t__	/* BeOS */
+#ifndef __size_t__	/* BeOS, Haiku */
 #ifndef __SIZE_T__	/* Cray Unicos/Mk */
 #ifndef _SIZE_T	/* in case <sys/types.h> has defined it. */
 #ifndef _SYS_SIZE_T_H
@@ -181,7 +181,7 @@ typedef __PTRDIFF_TYPE__ ptrdiff_t;
 #ifndef _GCC_SIZE_T
 #ifndef _SIZET_
 #ifndef __size_t
-#define __size_t__	/* BeOS */
+#define __size_t__	/* BeOS, Haiku */
 #define __SIZE_T__	/* Cray Unicos/Mk */
 #define _SIZE_T
 #define _SYS_SIZE_T_H
@@ -210,7 +210,7 @@ typedef __PTRDIFF_TYPE__ ptrdiff_t;
 #endif
 #if !(defined (__GNUG__) && defined (size_t))
 typedef __SIZE_TYPE__ size_t;
-#ifdef __BEOS__
+#if defined(__BEOS__)
 typedef long ssize_t;
 #endif /* __BEOS__ */
 #endif /* !(defined (__GNUG__) && defined (size_t)) */
@@ -243,7 +243,7 @@ typedef long ssize_t;
 /* Define this type if we are doing the whole job,
    or if we want this type in particular.  */
 #if defined (_STDDEF_H) || defined (__need_wchar_t)
-#ifndef __wchar_t__	/* BeOS */
+#ifndef __wchar_t__	/* BeOS, Haiku */
 #ifndef __WCHAR_T__	/* Cray Unicos/Mk */
 #ifndef _WCHAR_T
 #ifndef _T_WCHAR_
@@ -260,7 +260,7 @@ typedef long ssize_t;
 #ifndef ___int_wchar_t_h
 #ifndef __INT_WCHAR_T_H
 #ifndef _GCC_WCHAR_T
-#define __wchar_t__	/* BeOS */
+#define __wchar_t__	/* BeOS, Haiku */
 #define __WCHAR_T__	/* Cray Unicos/Mk */
 #define _WCHAR_T
 #define _T_WCHAR_
