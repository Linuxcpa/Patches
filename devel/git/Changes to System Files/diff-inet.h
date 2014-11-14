$NetBSD$

--- inet.h.orig	2014-10-24 00:31:47.000000000 +0000
+++ inet.h
@@ -32,8 +32,6 @@ char*			inet_neta(u_long source, char* d
 u_long			inet_netof(struct in_addr address);
 u_long			inet_network(const char* addressString);
 char*			inet_ntoa(struct in_addr address);
-const char*		inet_ntop(int family, const void* source, char* dest,
-					socklen_t destSize);
 int				inet_pton(int family, const char* sourceString, void* dest);
 u_int			inet_nsap_addr(const char* sourceString, u_char* dest,
 					int destSize);
