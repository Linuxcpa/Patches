$NetBSD$

--- Xtranslcl.c.orig	2013-11-25 08:54:59.000000000 +0000
+++ Xtranslcl.c
@@ -248,7 +248,7 @@ static void _dummy(int sig _X_UNUSED)
 #ifndef X11_t
 #define X_STREAMS_DIR	"/dev/X"
 #else
-#define X_STREAMS_DIR	"/tmp/.X11-pipe"
+#define X_STREAMS_DIR	"/boot/home/pkg/tmp/.X11-pipe"
 #endif
 #endif
 
@@ -258,7 +258,7 @@ static void _dummy(int sig _X_UNUSED)
 
 #define PTSNODENAME "/dev/X/server."
 #ifdef sun
-#define NAMEDNODENAME "/tmp/.X11-pipe/X"
+#define NAMEDNODENAME "/boot/home/pkg/tmp/.X11-pipe/X"
 #else
 #define NAMEDNODENAME "/dev/X/Nserver."
 
@@ -268,7 +268,7 @@ static void _dummy(int sig _X_UNUSED)
 #endif
 #if defined(XIM_t)
 #ifdef sun
-#define NAMEDNODENAME "/tmp/.XIM-pipe/XIM"
+#define NAMEDNODENAME "/boot/home/pkg/tmp/.XIM-pipe/XIM"
 #else
 #define PTSNODENAME	"/dev/X/XIM."
 #define NAMEDNODENAME	"/dev/X/NXIM."
@@ -278,7 +278,7 @@ static void _dummy(int sig _X_UNUSED)
 #endif
 #if defined(FS_t) || defined (FONT_t)
 #ifdef sun
-#define NAMEDNODENAME	"/tmp/.font-pipe/fs"
+#define NAMEDNODENAME	"/boot/home/pkg/tmp/.font-pipe/fs"
 #else
 /*
  * USL has already defined something here. We need to check with them
@@ -292,7 +292,7 @@ static void _dummy(int sig _X_UNUSED)
 #endif
 #if defined(ICE_t)
 #ifdef sun
-#define NAMEDNODENAME	"/tmp/.ICE-pipe/"
+#define NAMEDNODENAME	"/boot/home/pkg/tmp/.ICE-pipe/"
 #else
 #define PTSNODENAME	"/dev/X/ICE."
 #define NAMEDNODENAME	"/dev/X/NICE."
@@ -302,7 +302,7 @@ static void _dummy(int sig _X_UNUSED)
 #endif
 #if defined(TEST_t)
 #ifdef sun
-#define NAMEDNODENAME	"/tmp/.Test-unix/test"
+#define NAMEDNODENAME	"/boot/home/pkg/tmp/.Test-unix/test"
 #endif
 #define PTSNODENAME	"/dev/X/transtest."
 #define NAMEDNODENAME	"/dev/X/Ntranstest."
