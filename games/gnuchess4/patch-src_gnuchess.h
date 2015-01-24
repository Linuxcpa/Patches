$NetBSD$

--- src/gnuchess.h.orig	1998-09-28 06:41:21.000000000 +0000
+++ src/gnuchess.h
@@ -110,7 +110,7 @@ ShowDBLine (CHAR *, SHORT, SHORT,
 #define printz printf
 #define scanz scanf
 #else
-#include <curses.h>
+#include <ncurses/curses.h>
 #define scanz fflush(stdout),scanw
 #define printz printw
 #endif
