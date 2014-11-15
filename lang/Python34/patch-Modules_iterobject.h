$NetBSD$

--- Modules/iterobject.h.orig	2014-11-14 22:11:07.921174016 +0000
+++ Modules/iterobject.h
@@ -0,0 +1,25 @@
+#ifndef Py_ITEROBJECT_H
+#define Py_ITEROBJECT_H
+/* Iterators (the basic kind, over a sequence) */
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_DATA(PyTypeObject) PySeqIter_Type;
+PyAPI_DATA(PyTypeObject) PyCallIter_Type;
+PyAPI_DATA(PyTypeObject) PyCmpWrapper_Type;
+
+#define PySeqIter_Check(op) (Py_TYPE(op) == &PySeqIter_Type)
+
+PyAPI_FUNC(PyObject *) PySeqIter_New(PyObject *);
+
+
+#define PyCallIter_Check(op) (Py_TYPE(op) == &PyCallIter_Type)
+
+PyAPI_FUNC(PyObject *) PyCallIter_New(PyObject *, PyObject *);
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_ITEROBJECT_H */
+
