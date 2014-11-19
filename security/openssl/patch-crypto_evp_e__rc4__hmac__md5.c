$NetBSD$

--- crypto/evp/e_rc4_hmac_md5.c.orig	2013-11-06 00:38:01.973340672 +0000
+++ crypto/evp/e_rc4_hmac_md5.c
@@ -104,7 +104,7 @@ static int rc4_hmac_md5_init_key(EVP_CIP
 	defined(__x86_64)	|| defined(__x86_64__)	|| \
 	defined(_M_AMD64)	|| defined(_M_X64)	|| \
 	defined(__INTEL__)		) && \
-	!(defined(__APPLE__) && defined(__MACH__))
+	!(defined(__APPLE__) && defined(__MACH__)) && !defined(__HAIKU__)
 #define	STITCHED_CALL
 #endif
 
