$NetBSD$

--- target-xtensa/xtensa-semi.c.orig	2014-08-01 14:12:17.000000000 +0000
+++ target-xtensa/xtensa-semi.c
@@ -95,59 +95,52 @@ enum {
 
 static uint32_t errno_h2g(int host_errno)
 {
-    static const uint32_t guest_errno[] = {
-        [EPERM]         = TARGET_EPERM,
-        [ENOENT]        = TARGET_ENOENT,
-        [ESRCH]         = TARGET_ESRCH,
-        [EINTR]         = TARGET_EINTR,
-        [EIO]           = TARGET_EIO,
-        [ENXIO]         = TARGET_ENXIO,
-        [E2BIG]         = TARGET_E2BIG,
-        [ENOEXEC]       = TARGET_ENOEXEC,
-        [EBADF]         = TARGET_EBADF,
-        [ECHILD]        = TARGET_ECHILD,
-        [EAGAIN]        = TARGET_EAGAIN,
-        [ENOMEM]        = TARGET_ENOMEM,
-        [EACCES]        = TARGET_EACCES,
-        [EFAULT]        = TARGET_EFAULT,
+	switch (host_errno) {
+		case 0: return 0;
+		case EPERM: return TARGET_EPERM;
+		case ENOENT: return TARGET_ENOENT;
+		case ESRCH: return TARGET_ESRCH;
+		case EINTR: return TARGET_EINTR;
+		case EIO: return TARGET_EIO;
+		case ENXIO: return TARGET_ENXIO;
+		case E2BIG: return TARGET_E2BIG;
+		case ENOEXEC: return TARGET_ENOEXEC;
+		case EBADF: return TARGET_EBADF;
+		case ECHILD: return TARGET_ECHILD;
+		case EAGAIN: return TARGET_EAGAIN;
+		case ENOMEM: return TARGET_ENOMEM;
+		case EACCES: return TARGET_EACCES;
+		case EFAULT: return TARGET_EFAULT;
 #ifdef ENOTBLK
-        [ENOTBLK]       = TARGET_ENOTBLK,
+		case ENOTBLK: return TARGET_ENOTBLK;
 #endif
-        [EBUSY]         = TARGET_EBUSY,
-        [EEXIST]        = TARGET_EEXIST,
-        [EXDEV]         = TARGET_EXDEV,
-        [ENODEV]        = TARGET_ENODEV,
-        [ENOTDIR]       = TARGET_ENOTDIR,
-        [EISDIR]        = TARGET_EISDIR,
-        [EINVAL]        = TARGET_EINVAL,
-        [ENFILE]        = TARGET_ENFILE,
-        [EMFILE]        = TARGET_EMFILE,
-        [ENOTTY]        = TARGET_ENOTTY,
+		case EBUSY: return TARGET_EBUSY;
+		case EEXIST: return TARGET_EEXIST;
+		case EXDEV: return TARGET_EXDEV;
+		case ENODEV: return TARGET_ENODEV;
+		case ENOTDIR: return TARGET_ENOTDIR;
+		case EISDIR: return TARGET_EISDIR;
+		case EINVAL: return TARGET_EINVAL;
+		case ENFILE: return TARGET_ENFILE;
+		case EMFILE: return TARGET_EMFILE;
+		case ENOTTY: return TARGET_ENOTTY;
 #ifdef ETXTBSY
-        [ETXTBSY]       = TARGET_ETXTBSY,
+		case ETXTBSY: return TARGET_ETXTBSY;
 #endif
-        [EFBIG]         = TARGET_EFBIG,
-        [ENOSPC]        = TARGET_ENOSPC,
-        [ESPIPE]        = TARGET_ESPIPE,
-        [EROFS]         = TARGET_EROFS,
-        [EMLINK]        = TARGET_EMLINK,
-        [EPIPE]         = TARGET_EPIPE,
-        [EDOM]          = TARGET_EDOM,
-        [ERANGE]        = TARGET_ERANGE,
-        [ENOSYS]        = TARGET_ENOSYS,
+		case EFBIG: return TARGET_EFBIG;
+		case ENOSPC: return TARGET_ENOSPC;
+		case ESPIPE: return TARGET_ESPIPE;
+		case EROFS: return TARGET_EROFS;
+		case EMLINK: return TARGET_EMLINK;
+		case EPIPE: return TARGET_EPIPE;
+		case EDOM: return TARGET_EDOM;
+		case ERANGE: return TARGET_ERANGE;
+		case ENOSYS: return TARGET_ENOSYS;
 #ifdef ELOOP
-        [ELOOP]         = TARGET_ELOOP,
+		case ELOOP: return TARGET_ELOOP;
 #endif
     };
-
-    if (host_errno == 0) {
-        return 0;
-    } else if (host_errno > 0 && host_errno < ARRAY_SIZE(guest_errno) &&
-            guest_errno[host_errno]) {
-        return guest_errno[host_errno];
-    } else {
-        return TARGET_EINVAL;
-    }
+    return TARGET_EINVAL;
 }
 
 void HELPER(simcall)(CPUXtensaState *env)
