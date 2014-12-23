$NetBSD$

--- libvisual/lv_plugin.h.orig	2005-02-01 08:50:36.000000000 +0000
+++ libvisual/lv_plugin.h
@@ -23,7 +23,7 @@
 
 #ifndef _LV_PLUGIN_H
 #define _LV_PLUGIN_H
-
+#include <stdint.h>
 #include <libvisual/lv_video.h>
 #include <libvisual/lv_audio.h>
 #include <libvisual/lv_palette.h>
