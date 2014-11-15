$NetBSD$

--- Modules/pystrcmp.h.orig	2014-11-14 22:11:25.105381888 +0000
+++ Modules/pystrcmp.h
@@ -0,0 +1,23 @@
+#ifndef Py_STRCMP_H
+#define Py_STRCMP_H
+
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_FUNC(int) PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
+PyAPI_FUNC(int) PyOS_mystricmp(const char *, const char *);
+
+#ifdef MS_WINDOWS
+#define PyOS_strnicmp strnicmp
+#define PyOS_stricmp stricmp
+#else
+#define PyOS_strnicmp PyOS_mystrnicmp
+#define PyOS_stricmp PyOS_mystricmp
+#endif
+
+#ifdef __cplusplus
+}
+#endif
+
+#endif /* !Py_STRCMP_H */
