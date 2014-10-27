$NetBSD$

--- haikuish.h.orig	2014-10-25 19:11:04.084410368 +0000
+++ haikuish.h
@@ -0,0 +1,11 @@
+#ifndef PERL_HAIKU_HAIKUISH_H
+#define PERL_HAIKU_HAIKUISH_H
+
+#include "unixish.h"
+
+/* We need <sys/wait.h> or else the W* macros aren't defined in perl.h. */
+
+#include <sys/wait.h>
+
+#endif
+
