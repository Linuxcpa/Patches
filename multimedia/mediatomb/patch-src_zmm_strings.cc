$NetBSD$

--- src/zmm/strings.cc.orig	2010-03-25 14:58:08.000000000 +0000
+++ src/zmm/strings.cc
@@ -29,6 +29,7 @@
 
 /// \file strings.cc
 
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
     #include "autoconfig.h"
 #endif
