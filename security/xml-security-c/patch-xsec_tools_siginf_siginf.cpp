$NetBSD$

--- xsec/tools/siginf/siginf.cpp.orig	2012-07-23 16:56:10.000000000 +0000
+++ xsec/tools/siginf/siginf.cpp
@@ -29,7 +29,7 @@
  */
 
 // XSEC
-
+#include <strings.h>
 #include <xsec/utils/XSECPlatformUtils.hpp>
 #include <xsec/framework/XSECProvider.hpp>
 #include <xsec/canon/XSECC14n20010315.hpp>
@@ -399,7 +399,7 @@ int evaluate(int argc, char ** argv) {
 
 	while (paramCount < argc - 1) {
 
-		if (_stricmp(argv[paramCount], "--skiprefs") == 0 || _stricmp(argv[paramCount], "-s") == 0) {
+		if (strcasecmp(argv[paramCount], "--skiprefs") == 0 || strcasecmp(argv[paramCount], "-s") == 0) {
 			skipRefs = true;
 			paramCount++;
 		}
