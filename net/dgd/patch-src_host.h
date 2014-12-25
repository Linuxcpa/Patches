$NetBSD$

--- src/host.h.orig	2000-12-12 11:03:40.045088768 +0000
+++ src/host.h
@@ -32,7 +32,7 @@ typedef unsigned int Uint;
 # include "host/telnet.h"
 # endif
 
-# include <stdlib.h>
+# include "stdlib.h"
 # include <string.h>
 # include <setjmp.h>
 # include <stdio.h>
@@ -251,13 +251,9 @@ typedef unsigned int Uint;
 # include <sys/types.h>
 # include <unistd.h>
 
-# ifdef INCLUDE_FILE_IO
 # include <fcntl.h>
 # include <sys/stat.h>
-# ifndef FNDELAY
-# define FNDELAY	O_NDELAY
-# endif
-# endif
+
 
 # ifdef INCLUDE_CTYPE
 # include <ctype.h>
