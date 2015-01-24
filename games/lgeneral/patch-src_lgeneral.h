$NetBSD$

--- src/lgeneral.h.orig	2002-05-19 15:12:28.000000000 +0000
+++ src/lgeneral.h
@@ -25,7 +25,7 @@ General system includes.
 */
 #include <SDL.h>
 #ifdef WITH_SOUND
-    #include <SDL_mixer.h>
+    #include <SDL/SDL_mixer.h>
     #include "audio.h"
 #endif
 #include <stdlib.h>
