$NetBSD$

--- sound.c.orig	2002-05-31 04:06:56.000000000 +0000
+++ sound.c
@@ -21,7 +21,7 @@
 */
 
 #include <SDL.h>
-#include <SDL_mixer.h>
+#include <SDL/SDL_mixer.h>
 #include "icebreaker.h"
 #include "sound.h"
 #include "options.h"
