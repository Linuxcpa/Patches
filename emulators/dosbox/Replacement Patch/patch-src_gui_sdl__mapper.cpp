$NetBSD: patch-src_gui_sdl__mapper.cpp,v 1.1 2014/04/17 00:49:51 wiz Exp $

Avoid overrunning array.

--- src/gui/sdl_mapper.cpp.orig	2010-05-10 18:58:06.061341696 +0000
+++ src/gui/sdl_mapper.cpp
@@ -26,7 +26,7 @@
 #include <stdio.h>
 #include <assert.h>
 
-
+#include <SDL/SDL_syswm.h>
 #include "SDL.h"
 #include "SDL_thread.h"
 
@@ -2384,9 +2384,11 @@ void MAPPER_StartUp(Section * sec) {
 	mapper.sticks.num=0;
 	mapper.sticks.num_groups=0;
 	Bitu i;
-	for (i=0; i<16; i++) {
+	for (i=0; i<MAX_VJOY_BUTTONS; i++) {
 		virtual_joysticks[0].button_pressed[i]=false;
 		virtual_joysticks[1].button_pressed[i]=false;
+	}
+	for (i=0; i<16; i++) {
 		virtual_joysticks[0].hat_pressed[i]=false;
 		virtual_joysticks[1].hat_pressed[i]=false;
 	}
@@ -2424,25 +2426,7 @@ void MAPPER_StartUp(Section * sec) {
 		sdlkey_map[0x41]=SDLK_KP6;
 #elif !defined (WIN32) /* => Linux & BSDs */
 		bool evdev_input = false;
-#ifdef C_X11_XKB
-		SDL_SysWMinfo info;
-		SDL_VERSION(&info.version);
-		if (SDL_GetWMInfo(&info)) {
-			XkbDescPtr desc = NULL;
-			if((desc = XkbGetMap(info.info.x11.display,XkbAllComponentsMask,XkbUseCoreKbd))) {
-				if(XkbGetNames(info.info.x11.display,XkbAllNamesMask,desc) == 0) {
-					const char* keycodes = XGetAtomName(info.info.x11.display, desc->names->keycodes);
-//					const char* geom = XGetAtomName(info.info.x11.display, desc->names->geometry);
-					if(keycodes) {
-						LOG(LOG_MISC,LOG_NORMAL)("keyboard type %s",keycodes);
-						if (strncmp(keycodes,"evdev",5) == 0) evdev_input = true;
-					}
-					XkbFreeNames(desc,XkbAllNamesMask,True);
-				}
-			XkbFreeClientMap(desc,0,True);
-			}
-		}
-#endif
+
 		if (evdev_input) {
 			sdlkey_map[0x67]=SDLK_UP;
 			sdlkey_map[0x6c]=SDLK_DOWN;
