$NetBSD$

--- include/bignum.h.orig	2005-08-13 04:07:03.060817408 +0000
+++ include/bignum.h
@@ -21,7 +21,7 @@
  *****************************************************************************/
 #ifndef _bignum_h_
 #define _bignum_h_
-
+#include <stdint.h>
 #include "osd.h"
 #include "tools.h"
 
@@ -60,7 +60,6 @@
 #define	RSASIZE_MIN (RSABITS/3/LIMBBITS)
 #define	RSASIZE_MAX (RSABITS/2/LIMBBITS)
 
-typedef uint32_t cnt_t;
 typedef uint16_t half_t;
 typedef uint32_t limb_t;
 #if HAVE_U64
