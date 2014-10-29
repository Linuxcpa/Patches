$NetBSD$

--- unix/unix.c.orig	2009-01-23 23:31:26.000000000 +0000
+++ unix/unix.c
@@ -1302,9 +1302,6 @@ int set_symlnk_attribs(__G__ slnk_entry)
       TTrace((stderr,
         "set_symlnk_attribs:  restoring Unix attributes for\n        %s\n",
         FnFilter1(slnk_entry->fname)));
-      if (lchmod(slnk_entry->fname,
-                 filtattr(__G__ *(unsigned *)(zvoid *)slnk_entry->buf)))
-          perror("lchmod (file attributes) error");
 # endif /* !NO_LCHMOD */
     }
     /* currently, no error propagation... */
