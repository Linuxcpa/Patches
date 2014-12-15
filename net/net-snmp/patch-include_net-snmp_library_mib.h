$NetBSD$

--- include/net-snmp/library/mib.h.orig	2014-02-20 00:36:42.000000000 +0000
+++ include/net-snmp/library/mib.h
@@ -332,14 +332,6 @@ SOFTWARE.
                                                const struct enum_list *,
                                                const char *, const char *);
 
-    int             sprint_realloc_counter64(u_char ** buf,
-                                             size_t * buf_len,
-                                             size_t * out_len,
-                                             int allow_realloc,
-                                             const netsnmp_variable_list *,
-                                             const struct enum_list *,
-                                             const char *, const char *);
-
     int             sprint_realloc_badtype(u_char ** buf, size_t * buf_len,
                                            size_t * out_len,
                                            int allow_realloc,
