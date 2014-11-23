$NetBSD$

--- color.c.orig	2004-12-27 09:18:47.000000000 +0000
+++ color.c
@@ -34,10 +34,6 @@ static char id[] = "$Header: /pack/anonc
 
 #include <stdio.h>
 
-#if !defined(__NetBSD__)
-#include <values.h>
-#endif
-
 #include <Xm/Xm.h>
 
 #ifdef XQUOTE
