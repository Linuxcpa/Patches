$NetBSD$

--- Modules/pgen.h.orig	2014-11-05 07:00:29.000000000 +0000
+++ Modules/pgen.h
@@ -0,0 +1,18 @@
+#ifndef Py_PGEN_H
+#define Py_PGEN_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+
+/* Parser generator interface */
+
+extern grammar *meta_grammar(void);
+
+struct _node;
+extern grammar *pgen(struct _node *);
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_PGEN_H */
