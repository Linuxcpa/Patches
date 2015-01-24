$NetBSD: patch-xsleep.c,v 1.1 2013/02/26 10:29:34 joerg Exp $

--- xsleep.c.orig	1996-10-26 21:31:54.011796480 +0000
+++ xsleep.c
@@ -24,13 +24,15 @@
 #include <signal.h>
 #include "pai.h"
 #include "global.h"
+#include <sys/select.h>
+static void ysleep(int);
 
-xsleep(time_out) {
-	return ysleep(time_out * 10);
+void xsleep(time_out) {
+	ysleep(time_out * 10);
 }
 
 #ifndef HAVE_GETTIMEOFDAY
-ysleep(time_out) {
+static void ysleep(int time_out) {
 	fd_set fds;
 	struct timeval to,*top;
 	int ret = 0;
@@ -51,7 +53,7 @@ static double dtime() {
 	return (now.tv_sec + now.tv_usec * 0.0000001);
 }
 
-ysleep(time_out) {
+static void ysleep(int time_out) {
 	fd_set fds;
 	struct timeval to,*top;
 	double t,now;
