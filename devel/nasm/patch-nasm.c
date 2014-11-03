$NetBSD$

--- nasm.c.orig	2014-02-20 00:04:04.000000000 +0000
+++ nasm.c
@@ -131,7 +131,7 @@ static struct preproc_ops *preproc;
 enum op_type {
     op_normal,                  /* Preprocess and assemble */
     op_preprocess,              /* Preprocess only */
-    op_depend,                  /* Generate dependencies */
+    op_depend                  /* Generate dependencies */
 };
 static enum op_type operating_mode;
 /* Dependency flags */
