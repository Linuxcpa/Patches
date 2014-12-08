$NetBSD$

--- parse.c.orig	2012-06-28 14:26:24.000000000 +0000
+++ parse.c
@@ -21,7 +21,7 @@ The chief copyright holder can be contac
 George Gesslein II, P.O. Box 224, Lansing, NY  14882-0224  USA.
  
  */
-
+#include <strings.h>
 #include "includes.h"
 
 /*
