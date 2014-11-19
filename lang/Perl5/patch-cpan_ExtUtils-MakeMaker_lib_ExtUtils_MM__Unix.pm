--- cpan/ExtUtils-MakeMaker/lib/ExtUtils/MM_Unix.pm.orig	2014-05-13 14:34:13.951582720 +0600
+++ cpan/ExtUtils-MakeMaker/lib/ExtUtils/MM_Unix.pm	2014-05-13 14:36:13.356515840 +0600
@@ -26,6 +26,7 @@
     $Is{OS2}     = $^O eq 'os2';
     $Is{Win32}   = $^O eq 'MSWin32' || $Config{osname} eq 'NetWare';
     $Is{Dos}     = $^O eq 'dos';
+    $Is{Haiku}   = $^O eq 'haiku';
     $Is{VMS}     = $^O eq 'VMS';
     $Is{OSF}     = $^O eq 'dec_osf';
     $Is{IRIX}    = $^O eq 'irix';
