$NetBSD$

--- Modules/namespaceobject.h.orig	2014-11-16 03:15:08.420478976 +0000
+++ Modules/namespaceobject.h
@@ -0,0 +1,17 @@
+
+/* simple namespace object interface */
+
+#ifndef NAMESPACEOBJECT_H
+#define NAMESPACEOBJECT_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_DATA(PyTypeObject) _PyNamespace_Type;
+
+PyAPI_FUNC(PyObject *) _PyNamespace_New(PyObject *kwds);
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !NAMESPACEOBJECT_H */
