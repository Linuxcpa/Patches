$NetBSD$

--- nasm.h.orig	2014-02-20 00:04:04.000000000 +0000
+++ nasm.h
@@ -106,7 +106,7 @@ enum out_type {
     OUT_REL1ADR,    /* 1-byte relative address */
     OUT_REL2ADR,    /* 2-byte relative address */
     OUT_REL4ADR,    /* 4-byte relative address */
-    OUT_REL8ADR,    /* 8-byte relative address */
+    OUT_REL8ADR    /* 8-byte relative address */
 };
 
 /*
@@ -228,7 +228,7 @@ enum token_type { /* token types, other 
     TOKEN_STRFUNC,      /* __utf16*__, __utf32*__ */
     TOKEN_IFUNC,        /* __ilog2*__ */
     TOKEN_DECORATOR,    /* decorators such as {...} */
-    TOKEN_OPMASK,       /* translated token for opmask registers */
+    TOKEN_OPMASK       /* translated token for opmask registers */
 };
 
 enum floatize {
@@ -239,7 +239,7 @@ enum floatize {
     FLOAT_80M,
     FLOAT_80E,
     FLOAT_128L,
-    FLOAT_128H,
+    FLOAT_128H
 };
 
 /* Must match the list in string_transform(), in strfunc.c */
@@ -249,14 +249,14 @@ enum strfunc {
     STRFUNC_UTF16BE,
     STRFUNC_UTF32,
     STRFUNC_UTF32LE,
-    STRFUNC_UTF32BE,
+    STRFUNC_UTF32BE
 };
 
 enum ifunc {
     IFUNC_ILOG2E,
     IFUNC_ILOG2W,
     IFUNC_ILOG2F,
-    IFUNC_ILOG2C,
+    IFUNC_ILOG2C
 };
 
 size_t string_transform(char *, size_t, char **, enum strfunc);
@@ -632,7 +632,7 @@ enum ea_type {
     EA_SCALAR,      /* Scalar EA */
     EA_XMMVSIB,     /* XMM vector EA */
     EA_YMMVSIB,     /* YMM vector EA */
-    EA_ZMMVSIB,     /* ZMM vector EA */
+    EA_ZMMVSIB     /* ZMM vector EA */
 };
 
 /*
