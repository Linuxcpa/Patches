$NetBSD$

--- libgcc/crtstuff.c.orig	2013-02-04 19:06:20.035127296 +0000
+++ libgcc/crtstuff.c
@@ -102,7 +102,9 @@ call_ ## FUNC (void)					\
     && defined(HAVE_LD_EH_FRAME_HDR) \
     && !defined(inhibit_libc) && !defined(CRTSTUFFT_O) \
     && defined(__GLIBC__) && __GLIBC__ >= 2
+#ifndef __HAIKU__
 #include <link.h>
+#endif
 /* uClibc pretends to be glibc 2.2 and DT_CONFIG is defined in its link.h.
    But it doesn't use PT_GNU_EH_FRAME ELF segment currently.  */
 # if !defined(__UCLIBC__) \
