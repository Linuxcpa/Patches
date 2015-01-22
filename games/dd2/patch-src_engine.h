$NetBSD$

--- src/engine.h.orig	2007-08-14 18:55:10.000000000 +0000
+++ src/engine.h
@@ -25,8 +25,8 @@
 #define DD2_DATA="./data"
 #endif
 
-#include "SDL.h"
-#include "SDL_mixer.h"
+#include <SDL/SDL.h>
+#include <SDL/SDL_mixer.h>
 
 /* player data */
 typedef struct pdesc {
