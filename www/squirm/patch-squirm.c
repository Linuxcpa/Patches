$NetBSD$

--- squirm.c.orig	1998-03-13 08:55:12.000000000 +0000
+++ squirm.c
@@ -41,7 +41,7 @@
 #include<stdlib.h>
 #include<string.h>
 #include<unistd.h>
-#include<sys/signal.h>
+#include<signal.h>
 #include<ctype.h>
 
 extern struct pattern_item *phead;        /* from lists.c */
