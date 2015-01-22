$NetBSD$

--- src/engine.c.orig	2007-08-14 18:55:16.000000000 +0000
+++ src/engine.c
@@ -21,8 +21,8 @@
 #define _ENGINE_CORE_
 #include"main.h"
 #include"engine.h"
-#include"SDL_plus.h"
-#include"SDL_mixer.h"
+#include "SDL_plus.h"
+#include <SDL/SDL_mixer.h>
 
 #include<stdlib.h>
 #include<string.h>
