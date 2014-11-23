$NetBSD$

--- clients/uil/Uil.h.orig	2014-11-20 06:52:12.000000000 +0000
+++ clients/uil/Uil.h
@@ -281,15 +281,6 @@ extern int yydebug;
 #define FONT_UNIT 113
 #define FONT_UNITS 114
 
-/* Value type.  */
-#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
-typedef int YYSTYPE;
-# define YYSTYPE_IS_TRIVIAL 1
-# define YYSTYPE_IS_DECLARED 1
-#endif
-
-
-extern YYSTYPE yylval;
 
 int yyparse (void);
 
