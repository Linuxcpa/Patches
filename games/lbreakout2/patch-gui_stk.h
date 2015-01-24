$NetBSD$

--- gui/stk.h.orig	2010-10-04 13:40:45.000000000 +0000
+++ gui/stk.h
@@ -20,7 +20,7 @@
 
 #include <SDL.h>
 #ifdef AUDIO_ENABLED
-  #include <SDL_mixer.h>
+  #include <SDL/SDL_mixer.h>
 #endif
 
 /* GENERAL */
