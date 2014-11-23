$NetBSD$

--- src/tests/htmlparser_cpp_test.cc.orig	2012-04-18 21:49:56.000000000 +0000
+++ src/tests/htmlparser_cpp_test.cc
@@ -66,7 +66,7 @@
 // reset_mode: Similar to reset but receives an argument that changes the
 //             parser mode into either mode html or mode js.
 // insert_text: Executes HtmlParser::InsertText() if the argument is true.
-
+#include <strings.h>
 #include "config_for_unittests.h"
 #include <stdlib.h>
 #include <stdio.h>
