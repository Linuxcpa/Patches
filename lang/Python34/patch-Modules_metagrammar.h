$NetBSD$

--- Modules/metagrammar.h.orig	2014-11-05 07:02:31.000000000 +0000
+++ Modules/metagrammar.h
@@ -0,0 +1,18 @@
+#ifndef Py_METAGRAMMAR_H
+#define Py_METAGRAMMAR_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+
+#define MSTART 256
+#define RULE 257
+#define RHS 258
+#define ALT 259
+#define ITEM 260
+#define ATOM 261
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_METAGRAMMAR_H */
