$NetBSD$

--- Modules/socketmodule.c.orig	2014-05-19 05:19:39.007864320 +0000
+++ Modules/socketmodule.c
@@ -6087,7 +6087,9 @@ PyInit__socket(void)
     PyModule_AddIntMacro(m, SOCK_DGRAM);
 /* We have incomplete socket support. */
     PyModule_AddIntMacro(m, SOCK_RAW);
-    PyModule_AddIntMacro(m, SOCK_SEQPACKET);
+#ifndef __HAIKU__
+    PyModule_AddIntConstant(m, SOCK_SEQPACKET);
+#endif
 #if defined(SOCK_RDM)
     PyModule_AddIntMacro(m, SOCK_RDM);
 #endif
