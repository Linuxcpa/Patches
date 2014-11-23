$NetBSD$

--- packets.h.orig	2004-12-24 16:46:15.000000000 +0000
+++ packets.h
@@ -39,7 +39,7 @@
 struct mdd_packet {
 	int	mdd_operation;
 	off_t	mdd_offset;
-	size_t	mdd_data_size;
+	socklen_t	mdd_data_size;
 	char 	*mdd_data;
 };
 
