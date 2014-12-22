$NetBSD$

--- xsec/tools/checksig/checksig.cpp.orig	2013-05-24 23:56:10.000000000 +0000
+++ xsec/tools/checksig/checksig.cpp
@@ -26,5 +26,5 @@
  *
  */
-
+#include <strings.h>
 #include "AnonymousResolver.hpp"
 #include "InteropResolver.hpp"
@@ -199,17 +199,17 @@ int evaluate(int argc, char ** argv) {
 	while (paramCount < argc - 1) {
 
-		if (_stricmp(argv[paramCount], "--hmackey") == 0 || _stricmp(argv[paramCount], "-h") == 0) {
+		if (strcasecmp(argv[paramCount], "--hmackey") == 0 || strcasecmp(argv[paramCount], "-h") == 0) {
 			paramCount++;
 			hmacKeyStr = argv[paramCount++];
 		}
-		else if (_stricmp(argv[paramCount], "--skiprefs") == 0 || _stricmp(argv[paramCount], "-s") == 0) {
+		else if (strcasecmp(argv[paramCount], "--skiprefs") == 0 || strcasecmp(argv[paramCount], "-s") == 0) {
 			skipRefs = true;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--xsecresolver") == 0 || _stricmp(argv[paramCount], "-x") == 0) {
+		else if (strcasecmp(argv[paramCount], "--xsecresolver") == 0 || strcasecmp(argv[paramCount], "-x") == 0) {
 			useXSECURIResolver = true;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--id") == 0) {
+		else if (strcasecmp(argv[paramCount], "--id") == 0) {
 			if (paramCount +1 >= argc) {
 				printUsage();
@@ -219,5 +219,5 @@ int evaluate(int argc, char ** argv) {
 			useIdAttributeName = argv[paramCount++];
 		}
-		else if (_stricmp(argv[paramCount], "--idns") == 0 || _stricmp(argv[paramCount], "-d") == 0) {
+		else if (strcasecmp(argv[paramCount], "--idns") == 0 || strcasecmp(argv[paramCount], "-d") == 0) {
 			if (paramCount +2 >= argc) {
 				printUsage();
@@ -229,5 +229,5 @@ int evaluate(int argc, char ** argv) {
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--interop") == 0 || _stricmp(argv[paramCount], "-i") == 0) {
+		else if (strcasecmp(argv[paramCount], "--interop") == 0 || strcasecmp(argv[paramCount], "-i") == 0) {
 			// Use the interop key resolver
 			useInteropResolver = true;
@@ -235,16 +235,16 @@ int evaluate(int argc, char ** argv) {
 		}
 #endif
-		else if (_stricmp(argv[paramCount], "--anonymousresolver") == 0 || _stricmp(argv[paramCount], "-a") ==0) {
+		else if (strcasecmp(argv[paramCount], "--anonymousresolver") == 0 || strcasecmp(argv[paramCount], "-a") ==0) {
 			useAnonymousResolver = true;
 			paramCount++;
 		}
 #if defined (XSEC_HAVE_WINCAPI)
-		else if (_stricmp(argv[paramCount], "--wincapi") == 0 || _stricmp(argv[paramCount], "-w") == 0 ||
-			_stricmp(argv[paramCount], "--winhmackey") == 0 || _stricmp(argv[paramCount], "-wh") == 0) {
+		else if (strcasecmp(argv[paramCount], "--wincapi") == 0 || strcasecmp(argv[paramCount], "-w") == 0 ||
+			strcasecmp(argv[paramCount], "--winhmackey") == 0 || strcasecmp(argv[paramCount], "-wh") == 0) {
 
 			WinCAPICryptoProvider * cp = new WinCAPICryptoProvider();
 			XSECPlatformUtils::SetCryptoProvider(cp);
 
-			if (_stricmp(argv[paramCount], "--winhmackey") == 0 || _stricmp(argv[paramCount], "-wh") == 0) {
+			if (strcasecmp(argv[paramCount], "--winhmackey") == 0 || strcasecmp(argv[paramCount], "-wh") == 0) {
 
 				// Create a SHA-1 based key based on the <string> parameter
