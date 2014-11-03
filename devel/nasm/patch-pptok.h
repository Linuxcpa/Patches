$NetBSD$

--- pptok.h.orig	2014-02-20 00:04:18.000000000 +0000
+++ pptok.h
@@ -109,7 +109,7 @@ enum pp_conditional {
     PPC_IFMACRO      =  16,
     PPC_IFNUM        =  18,
     PPC_IFSTR        =  20,
-    PPC_IFTOKEN      =  22,
+    PPC_IFTOKEN      =  22
 };
 
 #define PP_COND(x)     ((enum pp_conditional)((x) & 0x1e))
