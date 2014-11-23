$NetBSD$

--- mdd.h.orig	2005-03-18 12:53:47.000000000 +0000
+++ mdd.h
@@ -37,8 +37,8 @@ extern int quiet;
 extern int debug;
 extern int verbose;
 
-void sender(char *, size_t, in_addr_t, u_char);
-void receiver(char *, size_t, struct timeval, in_addr_t, u_char);
+void sender(char *, int, in_addr_t, u_char);
+void receiver(char *, int, struct timeval, in_addr_t, u_char);
 void sniffer(in_addr_t, int);
 in_addr_t local_addr(in_addr_t);
 void print_report(off_t);
