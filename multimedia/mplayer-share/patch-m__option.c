$NetBSD$

--- m_option.c.orig	2012-05-08 10:56:22.000000000 +0000
+++ m_option.c
@@ -18,7 +18,7 @@
 
 /// \file
 /// \ingroup Options
-
+#include <strings.h>
 #include "config.h"
 
 #include <stdlib.h>
