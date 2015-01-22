$NetBSD$

--- Modules/tkappinit.c.orig	2014-05-31 18:58:40.000000000 +0000
+++ Modules/tkappinit.c
@@ -13,8 +13,8 @@
  */
 
 #include <string.h>
-#include <tcl.h>
-#include <tk.h>
+#include "tcl.h"
+#include "tk.h"
 
 #include "tkinter.h"
 
