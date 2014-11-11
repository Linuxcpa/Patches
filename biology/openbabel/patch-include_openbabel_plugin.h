$NetBSD$

--- include/openbabel/plugin.h.orig	2010-10-26 14:39:01.000000000 +0000
+++ include/openbabel/plugin.h
@@ -18,7 +18,7 @@ General Public License for more details.
 
 #ifndef OB_PLUGIN_H
 #define OB_PLUGIN_H
-
+#include <strings.h>
 #include <openbabel/babelconfig.h>
 #include <string>
 #include <iostream>
