$NetBSD$

--- xrandr.c.orig	2014-08-02 05:46:28.000000000 +0000
+++ xrandr.c
@@ -26,7 +26,7 @@
  * and part of the server code for randr.
  */
 
-#include <stdio.h>
+#include "stdio.h"
 #include <X11/Xlib.h>
 #include <X11/Xlibint.h>
 #include <X11/Xproto.h>
