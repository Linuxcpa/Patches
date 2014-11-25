$NetBSD$

--- ext/nkf/nkf-utf8/nkf.h.orig	2012-12-05 04:08:17.000000000 +0000
+++ ext/nkf/nkf-utf8/nkf.h
@@ -149,6 +149,11 @@ void  setbinmode(FILE *fp)
 # ifndef HAVE_LOCALE_H
 #  define HAVE_LOCALE_H
 # endif
+#elif defined(__HAIKU__)
+# undef HAVE_LANGINFO_H
+# ifndef HAVE_LOCALE_H
+#  define HAVE_LOCALE_H
+# endif
 #elif defined(MSDOS)
 # ifndef HAVE_LOCALE_H
 #  define HAVE_LOCALE_H
