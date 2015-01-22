$NetBSD$

--- src/gengine/SDLSoundAgent.h.orig	2004-07-30 20:08:55.000000000 +0000
+++ src/gengine/SDLSoundAgent.h
@@ -3,8 +3,8 @@
 
 #include "SoundAgent.h"
 
-#include "SDL.h"
-#include "SDL_mixer.h"
+#include <SDL/SDL.h>
+#include <SDL/SDL_mixer.h>
 #include <string>
 
 /**
