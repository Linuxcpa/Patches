$NetBSD$

--- cpan/ExtUtils-MakeMaker/lib/ExtUtils/MM_Haiku.pm.orig	2014-02-10 22:12:33.023592960 +0000
+++ cpan/ExtUtils-MakeMaker/lib/ExtUtils/MM_Haiku.pm
@@ -0,0 +1,80 @@
+package ExtUtils::MM_Haiku;
+
+use strict;
+
+=head1 NAME
+
+ExtUtils::MM_Haiku - methods to override UN*X behaviour in ExtUtils::MakeMaker
+
+=head1 SYNOPSIS
+
+ use ExtUtils::MM_Haiku;	# Done internally by ExtUtils::MakeMaker if needed
+
+=head1 DESCRIPTION
+
+See ExtUtils::MM_Unix for a documentation of the methods provided
+there. This package overrides the implementation of these methods, not
+the semantics.
+
+=over 4
+
+=cut
+
+use ExtUtils::MakeMaker::Config;
+use File::Spec;
+require ExtUtils::MM_Any;
+require ExtUtils::MM_Unix;
+
+our @ISA = qw( ExtUtils::MM_Any ExtUtils::MM_Unix );
+our $VERSION = '6.66';
+
+
+sub os_flavor {
+    return('Haiku');
+}
+
+sub init_main {
+    my $self = shift;
+
+    # switch to vendor directories if requested.
+    if ($ENV{'HAIKU_USE_VENDOR_DIRECTORIES'}) {
+        $self->{INSTALLDIRS} ||= 'vendor';
+    }
+
+    $self->SUPER::init_main();
+}
+
+sub init_INSTALL_from_PREFIX {
+    my $self = shift;
+
+	# If a prefix has been given from outside, the default implementation
+	# will set PERLPREFIX, SITEPREFIX and VENDORPREFIX to identical values,
+	# but due to the way how Haiku's package management works, PERLPREFIX
+	# and VENDORPREFIX are not writable at all (as they're being populated
+	# from installed packages via package-fs). SITEPREFIX, however needs to
+	# be set to a path which can be written to (since site packages are
+	# expected to be installed "manually") - so we make sure it points
+	# to a 'non-packaged'-folder:
+    my $prefixGiven = $self->{PREFIX};
+	$self->SUPER::init_INSTALL_from_PREFIX();
+	if ($prefixGiven) {
+        $self->{SITEPREFIX} = '$(PREFIX)/non-packaged';
+    } 
+}
+
+sub init_others {
+    my $self = shift;
+
+	$self->SUPER::init_others();
+
+	# Don't use run-time paths for libraries required by dynamic
+	# modules on Haiku, as that wouldn't work should a library be moved
+	# (for instance because the package has been activated somewhere else).
+    $self->{LD_RUN_PATH} = "";
+
+    return;
+}
+
+1;
+__END__
+
