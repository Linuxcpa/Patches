$NetBSD$

--- rijndael.h.orig	2014-01-03 22:36:17.000000000 +0000
+++ rijndael.h
@@ -23,7 +23,7 @@
  * 128, 192, or 256 bits, designed by Joan Daemen and Vincent Rijmen.  See
  * http://www.esat.kuleuven.ac.be/~rijmen/rijndael/ for details.
  */
-
+#include <stdint.h>
 #if !defined(RIJNDAEL_H)
 #define RIJNDAEL_H
 
@@ -50,7 +50,7 @@
  * Solaris cc defines __sun
  * MirBSD defines the same types as Solaris
  */
-#if defined( __sun__ ) || defined( __sun ) || defined( __MirBSD__ )
+#if defined( __sun__ ) || defined( __sun ) || defined( __MirBSD__ ) || defined( __Haiku__ )
 	#define _CRYPT_RIJNDAEL_H_TYPES
 	typedef uint32_t UINT32;
 	typedef uint8_t  UINT8;
@@ -72,13 +72,6 @@ systems */
 	typedef u_char    UINT8;
 #endif
 
-/* I expect this to be the usual case */
-#if ! defined(_CRYPT_RIJNDAEL_H_TYPES) && ( defined(_SYS_TYPES_H) || defined(_SYS_TYPES_H_) )   
-	#define _CRYPT_RIJNDAEL_H_TYPES
-	typedef __uint32_t UINT32;
-	typedef __uint8_t  UINT8;
-#endif
-
 #if defined(__CYGWIN__) && ! defined(_CRYPT_RIJNDAEL_H_TYPES)
 	#define _CRYPT_RIJNDAEL_H_TYPES
 	typedef unsigned int  UINT32;
