$NetBSD$

--- libplot/g_pagetype.c.orig	2008-07-16 00:54:09.000000000 +0000
+++ libplot/g_pagetype.c
@@ -23,7 +23,7 @@
 
    The PAGESIZE parameter should be of a form resembling "letter", or "a4",
    or "letter,xoffset=-1.2in", or "a4,yoffset=0.5cm,xoffset = 2mm". */
-
+#include <strings.h>
 #include "sys-defines.h"
 #include "extern.h"
 #include "g_pagetype.h"
