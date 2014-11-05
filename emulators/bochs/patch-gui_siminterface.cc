$NetBSD$

--- gui/siminterface.cc.orig	2013-02-17 08:27:43.000000000 +0000
+++ gui/siminterface.cc
@@ -24,6 +24,7 @@
 // Basically, the siminterface is visible from both the simulator and
 // the configuration user interface, and allows them to talk to each other.
 
+#include <strings.h>
 #include "param_names.h"
 #include "iodev.h"
 #include "virt_timer.h"
