$NetBSD$

--- Modules/intrcheck.h.orig	2014-11-05 07:03:39.000000000 +0000
+++ Modules/intrcheck.h
@@ -0,0 +1,21 @@
+
+#ifndef Py_INTRCHECK_H
+#define Py_INTRCHECK_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_FUNC(int) PyOS_InterruptOccurred(void);
+PyAPI_FUNC(void) PyOS_InitInterrupts(void);
+PyAPI_FUNC(void) PyOS_AfterFork(void);
+PyAPI_FUNC(int) _PyOS_IsMainThread(void);
+
+#ifdef MS_WINDOWS
+/* windows.h is not included by Python.h so use void* instead of HANDLE */
+PyAPI_FUNC(void*) _PyOS_SigintEvent(void);
+#endif
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_INTRCHECK_H */
