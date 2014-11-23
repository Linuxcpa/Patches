$NetBSD$

--- src/template.cc.orig	2012-04-18 21:49:56.000000000 +0000
+++ src/template.cc
@@ -29,6 +29,7 @@
 
 // ---
 
+#include <strings.h>
 #include <config.h>
 #include "base/mutex.h"     // This must go first so we get _XOPEN_SOURCE
 #include <ctemplate/template.h>
