$NetBSD$

--- mgl_fontinfo.c.orig	2015-01-06 06:23:52.000000000 +0000
+++ mgl_fontinfo.c
@@ -79,7 +79,7 @@ int load_font(char *fname, int width, in
 	}
 	font_base = (char *) mmap((caddr_t)0, f->koffset + f->kbytes*8064,
 				   PROT_READ | (mode?PROT_WRITE:0),
-				   MAP_SHARED | MAP_FILE,
+				   MAP_SHARED | MAP_FIXED, /*Posix Holiness*/
 				   fd, 0);
 	if (font_base == MAP_FAILED) {
 		printf(" -- can't mmap\n");
