$NetBSD$

--- src/ltris.h.orig	2013-10-29 14:32:09.000000000 +0000
+++ src/ltris.h
@@ -28,7 +28,7 @@ Global includes.
 #include <string.h>
 #include <SDL.h>
 #ifdef SOUND
-#include <SDL_mixer.h>
+#include <SDL/SDL_mixer.h>
 #include "audio.h"
 #endif
 #include "sdl.h"
