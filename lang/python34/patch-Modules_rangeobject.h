$NetBSD$

--- Modules/rangeobject.h.orig	2014-11-16 03:15:14.989593600 +0000
+++ Modules/rangeobject.h
@@ -0,0 +1,27 @@
+
+/* Range object interface */
+
+#ifndef Py_RANGEOBJECT_H
+#define Py_RANGEOBJECT_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+/*
+A range object represents an integer range.  This is an immutable object;
+a range cannot change its value after creation.
+
+Range objects behave like the corresponding tuple objects except that
+they are represented by a start, stop, and step datamembers.
+*/
+
+PyAPI_DATA(PyTypeObject) PyRange_Type;
+PyAPI_DATA(PyTypeObject) PyRangeIter_Type;
+PyAPI_DATA(PyTypeObject) PyLongRangeIter_Type;
+
+#define PyRange_Check(op) (Py_TYPE(op) == &PyRange_Type)
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_RANGEOBJECT_H */
