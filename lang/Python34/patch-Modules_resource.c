$NetBSD$

--- Modules/resource.c.orig	2014-05-19 05:19:39.063963136 +0000
+++ Modules/resource.c
@@ -83,6 +83,7 @@ resource_getrusage(PyObject *self, PyObj
                     PyFloat_FromDouble(doubletime(ru.ru_utime)));
     PyStructSequence_SET_ITEM(result, 1,
                     PyFloat_FromDouble(doubletime(ru.ru_stime)));
+#ifndef __HAIKU__
     PyStructSequence_SET_ITEM(result, 2, PyLong_FromLong(ru.ru_maxrss));
     PyStructSequence_SET_ITEM(result, 3, PyLong_FromLong(ru.ru_ixrss));
     PyStructSequence_SET_ITEM(result, 4, PyLong_FromLong(ru.ru_idrss));
@@ -97,7 +98,7 @@ resource_getrusage(PyObject *self, PyObj
     PyStructSequence_SET_ITEM(result, 13, PyLong_FromLong(ru.ru_nsignals));
     PyStructSequence_SET_ITEM(result, 14, PyLong_FromLong(ru.ru_nvcsw));
     PyStructSequence_SET_ITEM(result, 15, PyLong_FromLong(ru.ru_nivcsw));
-
+#endif
     if (PyErr_Occurred()) {
         Py_DECREF(result);
         return NULL;
