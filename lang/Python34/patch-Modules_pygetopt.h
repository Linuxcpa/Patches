$NetBSD$

--- Modules/pygetopt.h.orig	2014-11-14 22:11:21.922484736 +0000
+++ Modules/pygetopt.h
@@ -0,0 +1,21 @@
+
+#ifndef Py_PYGETOPT_H
+#define Py_PYGETOPT_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+#ifndef Py_LIMITED_API
+PyAPI_DATA(int) _PyOS_opterr;
+PyAPI_DATA(int) _PyOS_optind;
+PyAPI_DATA(wchar_t *) _PyOS_optarg;
+
+PyAPI_FUNC(void) _PyOS_ResetGetOpt(void);
+#endif
+
+PyAPI_FUNC(int) _PyOS_GetOpt(int argc, wchar_t **argv, wchar_t *optstring);
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_PYGETOPT_H */
