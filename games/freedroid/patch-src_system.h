$NetBSD$

--- src/system.h.orig	2003-08-07 09:43:33.000000000 +0000
+++ src/system.h
@@ -87,6 +87,6 @@
 #include "SDL_image.h"
 
 #ifdef HAVE_LIBSDL_MIXER
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 #endif
 
