$NetBSD$

--- xsec/tools/templatesign/templatesign.cpp.orig	2012-07-23 16:56:10.000000000 +0000
+++ xsec/tools/templatesign/templatesign.cpp
@@ -30,7 +30,7 @@
 
 //XSEC includes
 // XSEC
-
+#include <strings.h>
 #include <xsec/utils/XSECPlatformUtils.hpp>
 #include <xsec/framework/XSECProvider.hpp>
 #include <xsec/canon/XSECC14n20010315.hpp>
@@ -654,7 +654,7 @@ int main(int argc, char **argv) {
 
 		// Run through all parameters
 
-		if (_stricmp(argv[paramCount], "--x509subjectname") == 0 || _stricmp(argv[paramCount], "-s") == 0) {
+		if (strcasecmp(argv[paramCount], "--x509subjectname") == 0 || strcasecmp(argv[paramCount], "-s") == 0) {
 
 			if (paramCount +2 >= argc) {
 
@@ -670,10 +670,10 @@ int main(int argc, char **argv) {
 
 #if defined (XSEC_HAVE_OPENSSL)
 
-		else if (_stricmp(argv[paramCount], "--dsakey") == 0 || _stricmp(argv[paramCount], "-d") == 0
-			|| _stricmp(argv[paramCount], "--rsakey") == 0 || _stricmp(argv[paramCount], "-r") == 0
+		else if (strcasecmp(argv[paramCount], "--dsakey") == 0 || strcasecmp(argv[paramCount], "-d") == 0
+			|| strcasecmp(argv[paramCount], "--rsakey") == 0 || strcasecmp(argv[paramCount], "-r") == 0
 #   if defined(XSEC_OPENSSL_HAVE_EC)
-			|| _stricmp(argv[paramCount], "--eckey") == 0 || _stricmp(argv[paramCount], "-e") == 0
+			|| strcasecmp(argv[paramCount], "--eckey") == 0 || strcasecmp(argv[paramCount], "-e") == 0
 #   endif
             ) {
 
@@ -723,7 +723,7 @@ int main(int argc, char **argv) {
 
 			}
 
-			if (_stricmp(argv[paramCount], "--dsakey") == 0 || _stricmp(argv[paramCount], "-d") == 0) {
+			if (strcasecmp(argv[paramCount], "--dsakey") == 0 || strcasecmp(argv[paramCount], "-d") == 0) {
 
 				// Check type is correct
 
@@ -736,7 +736,7 @@ int main(int argc, char **argv) {
 				key = new OpenSSLCryptoKeyDSA(pkey);
 			}
 #   if defined(XSEC_OPENSSL_HAVE_EC)
-			else if (_stricmp(argv[paramCount], "--eckey") == 0 || _stricmp(argv[paramCount], "-e") == 0) {
+			else if (strcasecmp(argv[paramCount], "--eckey") == 0 || strcasecmp(argv[paramCount], "-e") == 0) {
 
 				// Check type is correct
 
@@ -765,7 +765,7 @@ int main(int argc, char **argv) {
 		} /* argv[1] = "dsa/rsa/ec" */
 
 
-		else if (_stricmp(argv[paramCount], "--x509cert") == 0 || _stricmp(argv[paramCount], "-x") == 0) {
+		else if (strcasecmp(argv[paramCount], "--x509cert") == 0 || strcasecmp(argv[paramCount], "-x") == 0) {
 
 			// X509Data keyInfo
 
@@ -819,7 +819,7 @@ int main(int argc, char **argv) {
 		
 		else 
 #endif
-		if (_stricmp(argv[paramCount], "--hmackey") == 0 || _stricmp(argv[paramCount], "-h") == 0) {
+		if (strcasecmp(argv[paramCount], "--hmackey") == 0 || strcasecmp(argv[paramCount], "-h") == 0) {
 
 #if defined (XSEC_HAVE_OPENSSL)
 			OpenSSLCryptoKeyHMAC * hmacKey = new OpenSSLCryptoKeyHMAC();
@@ -834,7 +834,7 @@ int main(int argc, char **argv) {
 
 		}
 
-		else if (_stricmp(argv[paramCount], "--clearkeys") == 0 || _stricmp(argv[paramCount], "-c") == 0) {
+		else if (strcasecmp(argv[paramCount], "--clearkeys") == 0 || strcasecmp(argv[paramCount], "-c") == 0) {
 
 			clearKeyInfo = true;
 			paramCount += 1;
@@ -842,7 +842,7 @@ int main(int argc, char **argv) {
 		}
 
 #if defined (XSEC_HAVE_WINCAPI)
-		else if (_stricmp(argv[paramCount], "--windss") == 0 || _stricmp(argv[paramCount], "-wd") == 0) {
+		else if (strcasecmp(argv[paramCount], "--windss") == 0 || strcasecmp(argv[paramCount], "-wd") == 0) {
 
 			WinCAPICryptoProvider * cp;
 			// First set windows as the crypto provider
@@ -882,7 +882,7 @@ int main(int argc, char **argv) {
 			paramCount++;
 		}
 
-		else if (_stricmp(argv[paramCount], "--winrsa") == 0 || _stricmp(argv[paramCount], "-wr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--winrsa") == 0 || strcasecmp(argv[paramCount], "-wr") == 0) {
 			WinCAPICryptoProvider * cp;
 			cp = new WinCAPICryptoProvider();
 			XSECPlatformUtils::SetCryptoProvider(cp);
@@ -919,7 +919,7 @@ int main(int argc, char **argv) {
 			paramCount++;
 		}
 
-		else if (_stricmp(argv[paramCount], "--winhmac") == 0 || _stricmp(argv[paramCount], "-wh") == 0) {
+		else if (strcasecmp(argv[paramCount], "--winhmac") == 0 || strcasecmp(argv[paramCount], "-wh") == 0) {
 
 			WinCAPICryptoProvider * cp;
 			// Obtain default PROV_RSA, with default user key container
@@ -985,12 +985,12 @@ int main(int argc, char **argv) {
 
 		}
 
-		else if (_stricmp(argv[paramCount], "--windsskeyinfo") == 0 || _stricmp(argv[paramCount], "-wdi") == 0) {
+		else if (strcasecmp(argv[paramCount], "--windsskeyinfo") == 0 || strcasecmp(argv[paramCount], "-wdi") == 0) {
 			winDssKeyInfo = true;
 			paramCount++;
 		}
 
-		else if (_stricmp(argv[paramCount], "--winrsakeyinfo") == 0 || _stricmp(argv[paramCount], "-wri") == 0) {
+		else if (strcasecmp(argv[paramCount], "--winrsakeyinfo") == 0 || strcasecmp(argv[paramCount], "-wri") == 0) {
 			winRsaKeyInfo = true;
 			paramCount++;
 		}
@@ -1008,7 +1008,7 @@ int main(int argc, char **argv) {
 		//this example you'll need to replace your old wincrypt.h and crypt32.lib with new versions.
 		//This example below is compatible with Windows 98/IE 5 and above OS/IE versions.
 
-		else if (_stricmp(argv[paramCount], "--wincer") == 0 || _stricmp(argv[paramCount], "-wc") == 0) {
+		else if (strcasecmp(argv[paramCount], "--wincer") == 0 || strcasecmp(argv[paramCount], "-wc") == 0) {
 			WinCAPICryptoProvider * cp;
 			PCCERT_CONTEXT          pSignerCert = NULL;
 			DWORD                   dwKeySpec;
