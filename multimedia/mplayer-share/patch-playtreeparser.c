$NetBSD$

--- playtreeparser.c.orig	2011-10-20 11:15:30.000000000 +0000
+++ playtreeparser.c
@@ -18,7 +18,7 @@
 
 /// \file
 /// \ingroup PlaytreeParser
-
+#include <strings.h>
 #include "config.h"
 #include <stdlib.h>
 #include <stdio.h>
