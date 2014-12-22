$NetBSD$

--- xsec/tools/cipher/cipher.cpp.orig	2012-07-23 16:56:10.000000000 +0000
+++ xsec/tools/cipher/cipher.cpp
@@ -29,7 +29,7 @@
  */
 
 // XSEC
-
+#include <strings.h>
 #include <xsec/utils/XSECPlatformUtils.hpp>
 #include <xsec/framework/XSECProvider.hpp>
 #include <xsec/framework/XSECException.hpp>
@@ -249,19 +249,19 @@ int evaluate(int argc, char ** argv) {
 
 	while (paramCount < argc - 1) {
 
-		if (_stricmp(argv[paramCount], "--decrypt-element") == 0 || _stricmp(argv[paramCount], "-de") == 0) {
+		if (strcasecmp(argv[paramCount], "--decrypt-element") == 0 || strcasecmp(argv[paramCount], "-de") == 0) {
 			paramCount++;
 			doDecrypt = true;
 			doDecryptElement = true;
 			doXMLOutput = true;
 			parseXMLInput = true;
 		}
-		else if (_stricmp(argv[paramCount], "--interop") == 0 || _stricmp(argv[paramCount], "-i") == 0) {
+		else if (strcasecmp(argv[paramCount], "--interop") == 0 || strcasecmp(argv[paramCount], "-i") == 0) {
 			// Use the interop key resolver
 			useInteropResolver = true;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--encrypt-file") == 0 || _stricmp(argv[paramCount], "-ef") == 0) {
+		else if (strcasecmp(argv[paramCount], "--encrypt-file") == 0 || strcasecmp(argv[paramCount], "-ef") == 0) {
 			// Use this file as the input
 			doDecrypt = false;
 			encryptFileAsData = true;
@@ -269,7 +269,7 @@ int evaluate(int argc, char ** argv) {
 			parseXMLInput = false;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--encrypt-xml") == 0 || _stricmp(argv[paramCount], "-ex") == 0) {
+		else if (strcasecmp(argv[paramCount], "--encrypt-xml") == 0 || strcasecmp(argv[paramCount], "-ex") == 0) {
 			// Us this file as an XML input file
 			doDecrypt = false;
 			encryptFileAsData = false;
@@ -277,7 +277,7 @@ int evaluate(int argc, char ** argv) {
 			parseXMLInput = true;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--out-file") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--out-file") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (paramCount +2 >= argc) {
 				printUsage();
 				return 1;
@@ -286,13 +286,13 @@ int evaluate(int argc, char ** argv) {
 			outfile = argv[paramCount];
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--xkms") == 0 || _stricmp(argv[paramCount], "-x") == 0) {
+		else if (strcasecmp(argv[paramCount], "--xkms") == 0 || strcasecmp(argv[paramCount], "-x") == 0) {
 			paramCount++;
 			isXKMSKey = true;
 		}
 
 #if defined (XSEC_HAVE_WINCAPI)
-		else if (_stricmp(argv[paramCount], "--wincapi") == 0 || _stricmp(argv[paramCount], "-w") == 0) {
+		else if (strcasecmp(argv[paramCount], "--wincapi") == 0 || strcasecmp(argv[paramCount], "-w") == 0) {
 			// Use the interop key resolver
 			WinCAPICryptoProvider * cp = new WinCAPICryptoProvider();
 			XSECPlatformUtils::SetCryptoProvider(cp);
@@ -300,14 +300,14 @@ int evaluate(int argc, char ** argv) {
 		}
 #endif
 #if defined (XSEC_HAVE_NSS)
-		else if (_stricmp(argv[paramCount], "--nss") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		else if (strcasecmp(argv[paramCount], "--nss") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			// NSS Crypto Provider
 			NSSCryptoProvider * cp = new NSSCryptoProvider();
 			XSECPlatformUtils::SetCryptoProvider(cp);
 			paramCount++;
 		}
 #endif
-		else if (_stricmp(argv[paramCount], "--key") == 0 || _stricmp(argv[paramCount], "-k") == 0) {
+		else if (strcasecmp(argv[paramCount], "--key") == 0 || strcasecmp(argv[paramCount], "-k") == 0) {
 
 			// Have a key!
 			paramCount++;
@@ -315,7 +315,7 @@ int evaluate(int argc, char ** argv) {
 			XSECCryptoSymmetricKey::SymmetricKeyType loadKeyAs =
 				XSECCryptoSymmetricKey::KEY_NONE;
 
-			if (_stricmp(argv[paramCount], "kek") == 0) {
+			if (strcasecmp(argv[paramCount], "kek") == 0) {
 				isKEK = true;
 				paramCount++;
 				if (paramCount >= argc) {
@@ -324,13 +324,13 @@ int evaluate(int argc, char ** argv) {
 				}
 			}
 
-			if (_stricmp(argv[paramCount], "3DES") == 0 ||
-				_stricmp(argv[paramCount], "AES128") == 0 ||
-				_stricmp(argv[paramCount], "AES192") == 0 ||
-				_stricmp(argv[paramCount], "AES256") == 0 ||
-				_stricmp(argv[paramCount], "AES128-GCM") == 0 ||
-				_stricmp(argv[paramCount], "AES192-GCM") == 0 ||
-				_stricmp(argv[paramCount], "AES256-GCM") == 0) {
+			if (strcasecmp(argv[paramCount], "3DES") == 0 ||
+				strcasecmp(argv[paramCount], "AES128") == 0 ||
+				strcasecmp(argv[paramCount], "AES192") == 0 ||
+				strcasecmp(argv[paramCount], "AES256") == 0 ||
+				strcasecmp(argv[paramCount], "AES128-GCM") == 0 ||
+				strcasecmp(argv[paramCount], "AES192-GCM") == 0 ||
+				strcasecmp(argv[paramCount], "AES256-GCM") == 0) {
 				
 				if (paramCount +2 >= argc) {
 					printUsage();
@@ -413,7 +413,7 @@ int evaluate(int argc, char ** argv) {
 
 #if defined (XSEC_HAVE_OPENSSL)
 
-			else if (_stricmp(argv[paramCount], "RSA") == 0) {
+			else if (strcasecmp(argv[paramCount], "RSA") == 0) {
 				// RSA private key file
 
 				if (paramCount + 3 >= argc) {
@@ -460,7 +460,7 @@ int evaluate(int argc, char ** argv) {
 				paramCount += 3;
 			}
 
-			else if (_stricmp(argv[paramCount], "X509") == 0) {
+			else if (strcasecmp(argv[paramCount], "X509") == 0) {
 
 				// X509 cert used to load an encrypting key
 
