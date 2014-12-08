$NetBSD$

--- hw/xfree86/common/xf86Opt.h.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86Opt.h
@@ -41,7 +41,7 @@ typedef union {
     unsigned long num;
     char *str;
     double realnum;
-    Bool bool;
+    Bool boolean;
     OptFrequency freq;
 } ValueUnion;
 
