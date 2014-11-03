$NetBSD$

--- quote.c.orig	2014-02-20 00:04:04.000000000 +0000
+++ quote.c
@@ -235,7 +235,7 @@ size_t nasm_unquote(char *str, char **ep
 	st_backslash,
 	st_hex,
 	st_oct,
-	st_ucs,
+	st_ucs
     } state;
     int ndig = 0;
     int32_t nval = 0;
