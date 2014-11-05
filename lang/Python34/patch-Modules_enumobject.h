$NetBSD$

--- Modules/enumobject.h.orig	2014-11-05 06:43:58.000000000 +0000
+++ Modules/enumobject.h
@@ -0,0 +1,17 @@
+#ifndef Py_ENUMOBJECT_H
+#define Py_ENUMOBJECT_H
+
+/* Enumerate Object */
+
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_DATA(PyTypeObject) PyEnum_Type;
+PyAPI_DATA(PyTypeObject) PyReversed_Type;
+
+#ifdef __cplusplus
+}
+#endif
+
+#endif /* !Py_ENUMOBJECT_H */
