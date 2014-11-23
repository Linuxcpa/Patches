$NetBSD$

--- src/template_modifiers.cc.orig	2012-04-18 21:49:56.000000000 +0000
+++ src/template_modifiers.cc
@@ -45,6 +45,7 @@
 // the list of Safe XSS Alternatives.
 //
 
+#include <strings.h>
 #include <config.h>
 #include <stdlib.h>
 #include <assert.h>
