$NetBSD$

--- Modules/posixmodule.c.orig	2014-05-19 05:19:39.061341696 +0000
+++ Modules/posixmodule.c
@@ -11994,9 +11994,6 @@ all_ins(PyObject *m)
     if (PyModule_AddIntMacro(m, SCHED_OTHER)) return -1;
     if (PyModule_AddIntMacro(m, SCHED_FIFO)) return -1;
     if (PyModule_AddIntMacro(m, SCHED_RR)) return -1;
-#ifdef SCHED_SPORADIC
-    if (PyModule_AddIntMacro(m, SCHED_SPORADIC) return -1;
-#endif
 #ifdef SCHED_BATCH
     if (PyModule_AddIntMacro(m, SCHED_BATCH)) return -1;
 #endif
