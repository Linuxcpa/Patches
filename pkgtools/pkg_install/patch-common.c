$NetBSD$

--- common.c.orig	2014-11-21 08:34:16.000000000 +0000
+++ common.c
@@ -2,3 +2,3 @@
 /*-
- * Copyright (c) 1998-2004 Dag-Erling Coïdan Smørgrav
+ * Copyright (c) 1998-2004 Dag-Erling Codan Smrgrav
  * Copyright (c) 2008, 2010 Joerg Sonnenberger <joerg@NetBSD.org>
@@ -31,3 +31,3 @@
  */
-
+#include <strings.h>
 #if HAVE_CONFIG_H
