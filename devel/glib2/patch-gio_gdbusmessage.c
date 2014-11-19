$NetBSD$

--- gio/gdbusmessage.c.orig	2013-08-07 14:36:32.009437184 +0000
+++ gio/gdbusmessage.c
@@ -3444,7 +3444,7 @@ g_dbus_message_print (GDBusMessage *mess
       g_string_append (str, "()");
     }
   g_string_append (str, "\n");
-#ifdef G_OS_UNIX
+#if defined(G_OS_UNIX) && !defined(G_PLATFORM_HAIKU)
   g_string_append_printf (str, "%*sUNIX File Descriptors:\n", indent, "");
   if (message->fd_list != NULL)
     {
