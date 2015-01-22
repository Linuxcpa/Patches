$NetBSD$

--- gemdropx.c.orig	2002-02-12 08:45:34.000000000 +0000
+++ gemdropx.c
@@ -41,7 +41,7 @@
 #endif
 
 #ifndef NOSOUND
-#include <SDL_mixer.h>
+#include <SDL/SDL_mixer.h>
 #endif
 
 #ifndef EMBEDDED
