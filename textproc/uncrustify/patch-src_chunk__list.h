$NetBSD$

--- src/chunk_list.h.orig	2012-12-30 05:34:00.000000000 +0000
+++ src/chunk_list.h
@@ -10,7 +10,7 @@
 
 #include "uncrustify_types.h"
 #include "char_table.h"
-
+#include <strings.h>
 
 /**
  * Specifies how to handle proprocessors.
