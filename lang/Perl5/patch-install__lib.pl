$NetBSD$

--- install_lib.pl.orig	2014-01-06 22:46:45.024903680 +0000
+++ install_lib.pl
@@ -3,6 +3,7 @@
 # Initialisation code and subroutines shared between installperl and installman
 # Probably installhtml needs to join the club.
 
+use File::Copy;
 use strict;
 use vars qw($Is_VMS $Is_W32 $Is_OS2 $Is_Cygwin $Is_Darwin $Is_NetWare
 	    %opts $packlist);
