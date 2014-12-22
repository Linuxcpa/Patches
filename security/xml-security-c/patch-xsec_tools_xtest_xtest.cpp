$NetBSD$

--- xsec/tools/xtest/xtest.cpp.orig	2012-07-23 16:56:10.000000000 +0000
+++ xsec/tools/xtest/xtest.cpp
@@ -2529,7 +2529,7 @@ void printUsage(void) {
 // --------------------------------------------------------------------------------
 //           Main
 // --------------------------------------------------------------------------------
-
+#include <strings.h>
 int main(int argc, char **argv) {
 
 	/* We output a version number to overcome a "feature" in Microsoft's memory
@@ -2551,11 +2551,11 @@ int main(int argc, char **argv) {
 
 	while (paramCount < argc) {
 
-		if (_stricmp(argv[paramCount], "--help") == 0 || _stricmp(argv[paramCount], "-h") == 0) {
+		if (strcasecmp(argv[paramCount], "--help") == 0 || strcasecmp(argv[paramCount], "-h") == 0) {
 			printUsage();
 			exit(0);
 		}
-		else if (_stricmp(argv[paramCount], "--print-docs") == 0 || _stricmp(argv[paramCount], "-p") == 0) {
+		else if (strcasecmp(argv[paramCount], "--print-docs") == 0 || strcasecmp(argv[paramCount], "-p") == 0) {
 			g_printDocs = true;
 			paramCount++;
 		}
@@ -2572,28 +2572,28 @@ int main(int argc, char **argv) {
 		}
 #endif
 
-		else if (_stricmp(argv[paramCount], "--signature-only") == 0 || _stricmp(argv[paramCount], "-s") == 0) {
+		else if (strcasecmp(argv[paramCount], "--signature-only") == 0 || strcasecmp(argv[paramCount], "-s") == 0) {
 			doEncryptionTest = false;
 			doEncryptionUnitTests = false;
 			doSignatureUnitTests = false;
 			doXKMSTest = false;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--encryption-only") == 0 || _stricmp(argv[paramCount], "-e") == 0) {
+		else if (strcasecmp(argv[paramCount], "--encryption-only") == 0 || strcasecmp(argv[paramCount], "-e") == 0) {
 			doSignatureTest = false;
 			doEncryptionUnitTests = false;
 			doSignatureUnitTests = false;
 			doXKMSTest = false;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--encryption-unit-only") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--encryption-unit-only") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			doEncryptionTest = false;
 			doSignatureTest = false;
 			doSignatureUnitTests = false;
 			doXKMSTest = false;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--signature-unit-only") == 0 || _stricmp(argv[paramCount], "-t") == 0) {
+		else if (strcasecmp(argv[paramCount], "--signature-unit-only") == 0 || strcasecmp(argv[paramCount], "-t") == 0) {
 			doEncryptionTest = false;
 			doSignatureTest = false;
 			doEncryptionUnitTests = false;
