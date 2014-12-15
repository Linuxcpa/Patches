$NetBSD$

--- audioplugin/MP3/mpg123/mpg123.h.orig	2001-07-27 12:53:36.000000000 +0000
+++ audioplugin/MP3/mpg123/mpg123.h
@@ -3,7 +3,6 @@
 #include        <signal.h>
 
 #ifndef WIN32
-#include        <sys/signal.h>
 #include        <unistd.h>
 #endif
 
