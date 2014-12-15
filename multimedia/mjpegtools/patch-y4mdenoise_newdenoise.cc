$NetBSD$

--- y4mdenoise/newdenoise.cc.orig	2009-04-26 17:40:20.000000000 +0000
+++ y4mdenoise/newdenoise.cc
@@ -1,7 +1,7 @@
 // This file (C) 2004-2009 Steven Boswell.  All rights reserved.
 // Released to the public under the GNU General Public License v2.
 // See the file COPYING for more information.
-
+#include <pthread.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
