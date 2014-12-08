$NetBSD: patch-id3ed.cc,v 1.1 2014/04/21 18:17:05 joerg Exp $

--- id3ed.cc.orig	2003-01-10 03:03:13.003932160 +0000
+++ id3ed.cc
@@ -1,3 +1,4 @@
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
@@ -354,7 +355,7 @@ void genreedit(unsigned char &d){
 #ifdef HAVE_LIBREADLINE
 	char *str=NULL;
 	my_rl_default=def;
-	rl_startup_hook=(Function*)set_rl_default;
+	rl_startup_hook=set_rl_default;
 #ifdef HAVE_SET_H
 	(const char *(*)(const char *,int))rl_completion_entry_function=genre_generator;
 #endif
@@ -404,7 +405,7 @@ void stredit(const char * name, int maxl
 	char *str;
 	sprintf(prompt,"%s[max:%i]: ",name,maxlen);
 	my_rl_default=def;
-	rl_startup_hook=(Function*)set_rl_default;
+	rl_startup_hook=set_rl_default;
 	if((str=readline(prompt))){
 		strncpy(buf,str,maxlen);
 		if (*str){
