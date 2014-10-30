$NetBSD$

--- src/netserver.c.orig	2012-06-19 20:35:17.000000000 +0000
+++ src/netserver.c
@@ -47,6 +47,7 @@
 char	netserver_id[]="\
 @(#)netserver.c (c) Copyright 1993-2012 Hewlett-Packard Co. Version 2.6.0";
 
+#include <sys/select.h>
 
 #ifdef HAVE_CONFIG_H
 #include "config.h"
