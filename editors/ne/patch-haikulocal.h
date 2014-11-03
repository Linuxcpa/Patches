$NetBSD$

--- haikulocal.h.orig	2014-11-03 06:25:12.083099648 +0000
+++ haikulocal.h
@@ -0,0 +1,18 @@
+/*************************************************
+*       The E text editor - 2nd incarnation      *
+*************************************************/
+
+/* Written by Richard Brooksby, starting June 1997, for FreeBSD */
+/* This file last modified for NetBSD: July 1999 by PH (after Ben Harris) */
+/* This file last modified for Haiku 15 years later on November 2, 2014 by Mama (James Leone) */
+
+/* This file is specific to the support of Haiku */
+
+#include <fcntl.h>
+#include <sys/ioctl.h>
+#include "/boot/home/pkg/include/ncurses/termcap.h"
+#include <termios.h>
+
+#define TERM_H "/boot/home/pkg/include/ncurses/termcap.h"
+
+/* End of haikulocal.h */
