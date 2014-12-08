$NetBSD$

--- sbin/install.sh.orig	2000-12-03 13:28:51.000000000 +0000
+++ sbin/install.sh
@@ -144,28 +144,28 @@ chmod 755 $EXEC_DIR/libexec/* $EXEC_DIR/
 	fi
 
 	rm -f bin/Archive.pl
-	ln bin/archive.pl bin/Archive.pl
+	ln -sf bin/archive.pl bin/Archive.pl
 
 	rm -f bin/Archive.sh
-	ln bin/archive.sh bin/Archive.sh
+	ln -sf bin/archive.sh bin/Archive.sh
 
 	rm -f libexec/listserv_compat.pl
-	ln libexec/fmlserv.pl libexec/listserv_compat.pl
+	ln -sf libexec/fmlserv.pl libexec/listserv_compat.pl
 
 	rm -f libexec/majordomo_compat.pl
-	ln libexec/fmlserv.pl libexec/majordomo_compat.pl
+	ln -sf libexec/fmlserv.pl libexec/majordomo_compat.pl
 
 	rm -f libexec/fml_local2.pl
-	ln libexec/fml_local.pl libexec/fml_local2.pl
+	ln -sf libexec/fml_local.pl libexec/fml_local2.pl
 
 	rm -f bin/fml_local.pl
-	ln libexec/fml_local.pl bin/fml_local.pl
+	ln -sf libexec/fml_local.pl bin/fml_local.pl
 
 	rm -f bin/pop2recv.pl
-	ln libexec/popfml.pl bin/pop2recv.pl
+	ln -sf libexec/popfml.pl bin/pop2recv.pl
 
 	rm -f bin/inc_via_pop.pl
-	ln bin/pop2recv.pl bin/inc_via_pop.pl
+	ln -sf bin/pop2recv.pl bin/inc_via_pop.pl
 
 	# 2000/06/29
 	# /usr/local/fml/drafts/*.{jp,en} are obsolete.
