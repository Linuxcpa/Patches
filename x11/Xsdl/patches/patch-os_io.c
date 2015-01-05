$NetBSD$

--- os/io.c.orig	2009-10-09 04:08:29.020185088 +0000
+++ os/io.c
@@ -627,8 +627,8 @@ FlushAllOutput(void)
 #ifndef WIN32
     for (base = 0; base < howmany(XFD_SETSIZE, NFDBITS); base++)
     {
-	mask = OutputPending.fds_bits[ base ];
-	OutputPending.fds_bits[ base ] = 0;
+	mask = OutputPending.bits[ base ];
+	OutputPending.bits[ base ] = 0;
 	while (mask)
 	{
 	    index = ffs(mask) - 1;
