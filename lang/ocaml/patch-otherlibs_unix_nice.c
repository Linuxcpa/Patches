$NetBSD$

--- otherlibs/unix/nice.c.orig	2012-10-15 17:50:56.032505856 +0000
+++ otherlibs/unix/nice.c
@@ -22,7 +22,11 @@ CAMLprim value unix_nice(value incr)
 {
   int ret;
   errno = 0;
+#ifdef __HAIKU__
+  ret = 0;
+#else
   ret = nice(Int_val(incr));
+#endif
   if (ret == -1 && errno != 0) uerror("nice", Nothing);
   return Val_int(ret);
 }
