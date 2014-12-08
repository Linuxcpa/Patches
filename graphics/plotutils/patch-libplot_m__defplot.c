$NetBSD$

--- libplot/m_defplot.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/m_defplot.c
@@ -20,7 +20,7 @@
    including both private data and public methods.  There is a one-to-one
    correspondence between public methods and user-callable functions in the
    C API. */
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 
