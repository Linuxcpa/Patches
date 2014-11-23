$NetBSD$

--- Modules/eval.h.orig	2014-11-16 03:15:04.543162368 +0000
+++ Modules/eval.h
@@ -0,0 +1,27 @@
+
+/* Interface to execute compiled code */
+
+#ifndef Py_EVAL_H
+#define Py_EVAL_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_FUNC(PyObject *) PyEval_EvalCode(PyObject *, PyObject *, PyObject *);
+
+PyAPI_FUNC(PyObject *) PyEval_EvalCodeEx(PyObject *co,
+					PyObject *globals,
+					PyObject *locals,
+					PyObject **args, int argc,
+					PyObject **kwds, int kwdc,
+					PyObject **defs, int defc,
+					PyObject *kwdefs, PyObject *closure);
+
+#ifndef Py_LIMITED_API
+PyAPI_FUNC(PyObject *) _PyEval_CallTracing(PyObject *func, PyObject *args);
+#endif
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_EVAL_H */
