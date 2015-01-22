$NetBSD$

--- SDL_perl.xs.orig	2015-01-17 04:06:02.000000000 +0000
+++ SDL_perl.xs
@@ -22,7 +22,7 @@
 #endif 
 
 #ifdef HAVE_SDL_MIXER
-#include <SDL_mixer.h>
+#include <SDL/SDL_mixer.h>
 void (*mix_music_finished_cv)();
 #endif
 
