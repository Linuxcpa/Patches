/boot/pkg/bin/pkgdiff: line 100: egrep: command not found
/boot/pkg/bin/pkgdiff: line 106: [: !=: unary operator expected
$NetBSD$

--- crypto/evp/e_aes_cbc_hmac_sha1.c.orig	2013-02-11 15:26:04.036962304 +0000
+++ crypto/evp/e_aes_cbc_hmac_sha1.c
@@ -88,7 +88,7 @@ typedef struct
 #if	defined(AES_ASM) &&	( \
 	defined(__x86_64)	|| defined(__x86_64__)	|| \
 	defined(_M_AMD64)	|| defined(_M_X64)	|| \
-	defined(__INTEL__)	)
+	defined(__INTEL__)	) && !defined(__HAIKU__)
 
 #if defined(__GNUC__) && __GNUC__>=2 && !defined(PEDANTIC)
 # define BSWAP(x) ({ unsigned int r=(x); asm ("bswapl %0":"=r"(r):"0"(r)); r; })
