$NetBSD$

--- m_config.c.orig	2011-06-06 14:55:06.000000000 +0000
+++ m_config.c
@@ -18,7 +18,7 @@
 
 /// \file
 /// \ingroup Config
-
+#include <strings.h>
 #include "config.h"
 
 #include <stdlib.h>
