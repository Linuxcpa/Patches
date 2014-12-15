$NetBSD$

--- include/irc.h.orig	2014-03-17 20:38:49.000000000 +0000
+++ include/irc.h
@@ -1,4 +1,4 @@
-/*
+net/*
  * irc.h: header file for all of ircII! 
  *
  * Written By Michael Sandrof
@@ -34,6 +34,8 @@
  * @(#)$eterna: irc.h,v 1.122 2014/03/17 18:51:41 mrg Exp $
  */
 
+#include <strings.h>
+#include <stdio.h>
 #ifndef irc__irc_h
 #define irc__irc_h
 
@@ -94,7 +96,7 @@
 #endif /* HAVE_SYS_FILE_H */
 
 #ifdef HAVE_NETDB_H
-# include <netdb.h>
+# include "netdb.h"
 #endif /* HAVE_NETDB_H */
 
 #ifdef HAVE_PROCESS_H
