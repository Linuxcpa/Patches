$NetBSD$

--- xmltooling/util/TemplateEngine.cpp.orig	2012-07-23 17:29:51.000000000 +0000
+++ xmltooling/util/TemplateEngine.cpp
@@ -23,7 +23,7 @@
  *
  * Simple template replacement engine.
  */
-
+#include <strings.h>
 #include "internal.h"
 #include "io/GenericRequest.h"
 #include "util/TemplateEngine.h"
