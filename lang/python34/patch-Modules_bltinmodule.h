$NetBSD$

--- Modules/bltinmodule.h.orig	2014-11-16 03:15:01.204210176 +0000
+++ Modules/bltinmodule.h
@@ -0,0 +1,14 @@
+#ifndef Py_BLTINMODULE_H
+#define Py_BLTINMODULE_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_DATA(PyTypeObject) PyFilter_Type;
+PyAPI_DATA(PyTypeObject) PyMap_Type;
+PyAPI_DATA(PyTypeObject) PyZip_Type;
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_BLTINMODULE_H */
