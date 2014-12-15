$NetBSD: patch-src_netsys_netsys__c.c,v 1.4 2013/12/12 18:13:17 jperkin Exp $

DragonFly doesn't define AT_SYMLINK_FOLLOW.  The added patch will
at least unbreak the build for some code that obviously won't work.
https://sourceforge.net/tracker/?func=detail&aid=3545170&group_id=19774&atid=319774

Also work around absence of AT_REMOVEDIR, as on NetBSD 6.0.

--- src/netsys/netsys_c.c.orig	2013-08-30 18:38:26.011272192 +0000
+++ src/netsys/netsys_c.c
@@ -228,23 +228,6 @@ CAMLprim value netsys_fsync(value fd) {
 #endif
 }
 
-
-CAMLprim value netsys_fdatasync(value fd) {
-#ifdef HAVE_FDATASYNC
-    int r;
-#ifdef _XOPEN_REALTIME
-    r = fsync(Int_val(fd));
-#else
-    r = fdatasync(Int_val(fd));
-#endif
-    if (r == -1) 
-	uerror("fdatasync", Nothing);
-    return Val_unit;
-#else
-    invalid_argument("Netsys.fdatasync not available");
-#endif
-}
-
 CAMLprim value netsys_fchdir(value fd) {
 #ifdef HAVE_FCHDIR
     if (fchdir(Int_val(fd)) == -1) uerror("fchdir", Nothing);
@@ -428,6 +411,10 @@ CAMLprim value netsys_at_fdcwd(value dum
 #define AT_SYMLINK_NOFOLLOW 0
 #endif
 
+#ifndef AT_REMOVEDIR
+#define AT_REMOVEDIR 0
+#endif
+
 static int at_flags_table[] = {
     AT_EACCESS, AT_SYMLINK_NOFOLLOW, AT_REMOVEDIR
 };
@@ -479,8 +466,8 @@ CAMLprim value netsys_openat(value dirfd
     if (ret == -1) uerror("openat", path);
 #if defined(NEED_CLOEXEC_EMULATION) && defined(FD_CLOEXEC)
     if (convert_flag_list(flags, open_cloexec_table) != 0) {
-        int flags = fcntl(fd, F_GETFD, 0);
-        if (flags == -1 || fcntl(fd, F_SETFD, flags | FD_CLOEXEC) == -1)
+        int flags = fcntl(dirfd, F_GETFD, 0);
+        if (flags == -1 || fcntl(dirfd, F_SETFD, flags | FD_CLOEXEC) == -1)
           uerror("openat", path);
     }
 #endif
@@ -545,7 +532,7 @@ CAMLprim value netsys_renameat(value old
 CAMLprim value netsys_linkat(value olddirfd, value oldpath,
 			     value newdirfd, value newpath, value flags)
 {
-#ifdef HAVE_AT
+#if defined(HAVE_AT) && defined(AT_SYMLINK_FOLLOW)
     int cv_flags;
     cv_flags = convert_flag_list(flags, at_flags_table);
     cv_flags &= AT_SYMLINK_FOLLOW;  /* only allowed flag here */
