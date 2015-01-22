$NetBSD$

--- include/config/ftoption.h.orig	2014-03-01 11:27:34.842792960 +0000
+++ include/config/ftoption.h
@@ -93,7 +93,7 @@ FT_BEGIN_HEADER
   /* them to display normal gray-level anti-aliased glyphs.                */
   /*                                                                       */
 /* #define FT_CONFIG_OPTION_SUBPIXEL_RENDERING */
-
+#define FT_CONFIG_OPTION_SUBPIXEL_RENDERING
 
   /*************************************************************************/
   /*                                                                       */
@@ -605,6 +605,7 @@ FT_BEGIN_HEADER
   /*   defined.                                                            */
   /*                                                                       */
 /* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING */
+#define TT_CONFIG_OPTION_SUBPIXEL_HINTING
 
 
   /*************************************************************************/
