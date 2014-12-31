$NetBSD$

--- src/sound.h.orig	2004-12-07 00:42:47.055574528 +0000
+++ src/sound.h
@@ -14,7 +14,6 @@ const char rcsid_sound_h[] = "@(#)$KmKId
 
 #if !defined(_WIN32) && !defined(__CYGWIN__)
 # include <sys/ipc.h>
-# include <sys/shm.h>
 #endif
 
 #define SOUND_SHM_SAMP_SIZE		(32*1024)
