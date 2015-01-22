$NetBSD$

--- game/Audio.cpp.orig	2005-07-15 04:31:12.000000000 +0000
+++ game/Audio.cpp
@@ -25,8 +25,8 @@
 #include <sys/types.h>
 #include <sys/stat.h>
 
-#include "SDL.h"
-#include "SDL_mixer.h"
+#include <SDL/SDL.h>
+#include <SDL/SDL_mixer.h>
 
 Audio::Audio():
   _sampleManager(0),
