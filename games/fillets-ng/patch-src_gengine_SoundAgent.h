$NetBSD$

--- src/gengine/SoundAgent.h.orig	2004-08-03 15:44:10.000000000 +0000
+++ src/gengine/SoundAgent.h
@@ -8,8 +8,8 @@ class BaseMsg;
 #include "Name.h"
 #include "IntMsg.h"
 
-#include "SDL.h"
-#include "SDL_mixer.h"
+#include <SDL/SDL.h>
+#include <SDL/SDL_mixer.h>
 #include <string>
 
 /**
