$NetBSD$

--- linuxdoom-1.10/d_main.c.orig	1997-12-22 20:32:03.058195968 +0000
+++ linuxdoom-1.10/d_main.c
@@ -577,8 +577,11 @@ void IdentifyVersion (void)
     char *doomwaddir;
     doomwaddir = getenv("DOOMWADDIR");
     if (!doomwaddir)
+#ifdef INSTALL_PREFIX
+	doomwaddir = INSTALL_PREFIX"/share/doom";
+#else    
 	doomwaddir = ".";
-
+#endif
     // Commercial.
     doom2wad = malloc(strlen(doomwaddir)+1+9+1);
     sprintf(doom2wad, "%s/doom2.wad", doomwaddir);
@@ -804,7 +807,30 @@ void D_DoomMain (void)
 	
     setbuf (stdout, NULL);
     modifiedgame = false;
-	
+
+    if (myargc > 1 && strcmp(myargv[1], "-h")==0)
+    {
+	printf(
+"Many options are not explained, and some are just plain broken.\n\
+Some more useful ones are:\n\
+  -2 -3 -4	Scale the window by 2, 3, or 4 times.\n\
+  -config	FILE	Load/save configuration from FILE.\n\
+  -episode N	Set starting expisode to N.\n\
+  -grabmouse	Grab the mouse to control movement.\n\
+  -volume N	Set volume (default 8).\n\
+  -skill N	Set starting skill level to N.\n\
+\n\
+Others are:\n\
+-altdeath   -debugfile	-file	    -nodraw	-respawn    -warp \n\
+-avg	    -devparm	-geom	    -nomonsters	-shdev	    -wart \n\
+-cdrom	    -disp	-loadgame   -playdemo	-statcopy \n\
+-comdev	    -dup	-maxdemo    -port	-timedemo \n\
+-extratic	-net	    -record	-timer \n\
+-deathmatch -fast	-noblit	    -regdev	-turbo \n\
+");
+    exit(0);
+    }
+
     nomonsters = M_CheckParm ("-nomonsters");
     respawnparm = M_CheckParm ("-respawn");
     fastparm = M_CheckParm ("-fast");
@@ -1014,6 +1040,15 @@ void D_DoomMain (void)
     printf ("M_LoadDefaults: Load system defaults.\n");
     M_LoadDefaults ();              // load before initing other systems
 
+    /* Must be after M_LoadDefaults */
+    p = M_CheckParm ("-volume");
+    if (p && p < myargc-1)
+    {
+	int vol = atoi(myargv[p+1]);
+	S_SetSfxVolume(vol);
+	S_SetMusicVolume(vol);
+    }
+
     printf ("Z_Init: Init zone memory allocation daemon. \n");
     Z_Init ();
 
