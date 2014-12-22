$NetBSD$

--- xsec/tools/txfmout/txfmout.cpp.orig	2012-07-23 16:56:10.000000000 +0000
+++ xsec/tools/txfmout/txfmout.cpp
@@ -30,7 +30,7 @@
  */
 
 // XSEC
-
+#include <strings.h>
 #include <xsec/utils/XSECPlatformUtils.hpp>
 #include <xsec/framework/XSECProvider.hpp>
 #include <xsec/canon/XSECC14n20010315.hpp>
@@ -375,21 +375,21 @@ int main(int argc, char **argv) {
 
 	while (paramCount < argc - 1) {
 
-		if (_stricmp(argv[paramCount], "--signedinfo") == 0 || _stricmp(argv[paramCount], "-s") == 0) {
+		if (strcasecmp(argv[paramCount], "--signedinfo") == 0 || strcasecmp(argv[paramCount], "-s") == 0) {
 			paramCount++;
 			references = false;
 		}
-		else if (_stricmp(argv[paramCount], "--out") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--out") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			paramCount++;
 			theOutputter.setFilename(argv[paramCount++]);
 		}
-		else if (_stricmp(argv[paramCount], "--references") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--references") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			paramCount++;
 			signedInfo = false;
 			if (argv[paramCount][0] >= '0' && argv[paramCount][0] <= '9')
 				refNum = atoi(argv[paramCount++]);
 		}
-		else if (_stricmp(argv[paramCount], "--newfiles") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		else if (strcasecmp(argv[paramCount], "--newfiles") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			paramCount++;
 			theOutputter.setNewFilePerOpen();
 		}
