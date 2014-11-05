$NetBSD$

--- Modules/dtoa.h.orig	2014-11-05 06:43:38.000000000 +0000
+++ Modules/dtoa.h
@@ -0,0 +1,19 @@
+#ifndef Py_LIMITED_API
+#ifndef PY_NO_SHORT_FLOAT_REPR
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_FUNC(double) _Py_dg_strtod(const char *str, char **ptr);
+PyAPI_FUNC(char *) _Py_dg_dtoa(double d, int mode, int ndigits,
+                        int *decpt, int *sign, char **rve);
+PyAPI_FUNC(void) _Py_dg_freedtoa(char *s);
+PyAPI_FUNC(double) _Py_dg_stdnan(int sign);
+PyAPI_FUNC(double) _Py_dg_infinity(int sign);
+
+
+#ifdef __cplusplus
+}
+#endif
+#endif
+#endif
