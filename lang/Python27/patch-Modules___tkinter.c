$NetBSD$

--- Modules/_tkinter.c.orig	2014-05-31 18:58:40.000000000 +0000
+++ Modules/_tkinter.c
@@ -67,8 +67,8 @@ Copyright (C) 1994 Steen Lumholt.
 #include <Tcl/tcl.h>
 #include <Tk/tk.h>
 #else
-#include <tcl.h>
-#include <tk.h>
+#include "tcl.h"
+#include "tk.h"
 #endif
 
 #include "tkinter.h"
