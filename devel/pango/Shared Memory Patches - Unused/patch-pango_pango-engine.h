$NetBSD$

--- pango/pango-engine.h.orig	2014-03-06 04:33:55.036175872 +0000
+++ pango/pango-engine.h
@@ -22,6 +22,7 @@
 #ifndef __PANGO_ENGINE_H__
 #define __PANGO_ENGINE_H__
 
+#include "shm.h"
 #include <pango/pango-types.h>
 #include <pango/pango-item.h>
 #include <pango/pango-font.h>
