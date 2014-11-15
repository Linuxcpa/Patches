$NetBSD$

--- Modules/ast.h.orig	2014-11-14 22:10:48.605290496 +0000
+++ Modules/ast.h
@@ -0,0 +1,22 @@
+#ifndef Py_AST_H
+#define Py_AST_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+PyAPI_FUNC(int) PyAST_Validate(mod_ty);
+PyAPI_FUNC(mod_ty) PyAST_FromNode(
+    const node *n,
+    PyCompilerFlags *flags,
+    const char *filename,       /* decoded from the filesystem encoding */
+    PyArena *arena);
+PyAPI_FUNC(mod_ty) PyAST_FromNodeObject(
+    const node *n,
+    PyCompilerFlags *flags,
+    PyObject *filename,
+    PyArena *arena);
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_AST_H */
