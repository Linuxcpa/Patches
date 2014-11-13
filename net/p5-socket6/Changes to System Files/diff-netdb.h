$NetBSD$

--- netdb.h.orig	2014-10-24 00:31:47.000000000 +0000
+++ netdb.h
@@ -262,10 +262,7 @@ void			setprotoent(int);
 void			setservent(int);
 int				getaddrinfo(const char *, const char *,
 					const struct addrinfo *, struct addrinfo **);
-int				getnameinfo(const struct sockaddr *, socklen_t, char *,
-					socklen_t, char *, socklen_t, int);
 void			freeaddrinfo(struct addrinfo *);
-const char		*gai_strerror(int);
 
 struct hostent	*gethostbyaddr_r(const char *, int, int, struct hostent *,
 					char *, int, int *);
