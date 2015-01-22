$NetBSD$

--- src/gengine/Dialog.h.orig	2004-11-11 21:12:44.000000000 +0000
+++ src/gengine/Dialog.h
@@ -4,7 +4,7 @@
 #include "NoCopy.h"
 #include "StringTool.h"
 
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 #include <string>
 
 /**
