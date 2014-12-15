$NetBSD$

--- pconsole.c.orig	2001-04-09 08:51:49.000000000 +0000
+++ pconsole.c
@@ -19,7 +19,7 @@
 /*
 	pconsole.c	WJ101
 */
-
+#include <termios.h>
 #include "config.h"
 #include "pconsole.h"
 #include "commands.h"
@@ -157,7 +157,7 @@ Conn *c, *c_next;
 
 			if (c->fd > 0) {
 				seteuid(0);											/* regain root privs */
-				if (ioctl(c->fd, TIOCSTI, &kar) == -1) {			/* simulate terminal input */
+				if (ioctl(c->fd, TIOCSCTTY, &kar) == -1) {			/* simulate terminal input */
 					seteuid(getuid());								/* drop root privs again */
 					printf("\nioctl() : %s\n", strerror(errno));
 					if (c->hostname != NULL)
