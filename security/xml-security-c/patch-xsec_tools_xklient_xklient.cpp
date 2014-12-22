$NetBSD$

--- xsec/tools/xklient/xklient.cpp.orig	2012-07-23 16:56:10.000000000 +0000
+++ xsec/tools/xklient/xklient.cpp
@@ -27,7 +27,7 @@
  */
 
 // XSEC
-
+#include <strings.h>
 #include <xsec/utils/XSECPlatformUtils.hpp>
 #include <xsec/framework/XSECProvider.hpp>
 #include <xsec/framework/XSECError.hpp>
@@ -430,8 +430,8 @@ void printLocateRequestUsage(void) {
 XKMSMessageAbstractType * createLocateRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int &paramCount, XKMSCompoundRequest * cr = NULL) {
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printLocateRequestUsage();
 		return NULL;
@@ -446,9 +446,9 @@ XKMSMessageAbstractType * createLocateRe
 	else
 		lr = cr->createLocateRequest(MAKE_UNICODE_STRING(argv[paramCount++]));
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--add-cert") == 0 || _stricmp(argv[paramCount], "-a") == 0) {
+		if (strcasecmp(argv[paramCount], "--add-cert") == 0 || strcasecmp(argv[paramCount], "-a") == 0) {
 			if (++paramCount >= argc) {
 				printLocateRequestUsage();
 				delete lr;
@@ -478,7 +478,7 @@ XKMSMessageAbstractType * createLocateRe
 			paramCount++;
 		}
 
-		else if (_stricmp(argv[paramCount], "--add-name") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-name") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			if (++paramCount >= argc) {
 				printLocateRequestUsage();
 				delete lr;
@@ -488,7 +488,7 @@ XKMSMessageAbstractType * createLocateRe
 			qkb->appendKeyName(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-opaque") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-opaque") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printLocateRequestUsage();
 				delete lr;
@@ -497,28 +497,28 @@ XKMSMessageAbstractType * createLocateRe
 			lr->appendOpaqueClientDataItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-sig") == 0 || _stricmp(argv[paramCount], "-us") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-sig") == 0 || strcasecmp(argv[paramCount], "-us") == 0) {
 			XKMSQueryKeyBinding * qkb = lr->getQueryKeyBinding();
 			if (qkb == NULL)
 				qkb = lr->addQueryKeyBinding();
 			qkb->setSignatureKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-exc") == 0 || _stricmp(argv[paramCount], "-ux") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-exc") == 0 || strcasecmp(argv[paramCount], "-ux") == 0) {
 			XKMSQueryKeyBinding * qkb = lr->getQueryKeyBinding();
 			if (qkb == NULL)
 				qkb = lr->addQueryKeyBinding();
 			qkb->setExchangeKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-enc") == 0 || _stricmp(argv[paramCount], "-ue") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-enc") == 0 || strcasecmp(argv[paramCount], "-ue") == 0) {
 			XKMSQueryKeyBinding * qkb = lr->getQueryKeyBinding();
 			if (qkb == NULL)
 				qkb = lr->addQueryKeyBinding();
 			qkb->setEncryptionKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responselimit") == 0 || _stricmp(argv[paramCount], "-l") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responselimit") == 0 || strcasecmp(argv[paramCount], "-l") == 0) {
 			if (paramCount >= argc+1) {
 				printLocateRequestUsage();
 				delete lr;
@@ -528,7 +528,7 @@ XKMSMessageAbstractType * createLocateRe
 			lr->setResponseLimit(atoi(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usekeywith") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usekeywith") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			if (++paramCount >= argc + 1) {
 				printLocateRequestUsage();
 				delete lr;
@@ -541,7 +541,7 @@ XKMSMessageAbstractType * createLocateRe
 			qkb->appendUseKeyWithItem(MAKE_UNICODE_STRING(argv[paramCount]), MAKE_UNICODE_STRING(argv[paramCount + 1]));
 			paramCount += 2;
 		}
-		else if (_stricmp(argv[paramCount], "--add-respondwith") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-respondwith") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printLocateRequestUsage();
 				delete lr;
@@ -550,7 +550,7 @@ XKMSMessageAbstractType * createLocateRe
 			lr->appendRespondWithItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responsemechanism") == 0 || _stricmp(argv[paramCount], "-m") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responsemechanism") == 0 || strcasecmp(argv[paramCount], "-m") == 0) {
 			if (++paramCount >= argc) {
 				printLocateRequestUsage();
 				delete lr;
@@ -560,8 +560,8 @@ XKMSMessageAbstractType * createLocateRe
 			paramCount++;
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0 ||
-				_stricmp(argv[paramCount], "--sign-rsa") == 0 || _stricmp(argv[paramCount], "-sr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0 ||
+				strcasecmp(argv[paramCount], "--sign-rsa") == 0 || strcasecmp(argv[paramCount], "-sr") == 0) {
 			if (paramCount >= argc + 2) {
 				printLocateRequestUsage();
 				delete lr;
@@ -602,7 +602,7 @@ XKMSMessageAbstractType * createLocateRe
 			}
 			XSECCryptoKey *key;
 			DSIGSignature * sig;
-			if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0) {
+			if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0) {
 
 				// Check type is correct
 
@@ -700,8 +700,8 @@ void printValidateRequestUsage(void) {
 XKMSMessageAbstractType * createValidateRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int &paramCount, XKMSCompoundRequest * cr = NULL) {
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printValidateRequestUsage();
 		return NULL;
@@ -717,9 +717,9 @@ XKMSMessageAbstractType * createValidate
 	else
 		vr = cr->createValidateRequest(MAKE_UNICODE_STRING(argv[paramCount++]));
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--add-cert") == 0 || _stricmp(argv[paramCount], "-a") == 0) {
+		if (strcasecmp(argv[paramCount], "--add-cert") == 0 || strcasecmp(argv[paramCount], "-a") == 0) {
 			if (++paramCount >= argc) {
 				printValidateRequestUsage();
 				delete vr;
@@ -750,7 +750,7 @@ XKMSMessageAbstractType * createValidate
 
 		}
 
-		else if (_stricmp(argv[paramCount], "--add-name") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-name") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			if (++paramCount >= argc) {
 				printValidateRequestUsage();
 				delete vr;
@@ -760,7 +760,7 @@ XKMSMessageAbstractType * createValidate
 			qkb->appendKeyName(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-opaque") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-opaque") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printValidateRequestUsage();
 				delete vr;
@@ -769,7 +769,7 @@ XKMSMessageAbstractType * createValidate
 			vr->appendOpaqueClientDataItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-respondwith") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-respondwith") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printValidateRequestUsage();
 				delete vr;
@@ -778,7 +778,7 @@ XKMSMessageAbstractType * createValidate
 			vr->appendRespondWithItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responsemechanism") == 0 || _stricmp(argv[paramCount], "-m") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responsemechanism") == 0 || strcasecmp(argv[paramCount], "-m") == 0) {
 			if (++paramCount >= argc) {
 				printLocateRequestUsage();
 				delete vr;
@@ -787,7 +787,7 @@ XKMSMessageAbstractType * createValidate
 			vr->appendResponseMechanismItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responselimit") == 0 || _stricmp(argv[paramCount], "-l") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responselimit") == 0 || strcasecmp(argv[paramCount], "-l") == 0) {
 			if (paramCount >= argc+1) {
 				printValidateRequestUsage();
 				delete vr;
@@ -797,28 +797,28 @@ XKMSMessageAbstractType * createValidate
 			vr->setResponseLimit(atoi(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-sig") == 0 || _stricmp(argv[paramCount], "-us") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-sig") == 0 || strcasecmp(argv[paramCount], "-us") == 0) {
 			XKMSQueryKeyBinding * qkb = vr->getQueryKeyBinding();
 			if (qkb == NULL)
 				qkb = vr->addQueryKeyBinding();
 			qkb->setSignatureKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-exc") == 0 || _stricmp(argv[paramCount], "-ux") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-exc") == 0 || strcasecmp(argv[paramCount], "-ux") == 0) {
 			XKMSQueryKeyBinding * qkb = vr->getQueryKeyBinding();
 			if (qkb == NULL)
 				qkb = vr->addQueryKeyBinding();
 			qkb->setExchangeKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-enc") == 0 || _stricmp(argv[paramCount], "-ue") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-enc") == 0 || strcasecmp(argv[paramCount], "-ue") == 0) {
 			XKMSQueryKeyBinding * qkb = vr->getQueryKeyBinding();
 			if (qkb == NULL)
 				qkb = vr->addQueryKeyBinding();
 			qkb->setEncryptionKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usekeywith") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usekeywith") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			if (++paramCount >= argc + 1) {
 				printValidateRequestUsage();
 				delete vr;
@@ -832,8 +832,8 @@ XKMSMessageAbstractType * createValidate
 			paramCount += 2;
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0 ||
-				_stricmp(argv[paramCount], "--sign-rsa") == 0 || _stricmp(argv[paramCount], "-sr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0 ||
+				strcasecmp(argv[paramCount], "--sign-rsa") == 0 || strcasecmp(argv[paramCount], "-sr") == 0) {
 			if (paramCount >= argc + 2) {
 				printValidateRequestUsage();
 				delete vr;
@@ -874,7 +874,7 @@ XKMSMessageAbstractType * createValidate
 			}
 			XSECCryptoKey *key;
 			DSIGSignature * sig;
-			if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0) {
+			if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0) {
 
 				// Check type is correct
 
@@ -925,7 +925,7 @@ XKMSMessageAbstractType * createValidate
 
 			
 		} /* argv[1] = "dsa/rsa" */
-		else if (_stricmp(argv[paramCount], "--sign-cert") == 0 || _stricmp(argv[paramCount], "-sc") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-cert") == 0 || strcasecmp(argv[paramCount], "-sc") == 0) {
 			if (++paramCount >= argc) {
 				printValidateRequestUsage();
 				delete vr;
@@ -1012,8 +1012,8 @@ XKMSMessageAbstractType * createRegister
 	signatureMethod proofOfPossessionSm = SIGNATURE_DSA;
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printRegisterRequestUsage();
 		return NULL;
@@ -1029,9 +1029,9 @@ XKMSMessageAbstractType * createRegister
 	else
 		rr = cr->createRegisterRequest(MAKE_UNICODE_STRING(argv[paramCount++]));
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--add-name") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		if (strcasecmp(argv[paramCount], "--add-name") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			if (++paramCount >= argc) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1044,7 +1044,7 @@ XKMSMessageAbstractType * createRegister
 			pkb->appendKeyName(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-opaque") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-opaque") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1053,7 +1053,7 @@ XKMSMessageAbstractType * createRegister
 			rr->appendOpaqueClientDataItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--kek") == 0 || _stricmp(argv[paramCount], "-k") == 0) {
+		else if (strcasecmp(argv[paramCount], "--kek") == 0 || strcasecmp(argv[paramCount], "-k") == 0) {
 			if (++paramCount >= argc) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1061,7 +1061,7 @@ XKMSMessageAbstractType * createRegister
 			}
 			g_authPassPhrase = argv[paramCount++];
 		}
-		else if (_stricmp(argv[paramCount], "--add-respondwith") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-respondwith") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1070,7 +1070,7 @@ XKMSMessageAbstractType * createRegister
 			rr->appendRespondWithItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responsemechanism") == 0 || _stricmp(argv[paramCount], "-m") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responsemechanism") == 0 || strcasecmp(argv[paramCount], "-m") == 0) {
 			if (++paramCount >= argc) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1079,28 +1079,28 @@ XKMSMessageAbstractType * createRegister
 			rr->appendResponseMechanismItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-sig") == 0 || _stricmp(argv[paramCount], "-us") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-sig") == 0 || strcasecmp(argv[paramCount], "-us") == 0) {
 			XKMSPrototypeKeyBinding * pkb = rr->getPrototypeKeyBinding();
 			if (pkb == NULL)
 				pkb = rr->addPrototypeKeyBinding();
 			pkb->setSignatureKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-exc") == 0 || _stricmp(argv[paramCount], "-ux") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-exc") == 0 || strcasecmp(argv[paramCount], "-ux") == 0) {
 			XKMSPrototypeKeyBinding * pkb = rr->getPrototypeKeyBinding();
 			if (pkb == NULL)
 				pkb = rr->addPrototypeKeyBinding();
 			pkb->setExchangeKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-enc") == 0 || _stricmp(argv[paramCount], "-ue") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-enc") == 0 || strcasecmp(argv[paramCount], "-ue") == 0) {
 			XKMSPrototypeKeyBinding * pkb = rr->getPrototypeKeyBinding();
 			if (pkb == NULL)
 				pkb = rr->addPrototypeKeyBinding();
 			pkb->setEncryptionKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usekeywith") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usekeywith") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			if (++paramCount >= argc + 1) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1114,7 +1114,7 @@ XKMSMessageAbstractType * createRegister
 			paramCount += 2;
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--output-private-key") == 0 || _stricmp(argv[paramCount], "-p") == 0) {
+		else if (strcasecmp(argv[paramCount], "--output-private-key") == 0 || strcasecmp(argv[paramCount], "-p") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1125,7 +1125,7 @@ XKMSMessageAbstractType * createRegister
 			g_privateKeyPassPhrase = argv[paramCount++];
 		}
 #endif
-		else if (_stricmp(argv[paramCount], "--revocation") == 0 || _stricmp(argv[paramCount], "-v") == 0) {
+		else if (strcasecmp(argv[paramCount], "--revocation") == 0 || strcasecmp(argv[paramCount], "-v") == 0) {
 			if (++paramCount >= argc) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1152,7 +1152,7 @@ XKMSMessageAbstractType * createRegister
 
 			paramCount++;;
 		}		
-		else if (_stricmp(argv[paramCount], "--authenticate") == 0 || _stricmp(argv[paramCount], "-a") == 0) {
+		else if (strcasecmp(argv[paramCount], "--authenticate") == 0 || strcasecmp(argv[paramCount], "-a") == 0) {
 			if (++paramCount >= argc + 1) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1183,8 +1183,8 @@ XKMSMessageAbstractType * createRegister
 
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0 ||
-				_stricmp(argv[paramCount], "--sign-rsa") == 0 || _stricmp(argv[paramCount], "-sr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0 ||
+				strcasecmp(argv[paramCount], "--sign-rsa") == 0 || strcasecmp(argv[paramCount], "-sr") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1225,7 +1225,7 @@ XKMSMessageAbstractType * createRegister
 			}
 			XSECCryptoKey *key;
 			DSIGSignature * sig;
-			if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0) {
+			if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0) {
 
 				// Check type is correct
 
@@ -1276,8 +1276,8 @@ XKMSMessageAbstractType * createRegister
 
 			
 		} /* argv[1] = "sign dsa/rsa" */
-		else if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0 ||
-				_stricmp(argv[paramCount], "--add-value-rsa") == 0 || _stricmp(argv[paramCount], "-vr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0 ||
+				strcasecmp(argv[paramCount], "--add-value-rsa") == 0 || strcasecmp(argv[paramCount], "-vr") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1322,7 +1322,7 @@ XKMSMessageAbstractType * createRegister
 				pkb = rr->addPrototypeKeyBinding();
 
 
-			if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0) {
+			if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0) {
 
 				// Check type is correct
 
@@ -1429,8 +1429,8 @@ void printRevokeRequestUsage(void) {
 XKMSMessageAbstractType * createRevokeRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int &paramCount, XKMSCompoundRequest * cr = NULL) {
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printRegisterRequestUsage();
 		return NULL;
@@ -1446,9 +1446,9 @@ XKMSMessageAbstractType * createRevokeRe
 	else
 		rr = cr->createRevokeRequest(MAKE_UNICODE_STRING(argv[paramCount++]));
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--add-name") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		if (strcasecmp(argv[paramCount], "--add-name") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			if (++paramCount >= argc) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1461,7 +1461,7 @@ XKMSMessageAbstractType * createRevokeRe
 			rkb->appendKeyName(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-opaque") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-opaque") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1470,7 +1470,7 @@ XKMSMessageAbstractType * createRevokeRe
 			rr->appendOpaqueClientDataItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-respondwith") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-respondwith") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1479,7 +1479,7 @@ XKMSMessageAbstractType * createRevokeRe
 			rr->appendRespondWithItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responsemechanism") == 0 || _stricmp(argv[paramCount], "-m") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responsemechanism") == 0 || strcasecmp(argv[paramCount], "-m") == 0) {
 			if (++paramCount >= argc) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1488,28 +1488,28 @@ XKMSMessageAbstractType * createRevokeRe
 			rr->appendResponseMechanismItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-sig") == 0 || _stricmp(argv[paramCount], "-us") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-sig") == 0 || strcasecmp(argv[paramCount], "-us") == 0) {
 			XKMSRevokeKeyBinding * rkb = rr->getRevokeKeyBinding();
 			if (rkb == NULL)
 				rkb = rr->addRevokeKeyBinding(XKMSStatus::Indeterminate);
 			rkb->setSignatureKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-exc") == 0 || _stricmp(argv[paramCount], "-ux") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-exc") == 0 || strcasecmp(argv[paramCount], "-ux") == 0) {
 			XKMSRevokeKeyBinding * rkb = rr->getRevokeKeyBinding();
 			if (rkb == NULL)
 				rkb = rr->addRevokeKeyBinding(XKMSStatus::Indeterminate);
 			rkb->setExchangeKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-enc") == 0 || _stricmp(argv[paramCount], "-ue") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-enc") == 0 || strcasecmp(argv[paramCount], "-ue") == 0) {
 			XKMSRevokeKeyBinding * rkb = rr->getRevokeKeyBinding();
 			if (rkb == NULL)
 				rkb = rr->addRevokeKeyBinding(XKMSStatus::Indeterminate);
 			rkb->setEncryptionKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usekeywith") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usekeywith") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			if (++paramCount >= argc + 1) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1522,7 +1522,7 @@ XKMSMessageAbstractType * createRevokeRe
 			rkb->appendUseKeyWithItem(MAKE_UNICODE_STRING(argv[paramCount]), MAKE_UNICODE_STRING(argv[paramCount + 1]));
 			paramCount += 2;
 		}
-		else if (_stricmp(argv[paramCount], "--revocation") == 0 || _stricmp(argv[paramCount], "-v") == 0) {
+		else if (strcasecmp(argv[paramCount], "--revocation") == 0 || strcasecmp(argv[paramCount], "-v") == 0) {
 			if (++paramCount >= argc) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1545,7 +1545,7 @@ XKMSMessageAbstractType * createRevokeRe
 			XSEC_RELEASE_XMLCH(str);
 
 			paramCount++;;
-		}		else if (_stricmp(argv[paramCount], "--authenticate") == 0 || _stricmp(argv[paramCount], "-a") == 0) {
+		}		else if (strcasecmp(argv[paramCount], "--authenticate") == 0 || strcasecmp(argv[paramCount], "-a") == 0) {
 			if (++paramCount >= argc + 1) {
 				printRevokeRequestUsage();
 				delete rr;
@@ -1576,8 +1576,8 @@ XKMSMessageAbstractType * createRevokeRe
 
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0 ||
-				_stricmp(argv[paramCount], "--sign-rsa") == 0 || _stricmp(argv[paramCount], "-sr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0 ||
+				strcasecmp(argv[paramCount], "--sign-rsa") == 0 || strcasecmp(argv[paramCount], "-sr") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1618,7 +1618,7 @@ XKMSMessageAbstractType * createRevokeRe
 			}
 			XSECCryptoKey *key;
 			DSIGSignature * sig;
-			if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0) {
+			if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0) {
 
 				// Check type is correct
 
@@ -1669,8 +1669,8 @@ XKMSMessageAbstractType * createRevokeRe
 
 			
 		} /* argv[1] = "sign dsa/rsa" */
-		else if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0 ||
-				_stricmp(argv[paramCount], "--add-value-rsa") == 0 || _stricmp(argv[paramCount], "-vr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0 ||
+				strcasecmp(argv[paramCount], "--add-value-rsa") == 0 || strcasecmp(argv[paramCount], "-vr") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -1715,7 +1715,7 @@ XKMSMessageAbstractType * createRevokeRe
 				rkb = rr->addRevokeKeyBinding(XKMSStatus::Indeterminate);
 
 
-			if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0) {
+			if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0) {
 
 				// Check type is correct
 
@@ -1807,8 +1807,8 @@ XKMSMessageAbstractType * createReissueR
 	signatureMethod proofOfPossessionSm = SIGNATURE_DSA;
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printReissueRequestUsage();
 		return NULL;
@@ -1824,9 +1824,9 @@ XKMSMessageAbstractType * createReissueR
 	else
 		rr = cr->createReissueRequest(MAKE_UNICODE_STRING(argv[paramCount++]));
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--add-name") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		if (strcasecmp(argv[paramCount], "--add-name") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			if (++paramCount >= argc) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1839,7 +1839,7 @@ XKMSMessageAbstractType * createReissueR
 			pkb->appendKeyName(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-opaque") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-opaque") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1848,7 +1848,7 @@ XKMSMessageAbstractType * createReissueR
 			rr->appendOpaqueClientDataItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-respondwith") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-respondwith") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1857,7 +1857,7 @@ XKMSMessageAbstractType * createReissueR
 			rr->appendRespondWithItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responsemechanism") == 0 || _stricmp(argv[paramCount], "-m") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responsemechanism") == 0 || strcasecmp(argv[paramCount], "-m") == 0) {
 			if (++paramCount >= argc) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1866,28 +1866,28 @@ XKMSMessageAbstractType * createReissueR
 			rr->appendResponseMechanismItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-sig") == 0 || _stricmp(argv[paramCount], "-us") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-sig") == 0 || strcasecmp(argv[paramCount], "-us") == 0) {
 			XKMSReissueKeyBinding * pkb = rr->getReissueKeyBinding();
 			if (pkb == NULL)
 				pkb = rr->addReissueKeyBinding(XKMSStatus::Indeterminate);
 			pkb->setSignatureKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-exc") == 0 || _stricmp(argv[paramCount], "-ux") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-exc") == 0 || strcasecmp(argv[paramCount], "-ux") == 0) {
 			XKMSReissueKeyBinding * pkb = rr->getReissueKeyBinding();
 			if (pkb == NULL)
 				pkb = rr->addReissueKeyBinding(XKMSStatus::Indeterminate);
 			pkb->setExchangeKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-enc") == 0 || _stricmp(argv[paramCount], "-ue") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-enc") == 0 || strcasecmp(argv[paramCount], "-ue") == 0) {
 			XKMSReissueKeyBinding * pkb = rr->getReissueKeyBinding();
 			if (pkb == NULL)
 				pkb = rr->addReissueKeyBinding(XKMSStatus::Indeterminate);
 			pkb->setEncryptionKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usekeywith") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usekeywith") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			if (++paramCount >= argc + 1) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1900,7 +1900,7 @@ XKMSMessageAbstractType * createReissueR
 			pkb->appendUseKeyWithItem(MAKE_UNICODE_STRING(argv[paramCount]), MAKE_UNICODE_STRING(argv[paramCount + 1]));
 			paramCount += 2;
 		}
-		else if (_stricmp(argv[paramCount], "--authenticate") == 0 || _stricmp(argv[paramCount], "-a") == 0) {
+		else if (strcasecmp(argv[paramCount], "--authenticate") == 0 || strcasecmp(argv[paramCount], "-a") == 0) {
 			if (++paramCount >= argc + 1) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1931,8 +1931,8 @@ XKMSMessageAbstractType * createReissueR
 
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0 ||
-				_stricmp(argv[paramCount], "--sign-rsa") == 0 || _stricmp(argv[paramCount], "-sr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0 ||
+				strcasecmp(argv[paramCount], "--sign-rsa") == 0 || strcasecmp(argv[paramCount], "-sr") == 0) {
 			if (paramCount >= argc + 2) {
 				printReissueRequestUsage();
 				delete rr;
@@ -1973,7 +1973,7 @@ XKMSMessageAbstractType * createReissueR
 			}
 			XSECCryptoKey *key;
 			DSIGSignature * sig;
-			if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0) {
+			if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0) {
 
 				// Check type is correct
 
@@ -2024,8 +2024,8 @@ XKMSMessageAbstractType * createReissueR
 
 			
 		} /* argv[1] = "sign dsa/rsa" */
-		else if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0 ||
-				_stricmp(argv[paramCount], "--add-value-rsa") == 0 || _stricmp(argv[paramCount], "-vr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0 ||
+				strcasecmp(argv[paramCount], "--add-value-rsa") == 0 || strcasecmp(argv[paramCount], "-vr") == 0) {
 			if (paramCount >= argc + 2) {
 				printReissueRequestUsage();
 				delete rr;
@@ -2070,7 +2070,7 @@ XKMSMessageAbstractType * createReissueR
 				pkb = rr->addReissueKeyBinding(XKMSStatus::Indeterminate);
 
 
-			if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0) {
+			if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0) {
 
 				// Check type is correct
 
@@ -2181,8 +2181,8 @@ void printRecoverRequestUsage(void) {
 XKMSMessageAbstractType * createRecoverRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int &paramCount, XKMSCompoundRequest * cr = NULL) {
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printRegisterRequestUsage();
 		return NULL;
@@ -2198,9 +2198,9 @@ XKMSMessageAbstractType * createRecoverR
 	else
 		rr = cr->createRecoverRequest(MAKE_UNICODE_STRING(argv[paramCount++]));
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--add-name") == 0 || _stricmp(argv[paramCount], "-n") == 0) {
+		if (strcasecmp(argv[paramCount], "--add-name") == 0 || strcasecmp(argv[paramCount], "-n") == 0) {
 			if (++paramCount >= argc) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2213,7 +2213,7 @@ XKMSMessageAbstractType * createRecoverR
 			rkb->appendKeyName(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-opaque") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-opaque") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2222,7 +2222,7 @@ XKMSMessageAbstractType * createRecoverR
 			rr->appendOpaqueClientDataItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-respondwith") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-respondwith") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2231,7 +2231,7 @@ XKMSMessageAbstractType * createRecoverR
 			rr->appendRespondWithItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-responsemechanism") == 0 || _stricmp(argv[paramCount], "-m") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-responsemechanism") == 0 || strcasecmp(argv[paramCount], "-m") == 0) {
 			if (++paramCount >= argc) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2240,28 +2240,28 @@ XKMSMessageAbstractType * createRecoverR
 			rr->appendResponseMechanismItem(MAKE_UNICODE_STRING(argv[paramCount]));
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-sig") == 0 || _stricmp(argv[paramCount], "-us") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-sig") == 0 || strcasecmp(argv[paramCount], "-us") == 0) {
 			XKMSRecoverKeyBinding * rkb = rr->getRecoverKeyBinding();
 			if (rkb == NULL)
 				rkb = rr->addRecoverKeyBinding(XKMSStatus::Indeterminate);
 			rkb->setSignatureKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-exc") == 0 || _stricmp(argv[paramCount], "-ux") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-exc") == 0 || strcasecmp(argv[paramCount], "-ux") == 0) {
 			XKMSRecoverKeyBinding * rkb = rr->getRecoverKeyBinding();
 			if (rkb == NULL)
 				rkb = rr->addRecoverKeyBinding(XKMSStatus::Indeterminate);
 			rkb->setExchangeKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usage-enc") == 0 || _stricmp(argv[paramCount], "-ue") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usage-enc") == 0 || strcasecmp(argv[paramCount], "-ue") == 0) {
 			XKMSRecoverKeyBinding * rkb = rr->getRecoverKeyBinding();
 			if (rkb == NULL)
 				rkb = rr->addRecoverKeyBinding(XKMSStatus::Indeterminate);
 			rkb->setEncryptionKeyUsage();
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "--add-usekeywith") == 0 || _stricmp(argv[paramCount], "-u") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-usekeywith") == 0 || strcasecmp(argv[paramCount], "-u") == 0) {
 			if (++paramCount >= argc + 1) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2274,7 +2274,7 @@ XKMSMessageAbstractType * createRecoverR
 			rkb->appendUseKeyWithItem(MAKE_UNICODE_STRING(argv[paramCount]), MAKE_UNICODE_STRING(argv[paramCount + 1]));
 			paramCount += 2;
 		}
-		else if (_stricmp(argv[paramCount], "--kek") == 0 || _stricmp(argv[paramCount], "-k") == 0) {
+		else if (strcasecmp(argv[paramCount], "--kek") == 0 || strcasecmp(argv[paramCount], "-k") == 0) {
 			if (++paramCount >= argc) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2283,7 +2283,7 @@ XKMSMessageAbstractType * createRecoverR
 			g_authPassPhrase = argv[paramCount++];
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--output-private-key") == 0 || _stricmp(argv[paramCount], "-p") == 0) {
+		else if (strcasecmp(argv[paramCount], "--output-private-key") == 0 || strcasecmp(argv[paramCount], "-p") == 0) {
 			if (paramCount >= argc + 2) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2294,7 +2294,7 @@ XKMSMessageAbstractType * createRecoverR
 			g_privateKeyPassPhrase = argv[paramCount++];
 		}
 #endif		
-		else if (_stricmp(argv[paramCount], "--authenticate") == 0 || _stricmp(argv[paramCount], "-a") == 0) {
+		else if (strcasecmp(argv[paramCount], "--authenticate") == 0 || strcasecmp(argv[paramCount], "-a") == 0) {
 			if (++paramCount >= argc + 1) {
 				printRecoverRequestUsage();
 				delete rr;
@@ -2325,8 +2325,8 @@ XKMSMessageAbstractType * createRecoverR
 
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0 ||
-				_stricmp(argv[paramCount], "--sign-rsa") == 0 || _stricmp(argv[paramCount], "-sr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0 ||
+				strcasecmp(argv[paramCount], "--sign-rsa") == 0 || strcasecmp(argv[paramCount], "-sr") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -2367,7 +2367,7 @@ XKMSMessageAbstractType * createRecoverR
 			}
 			XSECCryptoKey *key;
 			DSIGSignature * sig;
-			if (_stricmp(argv[paramCount], "--sign-dsa") == 0 || _stricmp(argv[paramCount], "-sd") == 0) {
+			if (strcasecmp(argv[paramCount], "--sign-dsa") == 0 || strcasecmp(argv[paramCount], "-sd") == 0) {
 
 				// Check type is correct
 
@@ -2418,8 +2418,8 @@ XKMSMessageAbstractType * createRecoverR
 
 			
 		} /* argv[1] = "sign dsa/rsa" */
-		else if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0 ||
-				_stricmp(argv[paramCount], "--add-value-rsa") == 0 || _stricmp(argv[paramCount], "-vr") == 0) {
+		else if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0 ||
+				strcasecmp(argv[paramCount], "--add-value-rsa") == 0 || strcasecmp(argv[paramCount], "-vr") == 0) {
 			if (paramCount >= argc + 2) {
 				printRegisterRequestUsage();
 				delete rr;
@@ -2464,7 +2464,7 @@ XKMSMessageAbstractType * createRecoverR
 				rkb = rr->addRecoverKeyBinding(XKMSStatus::Indeterminate);
 
 
-			if (_stricmp(argv[paramCount], "--add-value-dsa") == 0 || _stricmp(argv[paramCount], "-vd") == 0) {
+			if (strcasecmp(argv[paramCount], "--add-value-dsa") == 0 || strcasecmp(argv[paramCount], "-vd") == 0) {
 
 				// Check type is correct
 
@@ -2537,8 +2537,8 @@ void printPendingRequestUsage(void) {
 XKMSMessageAbstractType * createPendingRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int paramCount) {
 
 	if (paramCount  >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printPendingRequestUsage();
 		return NULL;
@@ -2550,9 +2550,9 @@ XKMSMessageAbstractType * createPendingR
 	XKMSPendingRequest * pr = 
 		factory->createPendingRequest(MAKE_UNICODE_STRING(argv[paramCount++]), doc);
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--original-request-id") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		if (strcasecmp(argv[paramCount], "--original-request-id") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printPendingRequestUsage();
 				delete pr;
@@ -2561,7 +2561,7 @@ XKMSMessageAbstractType * createPendingR
 
 			pr->setOriginalRequestId(MAKE_UNICODE_STRING(argv[paramCount++]));
 		}
-		else if (_stricmp(argv[paramCount], "--response-id") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--response-id") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printPendingRequestUsage();
 				delete pr;
@@ -2597,8 +2597,8 @@ void printStatusRequestUsage(void) {
 XKMSMessageAbstractType * createStatusRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int paramCount) {
 
 	if (paramCount  >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printStatusRequestUsage();
 		return NULL;
@@ -2610,9 +2610,9 @@ XKMSMessageAbstractType * createStatusRe
 	XKMSStatusRequest * sr = 
 		factory->createStatusRequest(MAKE_UNICODE_STRING(argv[paramCount++]), doc);
 
-	while (paramCount < argc && _stricmp(argv[paramCount], "--") != 0) {
+	while (paramCount < argc && strcasecmp(argv[paramCount], "--") != 0) {
 
-		if (_stricmp(argv[paramCount], "--original-request-id") == 0 || _stricmp(argv[paramCount], "-o") == 0) {
+		if (strcasecmp(argv[paramCount], "--original-request-id") == 0 || strcasecmp(argv[paramCount], "-o") == 0) {
 			if (++paramCount >= argc) {
 				printStatusRequestUsage();
 				delete sr;
@@ -2621,7 +2621,7 @@ XKMSMessageAbstractType * createStatusRe
 
 			sr->setOriginalRequestId(MAKE_UNICODE_STRING(argv[paramCount++]));
 		}
-		else if (_stricmp(argv[paramCount], "--response-id") == 0 || _stricmp(argv[paramCount], "-r") == 0) {
+		else if (strcasecmp(argv[paramCount], "--response-id") == 0 || strcasecmp(argv[paramCount], "-r") == 0) {
 			if (++paramCount >= argc) {
 				printStatusRequestUsage();
 				delete sr;
@@ -2653,8 +2653,8 @@ void printCompoundRequestUsage(void) {
 XKMSMessageAbstractType * createCompoundRequest(XSECProvider &prov, DOMDocument **doc, int argc, char ** argv, int paramCount) {
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 
 		printCompoundRequestUsage();
 		return NULL;
@@ -2668,8 +2668,8 @@ XKMSMessageAbstractType * createCompound
 
 	while (paramCount < argc) {
 
-		if ((_stricmp(argv[paramCount], "LocateRequest") == 0) ||
-			(_stricmp(argv[paramCount], "lr") == 0)) {
+		if ((strcasecmp(argv[paramCount], "LocateRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "lr") == 0)) {
 
 			paramCount++;
 			XKMSLocateRequest * r = 
@@ -2681,8 +2681,8 @@ XKMSMessageAbstractType * createCompound
 			}
 
 		}
-		else if ((_stricmp(argv[paramCount], "ValidateRequest") == 0) ||
-			(_stricmp(argv[paramCount], "vr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "ValidateRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "vr") == 0)) {
 
 			paramCount++;
 			XKMSValidateRequest * r = 
@@ -2701,7 +2701,7 @@ XKMSMessageAbstractType * createCompound
 			return NULL;
 		}
 
-		if (paramCount < argc && _stricmp(argv[paramCount], "--") == 0)
+		if (paramCount < argc && strcasecmp(argv[paramCount], "--") == 0)
 			paramCount++;
 	}
 
@@ -3884,14 +3884,14 @@ int doMsgCreate(int argc, char ** argv, 
 	XKMSMessageAbstractType *msg;
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 		printMsgCreateUsage();
 		return -1;
 	}
 
-	if ((_stricmp(argv[paramCount], "LocateRequest") == 0) ||
-		(_stricmp(argv[paramCount], "lr") == 0)) {
+	if ((strcasecmp(argv[paramCount], "LocateRequest") == 0) ||
+		(strcasecmp(argv[paramCount], "lr") == 0)) {
 
 		paramCount++;
 		msg = createLocateRequest(prov, &doc, argc, argv, paramCount);
@@ -3962,22 +3962,22 @@ int doRequest(int argc, char ** argv, in
 	char * originalRequestId = NULL;
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 		printDoRequestUsage();
 		return -1;
 	}
 
 	while (!parmsDone) {
-		if ((_stricmp(argv[paramCount], "--two-phase") == 0) ||
-			(_stricmp(argv[paramCount], "-t") == 0)) {
+		if ((strcasecmp(argv[paramCount], "--two-phase") == 0) ||
+			(strcasecmp(argv[paramCount], "-t") == 0)) {
 
 			twoPhase = true;
 			paramCount++;
 
 		}
-		else if ((_stricmp(argv[paramCount], "--nonce") == 0) ||
-			(_stricmp(argv[paramCount], "-n") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "--nonce") == 0) ||
+			(strcasecmp(argv[paramCount], "-n") == 0)) {
 
 			paramCount++;
 			if (paramCount == argc) {
@@ -3987,8 +3987,8 @@ int doRequest(int argc, char ** argv, in
 
 			nonce=argv[paramCount++];
 		}
-		else if ((_stricmp(argv[paramCount], "--original-requestid") == 0) ||
-			(_stricmp(argv[paramCount], "-o") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "--original-requestid") == 0) ||
+			(strcasecmp(argv[paramCount], "-o") == 0)) {
 
 			paramCount++;
 			if (paramCount == argc) {
@@ -3998,8 +3998,8 @@ int doRequest(int argc, char ** argv, in
 
 			originalRequestId=argv[paramCount++];
 		}		
-		else if ((_stricmp(argv[paramCount], "--envelope") == 0) ||
-			(_stricmp(argv[paramCount], "-e") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "--envelope") == 0) ||
+			(strcasecmp(argv[paramCount], "-e") == 0)) {
 
 			// Set the wrapper envelope type
 
@@ -4009,13 +4009,13 @@ int doRequest(int argc, char ** argv, in
 				return -1;
 			}
 
-			if (_stricmp(argv[paramCount], "NONE") == 0) {
+			if (strcasecmp(argv[paramCount], "NONE") == 0) {
 				et = XSECSOAPRequestorSimple::ENVELOPE_NONE;
 			}
-			else if (_stricmp(argv[paramCount], "SOAP11") == 0) {
+			else if (strcasecmp(argv[paramCount], "SOAP11") == 0) {
 				et = XSECSOAPRequestorSimple::ENVELOPE_SOAP11;
 			}
-			else if (_stricmp(argv[paramCount], "SOAP12") == 0) {
+			else if (strcasecmp(argv[paramCount], "SOAP12") == 0) {
 				et = XSECSOAPRequestorSimple::ENVELOPE_SOAP12;
 			}
 			else {
@@ -4024,8 +4024,8 @@ int doRequest(int argc, char ** argv, in
 			}
 			paramCount++;
 		}
-		else if ((_stricmp(argv[paramCount], "LocateRequest") == 0) ||
-			(_stricmp(argv[paramCount], "lr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "LocateRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "lr") == 0)) {
 
 			paramCount++;
 			XKMSLocateRequest * r = 
@@ -4042,8 +4042,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "ValidateRequest") == 0) ||
-			(_stricmp(argv[paramCount], "vr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "ValidateRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "vr") == 0)) {
 
 			paramCount++;
 			XKMSValidateRequest * r = 
@@ -4059,8 +4059,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "RegisterRequest") == 0) ||
-			(_stricmp(argv[paramCount], "rr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "RegisterRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "rr") == 0)) {
 
 			paramCount++;
 			XKMSRegisterRequest * r = 
@@ -4076,8 +4076,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "RevokeRequest") == 0) ||
-			(_stricmp(argv[paramCount], "er") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "RevokeRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "er") == 0)) {
 
 			paramCount++;
 			XKMSRevokeRequest * r = 
@@ -4093,8 +4093,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}		
-		else if ((_stricmp(argv[paramCount], "RecoverRequest") == 0) ||
-			(_stricmp(argv[paramCount], "or") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "RecoverRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "or") == 0)) {
 
 			paramCount++;
 			XKMSRecoverRequest * r = 
@@ -4110,8 +4110,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "ReissueRequest") == 0) ||
-			(_stricmp(argv[paramCount], "ir") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "ReissueRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "ir") == 0)) {
 
 			paramCount++;
 			XKMSReissueRequest * r = 
@@ -4127,8 +4127,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "PendingRequest") == 0) ||
-			(_stricmp(argv[paramCount], "pr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "PendingRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "pr") == 0)) {
 
 			paramCount++;
 			XKMSPendingRequest * r = 
@@ -4144,8 +4144,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "StatusRequest") == 0) ||
-			(_stricmp(argv[paramCount], "sr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "StatusRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "sr") == 0)) {
 
 			paramCount++;
 			XKMSStatusRequest * r = 
@@ -4161,8 +4161,8 @@ int doRequest(int argc, char ** argv, in
 			parmsDone = true;
 
 		}
-		else if ((_stricmp(argv[paramCount], "CompoundRequest") == 0) ||
-			(_stricmp(argv[paramCount], "cr") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "CompoundRequest") == 0) ||
+			(strcasecmp(argv[paramCount], "cr") == 0)) {
 
 			XKMSCompoundRequest * r = 
 				(XKMSCompoundRequest *) (createCompoundRequest(prov, &doc, argc, argv, paramCount + 1));
@@ -4367,29 +4367,29 @@ int doMsgDump(int argc, char ** argv, in
 	bool doValidate = false;
 
 	if (paramCount >= argc || 
-		(_stricmp(argv[paramCount], "--help") == 0) ||
-		(_stricmp(argv[paramCount], "-h") == 0)) {
+		(strcasecmp(argv[paramCount], "--help") == 0) ||
+		(strcasecmp(argv[paramCount], "-h") == 0)) {
 		printMsgDumpUsage();
 		return -1;
 	}
 
 	while (paramCount < argc-1) {
-		if ((_stricmp(argv[paramCount], "--validate") == 0) ||
-			(_stricmp(argv[paramCount], "-v") == 0)) {
+		if ((strcasecmp(argv[paramCount], "--validate") == 0) ||
+			(strcasecmp(argv[paramCount], "-v") == 0)) {
 
 			doValidate = true;
 			paramCount++;
 
 		}
-		else if ((_stricmp(argv[paramCount], "--auth-phrase") == 0) ||
-			(_stricmp(argv[paramCount], "-a") == 0)) {
+		else if ((strcasecmp(argv[paramCount], "--auth-phrase") == 0) ||
+			(strcasecmp(argv[paramCount], "-a") == 0)) {
 
 			paramCount++;
 			g_authPassPhrase = argv[paramCount];
 			paramCount++;
 		}
 #if defined (XSEC_HAVE_OPENSSL)
-		else if (_stricmp(argv[paramCount], "--output-private-key") == 0 || _stricmp(argv[paramCount], "-p") == 0) {
+		else if (strcasecmp(argv[paramCount], "--output-private-key") == 0 || strcasecmp(argv[paramCount], "-p") == 0) {
 			if (paramCount >= argc + 2) {
 				printMsgDumpUsage();
 				return -1;
@@ -4522,23 +4522,23 @@ int evaluate(int argc, char ** argv) {
 
 	while (paramCount < argc) {
 
-		if (_stricmp(argv[paramCount], "--text") == 0 || _stricmp(argv[paramCount], "-t") == 0) {
+		if (strcasecmp(argv[paramCount], "--text") == 0 || strcasecmp(argv[paramCount], "-t") == 0) {
 			g_txtOut = true;
 			paramCount++;
 		}
-		else if (_stricmp(argv[paramCount], "MsgDump") == 0 || _stricmp(argv[paramCount], "md") == 0) {
+		else if (strcasecmp(argv[paramCount], "MsgDump") == 0 || strcasecmp(argv[paramCount], "md") == 0) {
 			
 			// Perform a MsgDump operation
 			return doMsgDump(argc, argv, paramCount +1);
 
 		}
-		else if (_stricmp(argv[paramCount], "MsgCreate") == 0 || _stricmp(argv[paramCount], "mc") == 0) {
+		else if (strcasecmp(argv[paramCount], "MsgCreate") == 0 || strcasecmp(argv[paramCount], "mc") == 0) {
 			
 			// Perform a MsgDump operation
 			return doMsgCreate(argc, argv, paramCount +1);
 
 		}
-		else if (_stricmp(argv[paramCount], "Request") == 0 || _stricmp(argv[paramCount], "req") == 0) {
+		else if (strcasecmp(argv[paramCount], "Request") == 0 || strcasecmp(argv[paramCount], "req") == 0) {
 			
 			// Perform a MsgDump operation
 			return doRequest(argc, argv, paramCount +1);
