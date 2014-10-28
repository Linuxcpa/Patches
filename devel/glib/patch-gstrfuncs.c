$NetBSD$

--- gstrfuncs.c.orig	2001-02-27 06:00:22.000000000 +0000
+++ gstrfuncs.c
@@ -702,7 +702,7 @@ g_strsignal (gint signum)
   char *msg;
 
 #ifdef HAVE_STRSIGNAL
-  extern char *strsignal (int sig);
+  extern const char *strsignal (int sig);
   return strsignal (signum);
 #elif NO_SYS_SIGLIST
   switch (signum)
@@ -867,8 +867,7 @@ g_printf_string_upper_bound (const gchar
                   /* beware of positional parameters
                    */
                 case '$':
-                  g_warning (G_GNUC_PRETTY_FUNCTION
-                             "(): unable to handle positional parameters (%%n$)");
+                  g_warning ("%s(): unable to handle positional parameters (%%n$)", G_GNUC_PRETTY_FUNCTION);
                   len += 1024; /* try adding some safety padding */
                   break;
 
@@ -1034,8 +1033,7 @@ g_printf_string_upper_bound (const gchar
                   /*          n   .   dddddddddddddddddddddddd   E   +-  eeee */
                   conv_len += 1 + 1 + MAX (24, spec.precision) + 1 + 1 + 4;
                   if (spec.mod_extra_long)
-                    g_warning (G_GNUC_PRETTY_FUNCTION
-                               "(): unable to handle long double, collecting double only");
+                    g_warning ("%s(): unable to handle long double, collecting double only", G_GNUC_PRETTY_FUNCTION);
 #ifdef HAVE_LONG_DOUBLE
 #error need to implement special handling for long double
 #endif
@@ -1077,8 +1075,7 @@ g_printf_string_upper_bound (const gchar
                   conv_done = TRUE;
                   if (spec.mod_long)
                     {
-                      g_warning (G_GNUC_PRETTY_FUNCTION
-                                 "(): unable to handle wide char strings");
+                      g_warning ("%s(): unable to handle wide char strings", G_GNUC_PRETTY_FUNCTION);
                       len += 1024; /* try adding some safety padding */
                     }
                   break;
@@ -1108,9 +1105,7 @@ g_printf_string_upper_bound (const gchar
                   conv_len += format - spec_start;
                   break;
                 default:
-                  g_warning (G_GNUC_PRETTY_FUNCTION
-                             "(): unable to handle `%c' while parsing format",
-                             c);
+                  g_warning ("%s(): unable to handle `%c' while parsing format", G_GNUC_PRETTY_FUNCTION, c);
                   break;
                 }
               conv_done |= conv_len > 0;
