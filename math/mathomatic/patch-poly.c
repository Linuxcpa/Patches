$NetBSD$

--- poly.c.orig	2012-09-02 14:32:18.000000000 +0000
+++ poly.c
@@ -38,7 +38,7 @@ The chief copyright holder can be contac
 George Gesslein II, P.O. Box 224, Lansing, NY  14882-0224  USA.
  
  */
-
+#include <strings.h>
 #include "includes.h"
 
 #define	REMAINDER_IS_ZERO()	(n_trhs == 1 && trhs[0].kind == CONSTANT && trhs[0].token.constant == 0.0)
