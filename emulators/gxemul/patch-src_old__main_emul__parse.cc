$NetBSD$

--- src/old_main/emul_parse.cc.orig	2010-02-14 09:33:52.000000000 +0000
+++ src/old_main/emul_parse.cc
@@ -29,7 +29,7 @@
  *
  *  TODO: REWRITE THIS FROM SCRATCH! :-)
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
