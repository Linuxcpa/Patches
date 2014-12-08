$NetBSD$

--- libplot/y_defplot.c.orig	2008-07-16 00:54:10.000000000 +0000
+++ libplot/y_defplot.c
@@ -20,7 +20,7 @@
    both private data and public methods.  There is a one-to-one
    correspondence between public methods and user-callable functions in the
    C API. */
-
+#include <strings.h>	
 #include "sys-defines.h"
 #include <signal.h>		/* for kill() */
 #include "extern.h"
