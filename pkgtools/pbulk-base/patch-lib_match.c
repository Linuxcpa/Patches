$NetBSD$

--- lib/match.c.orig	2014-11-21 08:24:23.000000000 +0000
+++ lib/match.c
@@ -2,5 +2,5 @@
 
 /*
- * Copyright © 2002 Alistair G. Crooks.  All rights reserved.
+ * Copyright 2002 Alistair G. Crooks.  All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -29,4 +29,5 @@
  */
 
+#include <strings.h>
 #include <nbcompat.h>
 
