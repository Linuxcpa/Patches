SHELL = /bin/sh
NULLCMD = :
n=$(NULLCMD)
ECHO1 = $(V:1=@$n)
RUNCMD = $(SHELL)
CDPATH = .
CHDIR = cd -P
exec = exec
NULL = /dev/null
PATH_SEPARATOR = :

#### Start of system configuration section. ####

srcdir = .
top_srcdir = $(srcdir)
hdrdir = $(srcdir)/include
PLATFORM_DIR = 

CC = gcc
CPP = $(CC) -E
LD = ld
YACC = bison
PURIFY =
AUTOCONF = autoconf

MKFILES = Makefile
BASERUBY = echo executable host ruby is required.  use --with-baseruby option.; false
TEST_RUNNABLE = yes
CROSS_COMPILING = no
DOXYGEN = 

prefix = /boot/home/pkg
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
datarootdir = ${prefix}/share
datadir = ${datarootdir}
arch = i386-haiku
sitearch = ${arch}
sitedir = ${rubylibprefix}/site_ruby
ruby_version = 2.0.0

TESTUI = console
TESTS =
INSTALLDOC = all
DOCTARGETS = rdoc nodoc

EXTOUT = .ext
arch_hdrdir = $(EXTOUT)/include/$(arch)
VPATH = $(arch_hdrdir)/ruby:$(hdrdir)/ruby:$(srcdir)/enc:$(srcdir)/missing

empty =
OUTFLAG = -o $(empty)
COUTFLAG = -o $(empty)
ARCH_FLAG = 
CFLAGS = -Wno-error -I/boot/home/pkg/include/db4 -D_REENTRANT -I/boot/home/pkg/include $(ARCH_FLAG)
cflags =  ${optflags} ${debugflags} ${warnflags}
optflags = -O3 -fno-fast-math
debugflags = -ggdb3
warnflags = -Wall -Wextra -Wno-unused-parameter -Wno-parentheses -Wno-long-long -Wno-missing-field-initializers -Wunused-variable -Wpointer-arith -Wwrite-strings -Wdeclaration-after-statement -Wimplicit-function-declaration 
INCFLAGS = -I. -I$(arch_hdrdir) -I$(hdrdir) -I$(srcdir)
XCFLAGS = -include ruby/config.h -include ruby/missing.h -D_FORTIFY_SOURCE=2 -fno-strict-overflow -fvisibility=hidden -DRUBY_EXPORT
CPPFLAGS = -I/boot/home/pkg/include/db4 -D_REENTRANT -I/boot/home/pkg/include $(DEFS) ${cppflags} $(INCFLAGS)
LDFLAGS =  $(CFLAGS) -L. -Wl,--rpath -L/boot/home/pkg/lib -Wl,-R/boot/home/pkg/lib
EXTLDFLAGS = 
XLDFLAGS =  $(EXTLDFLAGS)
EXTLIBS =
LIBS =  $(EXTLIBS)
MISSING =  ${LIBOBJDIR}setproctitle.o 
LDSHARED = $(LD) -shared
DLDFLAGS = -L/boot/system/lib/libroot.so $(XLDFLAGS) $(ARCH_FLAG)
SOLIBS = $(LIBS)
MAINLIBS = 
ARCHMINIOBJS = dmydln.o
DLNOBJ = dln.o
ENCOBJS = 
EXTOBJS = 
BUILTIN_ENCOBJS =  ascii.$(OBJEXT) us_ascii.$(OBJEXT) unicode.$(OBJEXT) utf_8.$(OBJEXT)
BUILTIN_TRANSSRCS =  newline.c
BUILTIN_TRANSOBJS =  newline.$(OBJEXT)
POSTLINK = :

RUBY_BASE_NAME=ruby
RUBY_PROGRAM_VERSION=2.0.0
RUBY_INSTALL_NAME=$(RUBY_BASE_NAME)200
RUBY_SO_NAME=ruby200
RUBY_RELEASE_DATE=2014-05-08
EXEEXT = 
LIBEXT = a
PROGRAM=$(RUBY_INSTALL_NAME)$(EXEEXT)
RUBY = $(RUBY_INSTALL_NAME)
MINIRUBY = ./miniruby$(EXEEXT) -I$(srcdir)/lib -I. -I$(EXTOUT)/common\
	$(MINIRUBYOPT)
# RUNRUBY_COMMAND:: runruby.rb or baseruby. do not append options directly
RUNRUBY_COMMAND = $(MINIRUBY) $(srcdir)/tool/runruby.rb --extout=$(EXTOUT) $(RUNRUBYOPT)
# RUNRUBY:: run ruby with RUN_OPTS which is passed to ruby
RUNRUBY = $(RUNRUBY_COMMAND) -- $(RUN_OPTS)
# RUNRUBY_DEBUGGER:: debugging option for runruby.rb
RUNRUBY_DEBUGGER = --debugger='gdb -x run.gdb --quiet --args'
XRUBY = $(RUNRUBY)
BTESTRUBY = $(MINIRUBY)\
	$(MINIRUBYOPT)
INSTALL = /bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
INSTALL_PROGRAM = ${INSTALL}
XRUBY_LIBDIR = 
XRUBY_RUBYLIBDIR = 
XRUBY_RUBYHDRDIR = 

DEFAULT_PRELUDES = $(YES_GEM_PRELUDE)

#### End of system configuration section. ####

MAJOR=	2
MINOR=	0
TEENY=	0

LIBRUBY_A     = lib$(RUBY_SO_NAME)-static.a
LIBRUBY_SO    = lib$(RUBY_SO_NAME).so.$(MAJOR).$(MINOR).$(TEENY)
LIBRUBY_ALIASES= lib$(RUBY_SO_NAME).so
LIBRUBY	      = $(LIBRUBY_SO)
LIBRUBYARG    = $(LIBRUBYARG_SHARED)
LIBRUBYARG_STATIC = -Wl,-R -Wl,/boot/home/pkg/lib -L$(libdir) -l$(RUBY_SO_NAME)-static
LIBRUBYARG_SHARED = -Wl,-R -Wl,/boot/home/pkg/lib -L$(libdir) -l$(RUBY_SO_NAME)
LIBRUBY_RELATIVE = no
LIBRUBY_A_OBJS = $(OBJS)

THREAD_MODEL  = pthread

PREP          = miniruby$(EXEEXT)
ARCHFILE      = 
SETUP         =
EXTSTATIC     = 
SET_LC_MESSAGES = env LC_MESSAGES=C

MAKEDIRS      = /bin/mkdir -p
CP            = cp
MV            = mv
RM            = rm -f
RMDIR         = rmdir --ignore-fail-on-non-empty
RMDIRS        = rmdir --ignore-fail-on-non-empty -p
RMALL         = rm -fr
NM            = nm
AR            = ar
ARFLAGS       = rcu
RANLIB        = ranlib
AS            = as
ASFLAGS       =  $(INCFLAGS)
IFCHANGE      = $(srcdir)/tool/ifchange
SET_LC_MESSAGES = env LC_MESSAGES=C
OBJDUMP       = objdump
OBJCOPY       = :
VCS           = echo cannot
VCSUP         = $(VCS)
DTRACE        = 
DTRACE_EXT    = dmyh
DTRACE_OBJ   = 
DTRACE_GLOMMED_OBJ = 

OBJEXT        = o
ASMEXT        = S
DLEXT         = so
MANTYPE	      = man
SYMBOL_PREFIX = 

INSTALLED_LIST= .installed.list

MKMAIN_CMD    = mkmain.sh

NEWLINE_C     = newline.c
MINIPRELUDE_C = miniprelude.c
RBCONFIG      = .rbconfig.time

SRC_FILE      = $<
OS_SRC_FILE   = $<
DEST_FILE     = $@
OS_DEST_FILE  = $@

MESSAGE_BEGIN = @for line in
MESSAGE_END = ; do echo "$$line"; done

configure_args =  '--enable-shared' '--enable-shared=yes' '--program-suffix=200' '--with-soname=ruby200' '--with-ruby-version=2.0.0' '--with-ruby-pc=ruby-2.0.0.pc' '--enable-pthread' '--with-libiconv-prefix=/boot/home/pkg' '--prefix=/boot/home/pkg' '--build=i386-pc-haiku' '--host=i386-pc-haiku' '--mandir=/boot/home/pkg/man' 'build_alias=i386-pc-haiku' 'host_alias=i386-pc-haiku' 'CC=gcc' 'CFLAGS=-Wno-error -I/boot/home/pkg/include/db4 -D_REENTRANT -I/boot/home/pkg/include' 'LDFLAGS=-Wl,--rpath -L/boot/home/pkg/lib -Wl,-R/boot/home/pkg/lib' 'LIBS=' 'CPPFLAGS=-I/boot/home/pkg/include/db4 -D_REENTRANT -I/boot/home/pkg/include' 'CXX=g++' 'CXXFLAGS=-Wno-error -I/boot/home/pkg/include/db4 -D_REENTRANT -I/boot/home/pkg/include'
#### End of variables

.SUFFIXES: .inc .h .c .y .i .$(DTRACE_EXT)

all:

.DEFAULT: all

# Prevent GNU make v3 from overflowing arg limit on SysV.
.NOEXPORT:

miniruby$(EXEEXT):
		@-if test -f $@; then $(MV) -f $@ $@.old; $(RM) $@.old; fi
		$(ECHO) linking $@
		$(Q) $(PURIFY) $(CC) $(LDFLAGS) $(XLDFLAGS) $(NORMALMAINOBJ) $(MINIOBJS) $(COMMONOBJS) $(DMYEXT) $(DTRACE_OBJ) $(MAINLIBS) $(LIBS) $(OUTFLAG)$@

$(PROGRAM):
		@$(RM) $@
		$(ECHO) linking $@
		$(Q) $(PURIFY) $(CC) $(LDFLAGS) $(XLDFLAGS) $(MAINOBJ) $(EXTOBJS) $(LIBRUBYARG) $(MAINLIBS) $(LIBS) $(EXTLIBS) $(OUTFLAG)$@
		$(Q) $(POSTLINK)

# We must `rm' the library each time this rule is invoked because "updating" a
# MAB library on Apple/NeXT (see --enable-fat-binary in configure) is not
# supported.
$(LIBRUBY_A):
		@$(RM) $@
		$(ECHO) linking static-library $@
		$(Q) $(AR) $(ARFLAGS) $@ $(LIBRUBY_A_OBJS) $(DMYEXT)
		@-$(RANLIB) $@ 2> /dev/null || true
		$(ECHO) verifying static-library $@
		@$(PURIFY) $(CC) $(XLDFLAGS) $(MAINOBJ) $(LIBRUBY_A) $(MAINLIBS) $(EXTLIBS) $(LIBS) $(OUTFLAG)conftest$(EXEEXT) $(LDFLAGS)
		@$(RM) conftest$(EXEEXT) conftest.c

$(LIBRUBY_SO):
		@-$(PRE_LIBRUBY_UPDATE)
		$(ECHO) linking shared-library $@
		$(Q) $(LDSHARED) $(DLDFLAGS) $(OBJS) $(DLDOBJS) $(DTRACE_OBJ) $(SOLIBS) $(EXTSOLIBS) $(OUTFLAG)$@
		-$(Q) $(OBJCOPY) -w -L '$(SYMBOL_PREFIX)Init_*' -L '$(SYMBOL_PREFIX)*_threadptr_*' $@
		$(Q) $(POSTLINK)
		@-$(MINIRUBY) -e 'ARGV.each{|link| File.delete link if File.exist? link; \
						  File.symlink "$(LIBRUBY_SO)", link}' \
				$(LIBRUBY_ALIASES) || true
$(arch)-fake.rb: config.status $(srcdir)/template/fake.rb.in
		@./config.status --file=$@:$(srcdir)/template/fake.rb.in
		@chmod +x $@

ruby_pc = ruby-2.0.0.pc
$(ruby_pc):
		@./config.status --file=$@:$(srcdir)/template/ruby.pc.in

install-cross: $(arch)-fake.rb $(RBCONFIG) rbconfig.rb $(arch_hdrdir)/ruby/config.h \
	$(LIBRUBY_A) $(LIBRUBY_SO) $(ARCHFILE)
	$(ECHO) installing cross-compiling stuff
	$(Q) $(MAKEDIRS) $(XRUBY_RUBYLIBDIR)/$(arch) $(XRUBY_RUBYHDRDIR)/$(arch)/ruby
	$(Q) sed '/^\$$:\.unshift/q' $(arch)-fake.rb > fake.rb
	$(Q) $(BASERUBY) -p \
	-e '~/^\s*CONFIG\["LDFLAGS"\]/ and' \
	-e '$$_[/(?=\s*"$$)/] = %q[ #{(CONFIG["LIBPATHFLAG"]%File.dirname(__FILE__)).strip}]' \
	rbconfig.rb > fake-rbconfig.rb
	$(INSTALL_SCRIPT) fake.rb $(XRUBY_RUBYLIBDIR)/$(arch)/fake.rb
	$(INSTALL_SCRIPT) fake-rbconfig.rb $(XRUBY_RUBYLIBDIR)/$(arch)/rbconfig.rb
	@$(RM) fake.rb fake-rbconfig.rb
	$(INSTALL_DATA) $(arch_hdrdir)/ruby/config.h $(XRUBY_RUBYHDRDIR)/$(arch)/ruby
	$(INSTALL_DATA) $(top_srcdir)/include/ruby/win32.h $(XRUBY_RUBYHDRDIR)/ruby
	$(INSTALL_DATA) $(LIBRUBY) $(LIBRUBY_A) $(XRUBY_RUBYLIBDIR)/$(arch)
	$(INSTALL_PROGRAM) $(LIBRUBY_SO) $(XRUBY_RUBYLIBDIR)/$(arch)

Makefile:	$(srcdir)/Makefile.in $(srcdir)/enc/Makefile.in

$(MKFILES): config.status
		@[ -f Makefile ] && mv Makefile Makefile.old
		MAKE=$(MAKE) $(SHELL) ./config.status
		@cmp Makefile Makefile.old > /dev/null 2>&1 && echo Makefile unchanged && exit 0; \
		{ \
		    echo "all:; -@rm -f conftest.mk"; \
		    echo "conftest.mk: .force; @echo AUTO_REMAKE"; \
		    echo ".force:"; \
		} > conftest.mk || exit 1; \
		$(MAKE) -f conftest.mk | grep '^AUTO_REMAKE$$' >/dev/null 2>&1 || \
		{ echo "Makefile updated, restart."; exit 1; }

uncommon.mk: $(srcdir)/common.mk
		sed 's/{\$$([^(){}]*)[^{}]*}//g' $< > $@

.PHONY: reconfig
reconfig-args = $(srcdir)/configure $(configure_args)
config.status-args = ./config.status --recheck
reconfig-exec-0 = exec 3>&1; exit `exec 4>&1; { "$$@" 3>&- 4>&-; echo $$? 1>&4; } | fgrep -v '(cached)' 1>&3`
reconfig-exec-1 = set -x; "$$@"

reconfig config.status:	$(srcdir)/configure $(srcdir)/enc/Makefile.in \
			$(srcdir)/include/ruby/version.h
	@PWD= MINIRUBY="$(MINIRUBY)"; export MINIRUBY; \
	set $(SHELL) $($@-args); $(reconfig-exec-$(V))

$(srcdir)/configure: $(srcdir)/configure.in
	$(CHDIR) $(srcdir) && exec $(AUTOCONF)

incs: id.h
all-incs: probes.h

# Things which should be considered:
# * with gperf v.s. without gperf
# * committers may have various versions of gperf
# * ./configure v.s. ../ruby/configure
# * GNU make v.s. HP-UX make	# HP-UX make invokes the action if lex.c and keywords has same mtime.
# * svn checkout generate a file with mtime as current time
# * ext4 and XFS has a mtime with fractional part
lex.c: defs/keywords
	@\
	if cmp -s $(srcdir)/defs/lex.c.src $?; then \
	  [ $(Q) ] && echo copying $@ || set -x; \
	  $(CP) $(srcdir)/lex.c.blt $@; \
	else \
	  [ $(Q) ] && echo generating $@ || set -x; \
	  gperf -C -p -j1 -i 1 -g -o -t -N rb_reserved_word -k1,3,$$ $? > $@.tmp && \
	  $(MV) $@.tmp $@ && \
	  $(CP) $? $(srcdir)/defs/lex.c.src && \
	  $(CP) $@ $(srcdir)/lex.c.blt; \
	fi

NAME2CTYPE_OPTIONS = -7 -c -j1 -i1 -t -C -P -T -H uniname2ctype_hash -Q uniname2ctype_pool -N uniname2ctype_p

enc/unicode/name2ctype.h: enc/unicode/name2ctype.kwd
	$(MAKEDIRS) $(@D)
	@set +e; \
	if cmp -s $(?:.kwd=.src) $?; then \
	  set -x; \
	  $(CP) $(?:.kwd=.h.blt) $@; \
	else \
	  trap '$(RM) $@-1.h $@-2.h' 0 && \
	  set -x; \
	  sed '/^#ifdef USE_UNICODE_PROPERTIES/,/^#endif/d' $? | gperf $(NAME2CTYPE_OPTIONS) > $@-1.h && \
	  sed '/^#ifdef USE_UNICODE_PROPERTIES/d;/^#endif/d' $? | gperf $(NAME2CTYPE_OPTIONS) > $@-2.h && \
	  diff -DUSE_UNICODE_PROPERTIES $@-1.h $@-2.h > $@.tmp || :; \
	  $(MV) $@.tmp $@ && \
	  $(CP) $? $(?:.kwd=.src) && \
	  $(CP) $@ $(?:.kwd=.h.blt); \
	fi

.c.o:
	@$(ECHO) compiling $<
	$(Q) $(CC) $(CFLAGS) $(XCFLAGS) $(CPPFLAGS) $(COUTFLAG)$@ -c $<

.s.o:
	@$(ECHO) assembling $<
	$(Q) $(AS) $(ASFLAGS) -o $@ $<

.c.S:
	@$(ECHO) translating $<
	$(Q) $(CC) $(CFLAGS) $(XCFLAGS) $(CPPFLAGS) $(COUTFLAG)$@ -S $<

.c.i:
	@$(ECHO) preprocessing $<
	$(Q) $(CPP) $(warnflags) $(XCFLAGS) $(CPPFLAGS) $(COUTFLAG)$@ -E $< > $@

.d.h:
	@$(ECHO) translating probes $<
	$(Q) $(DTRACE) -o $@.tmp -h -C $(INCFLAGS) -s $<
	$(Q) sed -e 's/RUBY_/RUBY_DTRACE_/g' -e 's/PROBES_H_TMP/PROBES_H/g' -e 's/(char \*/(const char */g' -e 's/, char \*/, const char */g' $@.tmp > $@
	$(Q) $(RM) $@.tmp

.dmyh.h:
	@$(ECHO) copying dummy $(DEST_FILE)
	$(Q) $(CP) $(OS_SRC_FILE) $(OS_DEST_FILE)

probes.o: $(srcdir)/probes.d
	@$(ECHO) processing probes in object files
	$(Q) stamp="$*.stamp"; \
	  if test -f "$$stamp" -o -f "$@"; then \
	  $(RM) $(DTRACE_DEPENDENT_OBJS) "$$stamp"; \
	  for o in $(DTRACE_DEPENDENT_OBJS); do \
	    echo "rebuilding $$o which was modified by \"dtrace -G\""; \
	    $(MAKE) "$$o"; \
	  done; \
	fi; \
	touch "$$stamp"
	$(RM) $@
	$(Q) $(DTRACE) -G -C $(INCFLAGS) -s $(srcdir)/probes.d -o $@ $(DTRACE_DEPENDENT_OBJS)

# DTrace static library hacks described here:
# http://mail.opensolaris.org/pipermail/dtrace-discuss/2005-August/000207.html
ruby-glommed.$(OBJEXT):
	@$(ECHO) generating a glommed object with DTrace probes for static library
	$(Q) $(LD) -r -o $@ $(OBJS) $(DTRACE_OBJ)

clean-local::
	$(Q)$(RM) ext/extinit.c ext/extinit.$(OBJEXT) ext/ripper/y.output \
		enc/encinit.c enc/encinit.$(OBJEXT)
	-$(Q)$(RM) $(pkgconfig_DATA)

distclean-local::
	$(Q)$(RM) ext/config.cache $(RBCONFIG) Doxyfile
	-$(Q)$(RM) run.gdb
	-$(Q)$(RM) $(INSTALLED_LIST) $(arch_hdrdir)/ruby/config.h verconf.h
	-$(Q)$(RMDIRS) $(arch_hdrdir)/ruby 2> /dev/null || true

clean-ext distclean-ext realclean-ext::
	@cd ext 2>/dev/null || exit 0; set dummy `echo "${EXTS}" | tr , ' '`; shift; \
	test "$$#" = 0 && set .; \
	set dummy `\
	    find "$$@" -name Makefile -print | sed 's:^\./::;s:/Makefile$$:~:' | sort | sed 's:~$$::'; \
	`; shift; \
	cd ..; \
	for dir do \
	    echo $(@:-ext=)ing "$$dir"; \
	    (cd "ext/$$dir" && exec $(MAKE) $(MFLAGS) $(@:-ext=)) && \
	    case "$@" in \
	    *distclean-ext*|*realclean-ext*) \
		$(RMDIRS) "ext/$$dir" 2> /dev/null || true;; \
	    esac; \
	done
	-$(Q)$(RM) ext/extinit.$(OBJEXT)

distclean-ext realclean-ext::
	-$(Q)$(RM) ext/extinit.c
	-$(Q)$(RMDIR) ext 2> /dev/null || true

clean-extout:
	-$(Q)$(RMDIRS) $(EXTOUT) 2> /dev/null || true

clean-enc distclean-enc realclean-enc:
	@test -f "$(ENC_MK)" || exit 0; \
	echo $(@:-enc=ing) encodings; \
	exec $(MAKE) -f $(ENC_MK) $(MFLAGS) $(@:-enc=)

clean-rdoc distclean-rdoc realclean-rdoc:
	@echo $(@:-rdoc=ing) rdoc
	$(Q)$(RMALL) $(RDOCOUT)
clean-capi distclean-capi realclean-capi:
	@echo $(@:-capi=ing) capi
	$(Q)$(RMALL) $(CAPIOUT)

clean-platform:
	@$(RM) $(PLATFORM_D)
	-$(Q) $(RMDIR) $(PLATFORM_DIR) 2> /dev/null || true

ext/extinit.$(OBJEXT): ext/extinit.c $(SETUP)
	$(ECHO) compiling $@
	$(Q) $(CC) $(CFLAGS) $(XCFLAGS) $(CPPFLAGS) $(COUTFLAG)$@ -c ext/extinit.c

enc/encinit.$(OBJEXT): enc/encinit.c $(SETUP)

up::
	@$(CHDIR) "$(srcdir)" && LC_TIME=C exec $(VCSUP)

update-mspec:
	@$(CHDIR) $(srcdir); \
	if [ -d spec/mspec ]; then \
	  cd spec/mspec; \
	  echo updating mspec ...; \
	  exec git pull; \
	else \
	  echo retrieving mspec ...; \
	  exec git clone $(MSPEC_GIT_URL) spec/mspec; \
	fi

update-rubyspec: update-mspec
	@$(CHDIR) $(srcdir); \
	if [ -d spec/rubyspec ]; then \
	  cd spec/rubyspec; \
	  echo updating rubyspec ...; \
	  exec git pull; \
	else \
	  echo retrieving rubyspec ...; \
	  exec git clone $(RUBYSPEC_GIT_URL) spec/rubyspec; \
	fi

test-rubyspec-precheck:
	@if [ ! -d $(srcdir)/spec/rubyspec ]; then echo No rubyspec here.  make update-rubyspec first.; exit 1; fi

INSNS	= opt_sc.inc optinsn.inc optunifs.inc insns.inc insns_info.inc \
	  vmtc.inc vm.inc

$(INSNS): $(srcdir)/insns.def vm_opts.h \
	  $(srcdir)/defs/opt_operand.def $(srcdir)/defs/opt_insn_unif.def \
	  $(srcdir)/tool/instruction.rb $(srcdir)/tool/insns2vm.rb
	$(ECHO) generating $@
	$(Q) $(BASERUBY) -Ku $(srcdir)/tool/insns2vm.rb $(INSNS2VMOPT) $@

$(MKFILES): $(srcdir)/common.mk
bin: $(PROGRAM) $(WPROGRAM)
lib: $(LIBRUBY)
dll: $(LIBRUBY_SO)

.SUFFIXES: .inc .h .c .y .i .$(DTRACE_EXT)

# V=0 quiet, V=1 verbose.  other values don't work.
V = 0
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO = $(ECHO1:0=@echo)

RUBYLIB       = $(PATH_SEPARATOR)
RUBYOPT       = -
RUN_OPTS      = --disable-gems

SPEC_GIT_BASE = git://github.com/rubyspec
MSPEC_GIT_URL = $(SPEC_GIT_BASE)/mspec.git
RUBYSPEC_GIT_URL = $(SPEC_GIT_BASE)/rubyspec.git

STATIC_RUBY   = static-ruby

EXTCONF       = extconf.rb
LIBRUBY_EXTS  = ./.libruby-with-ext.time
REVISION_H    = ./.revision.time
PLATFORM_D    = ./$(PLATFORM_DIR)/.time
RDOCOUT       = $(EXTOUT)/rdoc
CAPIOUT       = doc/capi

DMYEXT	      = dmyext.$(OBJEXT)
NORMALMAINOBJ = main.$(OBJEXT)
MAINOBJ       = $(NORMALMAINOBJ)
EXTOBJS	      =
DLDOBJS	      = $(DMYEXT)
EXTSOLIBS     =
MINIOBJS      = $(ARCHMINIOBJS) dmyencoding.$(OBJEXT) dmyversion.$(OBJEXT) miniprelude.$(OBJEXT)
ENC_MK        = enc.mk

COMMONOBJS    = array.$(OBJEXT) \
		bignum.$(OBJEXT) \
		class.$(OBJEXT) \
		compar.$(OBJEXT) \
		complex.$(OBJEXT) \
		dir.$(OBJEXT) \
		dln_find.$(OBJEXT) \
		enum.$(OBJEXT) \
		enumerator.$(OBJEXT) \
		error.$(OBJEXT) \
		eval.$(OBJEXT) \
		load.$(OBJEXT) \
		proc.$(OBJEXT) \
		file.$(OBJEXT) \
		gc.$(OBJEXT) \
		hash.$(OBJEXT) \
		inits.$(OBJEXT) \
		io.$(OBJEXT) \
		marshal.$(OBJEXT) \
		math.$(OBJEXT) \
		node.$(OBJEXT) \
		numeric.$(OBJEXT) \
		object.$(OBJEXT) \
		pack.$(OBJEXT) \
		parse.$(OBJEXT) \
		process.$(OBJEXT) \
		random.$(OBJEXT) \
		range.$(OBJEXT) \
		rational.$(OBJEXT) \
		re.$(OBJEXT) \
		regcomp.$(OBJEXT) \
		regenc.$(OBJEXT) \
		regerror.$(OBJEXT) \
		regexec.$(OBJEXT) \
		regparse.$(OBJEXT) \
		regsyntax.$(OBJEXT) \
		ruby.$(OBJEXT) \
		safe.$(OBJEXT) \
		signal.$(OBJEXT) \
		sprintf.$(OBJEXT) \
		st.$(OBJEXT) \
		strftime.$(OBJEXT) \
		string.$(OBJEXT) \
		struct.$(OBJEXT) \
		time.$(OBJEXT) \
		transcode.$(OBJEXT) \
		util.$(OBJEXT) \
		variable.$(OBJEXT) \
		compile.$(OBJEXT) \
		debug.$(OBJEXT) \
		iseq.$(OBJEXT) \
		vm.$(OBJEXT) \
		vm_dump.$(OBJEXT) \
		vm_backtrace.$(OBJEXT) \
		vm_trace.$(OBJEXT) \
		thread.$(OBJEXT) \
		cont.$(OBJEXT) \
		$(BUILTIN_ENCOBJS) \
		$(BUILTIN_TRANSOBJS) \
		$(MISSING)

EXPORTOBJS    = $(DLNOBJ) \
		encoding.$(OBJEXT) \
		version.$(OBJEXT) \
		$(COMMONOBJS)

OBJS          = $(EXPORTOBJS) prelude.$(OBJEXT)
ALLOBJS       = $(NORMALMAINOBJ) $(MINIOBJS) $(COMMONOBJS) $(DMYEXT)

GOLFOBJS      = goruby.$(OBJEXT) golf_prelude.$(OBJEXT)

PRELUDE_SCRIPTS = $(srcdir)/prelude.rb $(srcdir)/enc/prelude.rb $(DEFAULT_PRELUDES)
GEM_PRELUDE = $(srcdir)/gem_prelude.rb
YES_GEM_PRELUDE = $(GEM_PRELUDE)
NO_GEM_PRELUDE =
PRELUDES      = prelude.c miniprelude.c
GOLFPRELUDES = golf_prelude.c

SCRIPT_ARGS   =	--dest-dir="$(DESTDIR)" \
		--extout="$(EXTOUT)" \
		--mflags="$(MFLAGS)" \
		--make-flags="$(MAKEFLAGS)"
EXTMK_ARGS    =	$(SCRIPT_ARGS) --extension $(EXTS) --extstatic $(EXTSTATIC) \
		--make-flags="V=$(V) MINIRUBY='$(MINIRUBY)'" --
INSTRUBY      =	$(SUDO) $(RUNRUBY) -r./$(arch)-fake $(srcdir)/tool/rbinstall.rb
INSTRUBY_ARGS =	$(SCRIPT_ARGS) \
		--data-mode=$(INSTALL_DATA_MODE) \
		--prog-mode=$(INSTALL_PROG_MODE) \
		--installed-list $(INSTALLED_LIST) \
		--mantype="$(MANTYPE)"
INSTALL_PROG_MODE = 0755
INSTALL_DATA_MODE = 0644

PRE_LIBRUBY_UPDATE = $(MINIRUBY) -e 'ARGV[1] or File.unlink(ARGV[0]) rescue nil' -- \
			$(LIBRUBY_EXTS) $(LIBRUBY_SO_UPDATE)

TESTSDIR      = $(srcdir)/test
TESTWORKDIR   = testwork

TESTRUN_SCRIPT = $(srcdir)/test.rb

BOOTSTRAPRUBY = $(BASERUBY)

COMPILE_PRELUDE = $(MINIRUBY) -I$(srcdir) $(srcdir)/tool/compile_prelude.rb

all: showflags main docs

main: showflags $(EXTSTATIC:static=lib)encs exts
	@$(NULLCMD)

.PHONY: showflags
exts enc trans: showflags
showflags:
	$(MESSAGE_BEGIN) \
	"	CC = $(CC)" \
	"	LD = $(LD)" \
	"	LDSHARED = $(LDSHARED)" \
	"	CFLAGS = $(CFLAGS)" \
	"	XCFLAGS = $(XCFLAGS)" \
	"	CPPFLAGS = $(CPPFLAGS)" \
	"	DLDFLAGS = $(DLDFLAGS)" \
	"	SOLIBS = $(SOLIBS)" \
	$(MESSAGE_END)

.PHONY: showconfig
showconfig:
	@$(MESSAGE_BEGIN) \
	"$(configure_args)" \
	$(MESSAGE_END)

exts: build-ext

EXTS_MK = exts.mk
$(EXTS_MK): $(MKFILES) all-incs $(PREP) $(RBCONFIG) $(LIBRUBY)
	$(ECHO) generating makefile $@
	$(Q)$(MINIRUBY) $(srcdir)/ext/extmk.rb --make="$(MAKE)" --command-output=$(EXTS_MK) $(EXTMK_ARGS) configure

configure-ext: $(EXTS_MK)

build-ext: $(EXTS_MK)
	$(Q)$(MAKE) -f $(EXTS_MK) $(MFLAGS) $(EXTSTATIC) LIBRUBY_EXTS=$(LIBRUBY_EXTS) ENCOBJS="$(ENCOBJS)"

$(MKMAIN_CMD): $(MKFILES) all-incs $(PREP) $(RBCONFIG) $(LIBRUBY)
	$(Q)$(MINIRUBY) $(srcdir)/ext/extmk.rb --make="$(MAKE)" --command-output=$@ $(EXTMK_ARGS)

prog: program wprogram

loadpath: $(PREP) PHONY
	$(MINIRUBY) -e 'p $$:'

$(PREP): $(MKFILES)

miniruby$(EXEEXT): config.status $(ALLOBJS) $(ARCHFILE) $(DTRACE_OBJ)

objs: $(ALLOBJS)

GORUBY = go$(RUBY_INSTALL_NAME)
golf: $(LIBRUBY) $(GOLFOBJS) PHONY
	$(Q) $(MAKE) $(MFLAGS) MAINOBJ="$(GOLFOBJS)" PROGRAM=$(GORUBY)$(EXEEXT) program
capi: $(CAPIOUT)/.timestamp PHONY

$(CAPIOUT)/.timestamp: Doxyfile $(PREP)
	$(Q) $(MAKEDIRS) "$(@D)"
	$(ECHO) generating capi
	$(Q) $(DOXYGEN) -b
	$(Q) $(MINIRUBY) -e 'File.open(ARGV[0], "w"){|f| f.puts(Time.now)}' "$@"

Doxyfile: $(srcdir)/template/Doxyfile.tmpl $(PREP) $(srcdir)/tool/generic_erb.rb $(RBCONFIG)
	$(ECHO) generating $@
	$(Q) $(MINIRUBY) $(srcdir)/tool/generic_erb.rb -o $@ $(srcdir)/template/Doxyfile.tmpl \
	--srcdir="$(srcdir)" --miniruby="$(BASERUBY)"

program: showflags $(PROGRAM)
wprogram: showflags $(WPROGRAM)

$(PROGRAM) $(WPROGRAM): $(LIBRUBY) $(MAINOBJ) $(OBJS) $(EXTOBJS) $(SETUP) $(PREP)

$(LIBRUBY_A):	$(OBJS) $(MAINOBJ) $(DTRACE_OBJ) $(DTRACE_GLOMMED_OBJ) $(DMYEXT) $(ARCHFILE)

$(LIBRUBY_SO):	$(OBJS) $(DLDOBJS) $(LIBRUBY_A) $(PREP) $(LIBRUBY_SO_UPDATE) $(BUILTIN_ENCOBJS)

$(LIBRUBY_EXTS):
	@exit > $@

$(STATIC_RUBY)$(EXEEXT): $(MAINOBJ) $(DLDOBJS) $(EXTOBJS) $(LIBRUBY_A)
	$(Q)$(RM) $@
	$(PURIFY) $(CC) $(MAINOBJ) $(DLDOBJS) $(EXTOBJS) $(LIBRUBY_A) $(MAINLIBS) $(EXTLIBS) $(LIBS) $(OUTFLAG)$@ $(LDFLAGS) $(XLDFLAGS)

ruby.imp: $(EXPORTOBJS)
	$(Q)$(NM) -Pgp $(EXPORTOBJS) | \
	awk 'BEGIN{print "#!"}; $$2~/^[BDT]$$/&&$$1!~/^(Init_|.*_threadptr_|\.)/{print $$1}' | \
	sort -u -o $@

install: install-$(INSTALLDOC)
docs: $(DOCTARGETS)
pkgconfig-data: $(ruby_pc)
$(ruby_pc): $(srcdir)/template/ruby.pc.in config.status

install-all: docs pre-install-all do-install-all post-install-all
pre-install-all:: pre-install-local pre-install-ext pre-install-doc
do-install-all: all
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=all --rdoc-output="$(RDOCOUT)"
post-install-all:: post-install-local post-install-ext post-install-doc
	@$(NULLCMD)

install-nodoc: pre-install-nodoc do-install-nodoc post-install-nodoc
pre-install-nodoc:: pre-install-local pre-install-ext
do-install-nodoc: main
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS)
post-install-nodoc:: post-install-local post-install-ext

install-local: pre-install-local do-install-local post-install-local
pre-install-local:: pre-install-bin pre-install-lib pre-install-man
do-install-local: $(PROGRAM)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=local
post-install-local:: post-install-bin post-install-lib post-install-man

install-ext: pre-install-ext do-install-ext post-install-ext
pre-install-ext:: pre-install-ext-arch pre-install-ext-comm
do-install-ext: exts
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=ext
post-install-ext:: post-install-ext-arch post-install-ext-comm

install-arch: pre-install-arch do-install-arch post-install-arch
pre-install-arch:: pre-install-bin pre-install-ext-arch
do-install-arch: main
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=bin --install=ext-arch
post-install-arch:: post-install-bin post-install-ext-arch

install-comm: pre-install-comm do-install-comm post-install-comm
pre-install-comm:: pre-install-lib pre-install-ext-comm pre-install-man
do-install-comm: $(PREP)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=lib --install=ext-comm --install=man
post-install-comm:: post-install-lib post-install-ext-comm post-install-man

install-bin: pre-install-bin do-install-bin post-install-bin
pre-install-bin:: install-prereq
do-install-bin: $(PROGRAM)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=bin
post-install-bin::
	@$(NULLCMD)

install-lib: pre-install-lib do-install-lib post-install-lib
pre-install-lib:: install-prereq
do-install-lib: $(PREP)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=lib
post-install-lib::
	@$(NULLCMD)

install-ext-comm: pre-install-ext-comm do-install-ext-comm post-install-ext-comm
pre-install-ext-comm:: install-prereq
do-install-ext-comm: exts
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=ext-comm
post-install-ext-comm::
	@$(NULLCMD)

install-ext-arch: pre-install-ext-arch do-install-ext-arch post-install-ext-arch
pre-install-ext-arch:: install-prereq
do-install-ext-arch: exts
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=ext-arch
post-install-ext-arch::
	@$(NULLCMD)

install-man: pre-install-man do-install-man post-install-man
pre-install-man:: install-prereq
do-install-man: $(PREP)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=man
post-install-man::
	@$(NULLCMD)

install-capi: capi pre-install-capi do-install-capi post-install-capi
pre-install-capi:: install-prereq
do-install-capi: $(PREP)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=capi
post-install-capi::
	@$(NULLCMD)

what-where: no-install
no-install: no-install-$(INSTALLDOC)
what-where-all: no-install-all
no-install-all: pre-no-install-all dont-install-all post-no-install-all
pre-no-install-all:: pre-no-install-local pre-no-install-ext pre-no-install-doc
dont-install-all: $(PROGRAM)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=all --rdoc-output="$(RDOCOUT)"
post-no-install-all:: post-no-install-local post-no-install-ext post-no-install-doc
	@$(NULLCMD)

what-where-nodoc: no-install-nodoc
no-install-nodoc: pre-no-install-nodoc dont-install-nodoc post-no-install-nodoc
pre-no-install-nodoc:: pre-no-install-local pre-no-install-ext
dont-install-nodoc:  $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS)
post-no-install-nodoc:: post-no-install-local post-no-install-ext

what-where-local: no-install-local
no-install-local: pre-no-install-local dont-install-local post-no-install-local
pre-no-install-local:: pre-no-install-bin pre-no-install-lib pre-no-install-man
dont-install-local: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=local
post-no-install-local:: post-no-install-bin post-no-install-lib post-no-install-man

what-where-ext: no-install-ext
no-install-ext: pre-no-install-ext dont-install-ext post-no-install-ext
pre-no-install-ext:: pre-no-install-ext-arch pre-no-install-ext-comm
dont-install-ext: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=ext
post-no-install-ext:: post-no-install-ext-arch post-no-install-ext-comm

what-where-arch: no-install-arch
no-install-arch: pre-no-install-arch dont-install-arch post-no-install-arch
pre-no-install-arch:: pre-no-install-bin pre-no-install-ext-arch
dont-install-arch: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=bin --install=ext-arch
post-no-install-arch:: post-no-install-lib post-no-install-man post-no-install-ext-arch

what-where-comm: no-install-comm
no-install-comm: pre-no-install-comm dont-install-comm post-no-install-comm
pre-no-install-comm:: pre-no-install-lib pre-no-install-ext-comm pre-no-install-man
dont-install-comm: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=lib --install=ext-comm --install=man
post-no-install-comm:: post-no-install-lib post-no-install-ext-comm post-no-install-man

what-where-bin: no-install-bin
no-install-bin: pre-no-install-bin dont-install-bin post-no-install-bin
pre-no-install-bin:: install-prereq
dont-install-bin: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=bin
post-no-install-bin::
	@$(NULLCMD)

what-where-lib: no-install-lib
no-install-lib: pre-no-install-lib dont-install-lib post-no-install-lib
pre-no-install-lib:: install-prereq
dont-install-lib: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=lib
post-no-install-lib::
	@$(NULLCMD)

what-where-ext-comm: no-install-ext-comm
no-install-ext-comm: pre-no-install-ext-comm dont-install-ext-comm post-no-install-ext-comm
pre-no-install-ext-comm:: install-prereq
dont-install-ext-comm: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=ext-comm
post-no-install-ext-comm::
	@$(NULLCMD)

what-where-ext-arch: no-install-ext-arch
no-install-ext-arch: pre-no-install-ext-arch dont-install-ext-arch post-no-install-ext-arch
pre-no-install-ext-arch:: install-prereq
dont-install-ext-arch: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=ext-arch
post-no-install-ext-arch::
	@$(NULLCMD)

what-where-man: no-install-man
no-install-man: pre-no-install-man dont-install-man post-no-install-man
pre-no-install-man:: install-prereq
dont-install-man: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=man
post-no-install-man::
	@$(NULLCMD)

install-doc: rdoc pre-install-doc do-install-doc post-install-doc
pre-install-doc:: install-prereq
do-install-doc: $(PROGRAM)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=rdoc --rdoc-output="$(RDOCOUT)"
post-install-doc::
	@$(NULLCMD)

install-gem: pre-install-gem do-install-gem post-install-gem
pre-install-gem:: pre-install-bin pre-install-lib pre-install-man
do-install-gem: $(PROGRAM)
	$(INSTRUBY) --make="$(MAKE)" $(INSTRUBY_ARGS) --install=gem
post-install-gem::
	@$(NULLCMD)

rdoc: PHONY main
	@echo Generating RDoc documentation
	$(Q) $(XRUBY) "$(srcdir)/bin/rdoc" --root "$(srcdir)" --page-dir "$(srcdir)/doc" --encoding=UTF-8 --no-force-update --all --ri --op "$(RDOCOUT)" --debug $(RDOCFLAGS) "$(srcdir)"

rdoc-coverage: PHONY main
	@echo Generating RDoc coverage report
	$(Q) $(XRUBY) "$(srcdir)/bin/rdoc" --root "$(srcdir)" --encoding=UTF-8 --all --quiet -C $(RDOCFLAGS) "$(srcdir)"

nodoc: PHONY

what-where-doc: no-install-doc
no-install-doc: pre-no-install-doc dont-install-doc post-no-install-doc
pre-no-install-doc:: install-prereq
dont-install-doc:: $(PREP)
	$(INSTRUBY) -n --make="$(MAKE)" $(INSTRUBY_ARGS) --install=rdoc --rdoc-output="$(RDOCOUT)"
post-no-install-doc::
	@$(NULLCMD)

CLEAR_INSTALLED_LIST = clear-installed-list

install-prereq: $(CLEAR_INSTALLED_LIST) yes-fake PHONY

clear-installed-list: PHONY
	@> $(INSTALLED_LIST) set MAKE="$(MAKE)"

clean: clean-ext clean-local clean-enc clean-golf clean-rdoc clean-capi clean-extout clean-platform
clean-local:: PHONY
	$(Q)$(RM) $(OBJS) $(MINIOBJS) $(MAINOBJ) $(LIBRUBY_A) $(LIBRUBY_SO) $(LIBRUBY) $(LIBRUBY_ALIASES)
	$(Q)$(RM) $(PROGRAM) $(WPROGRAM) miniruby$(EXEEXT) dmyext.$(OBJEXT) $(ARCHFILE) .*.time
	$(Q)$(RM) y.tab.c y.output encdb.h transdb.h prelude.c config.log rbconfig.rb $(ruby_pc) probes.h probes.$(OBJEXT) probes.stamp ruby-glommed.$(OBJEXT)
clean-ext:: PHONY
clean-golf: PHONY
	$(Q)$(RM) $(GORUBY)$(EXEEXT) $(GOLFOBJS)
clean-rdoc: PHONY
clean-capi: PHONY
clean-platform: PHONY
clean-extout: PHONY
clean-docs: clean-rdoc clean-capi

distclean: distclean-ext distclean-local distclean-enc distclean-golf distclean-extout distclean-platform
distclean-local:: clean-local
	$(Q)$(RM) $(MKFILES) yasmdata.rb *.inc
	$(Q)$(RM) config.cache config.status config.status.lineno
	$(Q)$(RM) *~ *.bak *.stackdump core *.core gmon.out $(PREP)
distclean-ext:: PHONY
distclean-golf: clean-golf
	$(Q)$(RM) $(GOLFPRELUDES)
distclean-rdoc: PHONY
distclean-capi: PHONY
distclean-extout: clean-extout
distclean-platform: clean-platform

realclean:: realclean-ext realclean-local realclean-enc realclean-golf realclean-extout
realclean-local:: distclean-local
	$(Q)$(RM) parse.c parse.h lex.c newline.c miniprelude.c revision.h
realclean-ext::
realclean-golf: distclean-golf
realclean-capi: PHONY
realclean-extout: distclean-extout

clean-ext distclean-ext realclean-ext::
	$(Q)$(RM) $(EXTS_MK)

clean-enc distclean-enc realclean-enc: PHONY

check: main test test-all
	$(ECHO) check succeeded
check-ruby: test test-ruby

fake: $(CROSS_COMPILING)-fake
yes-fake: $(arch)-fake.rb $(RBCONFIG) PHONY
no-fake: PHONY

btest: $(TEST_RUNNABLE)-btest
no-btest: PHONY
yes-btest: fake miniruby$(EXEEXT) PHONY
	$(BOOTSTRAPRUBY) "$(srcdir)/bootstraptest/runner.rb" --ruby="$(BTESTRUBY)" $(OPTS) $(TESTOPTS)

btest-ruby: $(TEST_RUNNABLE)-btest-ruby
no-btest-ruby: PHONY
yes-btest-ruby: prog PHONY
	$(Q)$(RUNRUBY) "$(srcdir)/bootstraptest/runner.rb" --ruby="$(PROGRAM) -I$(srcdir)/lib" -q $(OPTS) $(TESTOPTS)

test-sample: $(TEST_RUNNABLE)-test-sample
no-test-sample: PHONY
yes-test-sample: prog PHONY
	$(Q)$(RUNRUBY) $(srcdir)/tool/rubytest.rb $(OPTS) $(TESTOPTS)

test-knownbugs: test-knownbug
test-knownbug: $(TEST_RUNNABLE)-test-knownbug
no-test-knownbug: PHONY
yes-test-knownbug: prog PHONY
	-$(RUNRUBY) "$(srcdir)/bootstraptest/runner.rb" --ruby="$(PROGRAM)" $(OPTS) $(TESTOPTS) $(srcdir)/KNOWNBUGS.rb

test: test-sample btest-ruby test-knownbug

test-all: $(TEST_RUNNABLE)-test-all
yes-test-all: prog PHONY
	$(RUNRUBY) "$(srcdir)/test/runner.rb" --ruby="$(RUNRUBY)" $(TESTOPTS) $(TESTS)
TESTS_BUILD = mkmf
no-test-all: PHONY
	$(MINIRUBY) -I"$(srcdir)/lib" "$(srcdir)/test/runner.rb" $(TESTOPTS) $(TESTS_BUILD)

test-ruby: $(TEST_RUNNABLE)-test-ruby
no-test-ruby: PHONY
yes-test-ruby: prog encs PHONY
	$(RUNRUBY) "$(srcdir)/test/runner.rb" -q $(TESTOPTS) -- ruby -ext-

extconf: $(PREP)
	$(Q) $(MAKEDIRS) "$(EXTCONFDIR)"
	$(RUNRUBY) -C "$(EXTCONFDIR)" $(EXTCONF) $(EXTCONFARGS)

$(RBCONFIG): $(srcdir)/tool/mkconfig.rb config.status $(srcdir)/version.h $(PREP)
	$(Q)$(MINIRUBY) $(srcdir)/tool/mkconfig.rb -timestamp=$@ \
		-install_name=$(RUBY_INSTALL_NAME) \
		-so_name=$(RUBY_SO_NAME) rbconfig.rb

test-rubyspec-precheck:

test-rubyspec: test-rubyspec-precheck
	$(RUNRUBY) $(srcdir)/spec/mspec/bin/mspec run -B $(srcdir)/spec/default.mspec $(MSPECOPT)

RUNNABLE = $(LIBRUBY_RELATIVE:no=un)-runnable
runnable: $(RUNNABLE) prog $(srcdir)/tool/mkrunnable.rb PHONY
	$(Q) $(MINIRUBY) $(srcdir)/tool/mkrunnable.rb -v $(EXTOUT)
yes-runnable: PHONY

encs: enc trans
libencs: libenc libtrans
encs enc trans libencs libenc libtrans: showflags $(ENC_MK) $(LIBRUBY) $(PREP)
	$(ECHO) making $@
	$(Q) $(MAKE) -f $(ENC_MK) V="$(V)" \
		RUBY="$(MINIRUBY)" MINIRUBY="$(MINIRUBY)" \
		$(MFLAGS) $@


libenc enc: encdb.h
libtrans trans: transdb.h

$(ENC_MK): $(srcdir)/enc/make_encmake.rb $(srcdir)/enc/Makefile.in $(srcdir)/enc/depend \
	$(srcdir)/enc/encinit.c.erb $(srcdir)/lib/mkmf.rb $(RBCONFIG)
	$(ECHO) generating $@
	$(Q) $(MINIRUBY) $(srcdir)/enc/make_encmake.rb --builtin-encs="$(BUILTIN_ENCOBJS)" --builtin-transes="$(BUILTIN_TRANSOBJS)" --module$(EXTSTATIC) $@ $(ENCS)

.PRECIOUS: $(MKFILES)

.PHONY: PHONY all fake prereq incs srcs preludes help
.PHONY: test install install-nodoc install-doc dist
.PHONY: loadpath golf capi rdoc install-prereq clear-installed-list
.PHONY: clean clean-ext clean-local clean-enc clean-golf clean-rdoc clean-extout
.PHONY: distclean distclean-ext distclean-local distclean-enc distclean-golf distclean-extout
.PHONY: realclean realclean-ext realclean-local realclean-enc realclean-golf realclean-extout
.PHONY: check test test-all btest btest-ruby test-sample test-knownbug
.PHONY: run runruby parse benchmark benchmark-each tbench gdb gdb-ruby
.PHONY: update-mspec update-rubyspec test-rubyspec

PHONY:

parse.c: parse.y $(srcdir)/tool/ytab.sed id.h
parse.h: parse.c

.y.c:
	$(ECHO) generating $@
	$(Q)$(BASERUBY) $(srcdir)/tool/id2token.rb --path-separator=.$(PATH_SEPARATOR)./ --vpath=$(VPATH) id.h $(SRC_FILE) > parse.tmp.y
	$(Q)$(YACC) -d $(YFLAGS) -o y.tab.c parse.tmp.y
	$(Q)$(RM) parse.tmp.y
	$(Q)sed -f $(srcdir)/tool/ytab.sed -e "/^#/s!parse\.tmp\.[iy]!parse.y!" -e "/^#/s!y\.tab\.c!$@!" y.tab.c > $@.new
	$(Q)$(MV) $@.new $@
	$(Q)sed -e "/^#line.*y\.tab\.h/d;/^#line.*parse.*\.y/d" y.tab.h > $(@:.c=.h)
	$(Q)$(RM) y.tab.c y.tab.h

acosh.$(OBJEXT): acosh.c
alloca.$(OBJEXT): alloca.c config.h
crypt.$(OBJEXT): crypt.c
dup2.$(OBJEXT): dup2.c
erf.$(OBJEXT): erf.c
finite.$(OBJEXT): finite.c
flock.$(OBJEXT): flock.c
memcmp.$(OBJEXT): memcmp.c
memmove.$(OBJEXT): memmove.c
mkdir.$(OBJEXT): mkdir.c
setproctitle.$(OBJEXT): setproctitle.c util.h $(RUBY_H_INCLUDES)
strchr.$(OBJEXT): strchr.c
strdup.$(OBJEXT): strdup.c
strerror.$(OBJEXT): strerror.c
strlcat.$(OBJEXT): strlcat.c
strlcpy.$(OBJEXT): strlcpy.c
strstr.$(OBJEXT): strstr.c
strtod.$(OBJEXT): strtod.c
strtol.$(OBJEXT): strtol.c
nt.$(OBJEXT): nt.c
os2.$(OBJEXT): os2.c
dl_os2.$(OBJEXT): dl_os2.c
ia64.$(OBJEXT): ia64.s
	$(CC) $(CFLAGS) -c $<

$(PLATFORM_D):
	$(Q) $(MAKEDIRS) $(PLATFORM_DIR)
	@exit > $@

###

RUBY_H_INCLUDES    = ruby.h config.h defines.h \
		     intern.h missing.h st.h \
		     subst.h
ENCODING_H_INCLUDES= encoding.h oniguruma.h
PROBES_H_INCLUDES  = probes.h
VM_CORE_H_INCLUDES = vm_core.h thread_$(THREAD_MODEL).h \
		     node.h method.h ruby_atomic.h \
	             vm_debug.h id.h

addr2line.$(OBJEXT): addr2line.c addr2line.h config.h
array.$(OBJEXT): array.c $(RUBY_H_INCLUDES) util.h \
  $(ENCODING_H_INCLUDES) internal.h $(PROBES_H_INCLUDES) id.h
bignum.$(OBJEXT): bignum.c $(RUBY_H_INCLUDES) util.h \
  thread.h internal.h
class.$(OBJEXT): class.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) internal.h constant.h
compar.$(OBJEXT): compar.c $(RUBY_H_INCLUDES)
complex.$(OBJEXT): complex.c $(RUBY_H_INCLUDES) \
  internal.h
dir.$(OBJEXT): dir.c $(RUBY_H_INCLUDES) util.h \
  $(ENCODING_H_INCLUDES) \
  internal.h
dln.$(OBJEXT): dln.c dln.h $(RUBY_H_INCLUDES)
dln_find.$(OBJEXT): dln_find.c dln.h $(RUBY_H_INCLUDES)
dmydln.$(OBJEXT): dmydln.c $(RUBY_H_INCLUDES)
dmyext.$(OBJEXT): dmyext.c
dmyencoding.$(OBJEXT): dmyencoding.c $(RUBY_H_INCLUDES) \
  regenc.h util.h $(ENCODING_H_INCLUDES) \
  encoding.c internal.h
encoding.$(OBJEXT): encoding.c $(RUBY_H_INCLUDES) \
  $(ENCODING_H_INCLUDES) regenc.h util.h \
  internal.h
enum.$(OBJEXT): enum.c $(RUBY_H_INCLUDES) node.h \
  util.h id.h
enumerator.$(OBJEXT): enumerator.c $(RUBY_H_INCLUDES) \
  internal.h
error.$(OBJEXT): error.c known_errors.inc \
  $(RUBY_H_INCLUDES) $(VM_CORE_H_INCLUDES) $(ENCODING_H_INCLUDES) \
  internal.h
eval.$(OBJEXT): eval.c eval_intern.h vm.h \
  $(RUBY_H_INCLUDES) $(VM_CORE_H_INCLUDES) eval_error.c \
  eval_jump.c gc.h iseq.h \
  $(ENCODING_H_INCLUDES) internal.h $(PROBES_H_INCLUDES)
load.$(OBJEXT): load.c eval_intern.h \
  util.h $(RUBY_H_INCLUDES) $(VM_CORE_H_INCLUDES) \
  dln.h internal.h $(PROBES_H_INCLUDES)
file.$(OBJEXT): file.c $(RUBY_H_INCLUDES) io.h \
  $(ENCODING_H_INCLUDES) util.h dln.h \
  internal.h
gc.$(OBJEXT): gc.c $(RUBY_H_INCLUDES) re.h \
  regex.h $(ENCODING_H_INCLUDES) $(VM_CORE_H_INCLUDES) \
  gc.h io.h eval_intern.h util.h \
  internal.h constant.h \
  thread.h $(PROBES_H_INCLUDES)
hash.$(OBJEXT): hash.c $(RUBY_H_INCLUDES) util.h \
  $(ENCODING_H_INCLUDES) internal.h $(PROBES_H_INCLUDES)
inits.$(OBJEXT): inits.c $(RUBY_H_INCLUDES) \
  internal.h
io.$(OBJEXT): io.c $(RUBY_H_INCLUDES) io.h \
  util.h $(ENCODING_H_INCLUDES) dln.h \
  internal.h thread.h id.h
main.$(OBJEXT): main.c $(RUBY_H_INCLUDES) node.h vm_debug.h
marshal.$(OBJEXT): marshal.c $(RUBY_H_INCLUDES) io.h \
  $(ENCODING_H_INCLUDES) util.h internal.h
math.$(OBJEXT): math.c $(RUBY_H_INCLUDES) \
  internal.h
node.$(OBJEXT): node.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES)
numeric.$(OBJEXT): numeric.c $(RUBY_H_INCLUDES) \
  util.h $(ENCODING_H_INCLUDES) internal.h id.h
object.$(OBJEXT): object.c $(RUBY_H_INCLUDES) util.h \
  internal.h constant.h $(ENCODING_H_INCLUDES) $(PROBES_H_INCLUDES)
pack.$(OBJEXT): pack.c $(RUBY_H_INCLUDES) encoding.h \
  oniguruma.h
parse.$(OBJEXT): parse.c $(RUBY_H_INCLUDES) node.h \
  $(ENCODING_H_INCLUDES) id.h regenc.h \
  regex.h util.h lex.c \
  defs/keywords id.c parse.y \
  parse.h internal.h $(PROBES_H_INCLUDES)
proc.$(OBJEXT): proc.c eval_intern.h \
  $(RUBY_H_INCLUDES) gc.h $(VM_CORE_H_INCLUDES) \
  internal.h iseq.h
process.$(OBJEXT): process.c $(RUBY_H_INCLUDES) \
  util.h io.h $(ENCODING_H_INCLUDES) dln.h \
  $(VM_CORE_H_INCLUDES) internal.h \
  thread.h
random.$(OBJEXT): random.c $(RUBY_H_INCLUDES) \
  siphash.c siphash.h
range.$(OBJEXT): range.c $(RUBY_H_INCLUDES) \
  $(ENCODING_H_INCLUDES) internal.h id.h
rational.$(OBJEXT): rational.c $(RUBY_H_INCLUDES) internal.h
re.$(OBJEXT): re.c $(RUBY_H_INCLUDES) re.h \
  regex.h $(ENCODING_H_INCLUDES) util.h \
  regint.h regenc.h internal.h
regcomp.$(OBJEXT): regcomp.c regparse.h \
  regint.h regenc.h oniguruma.h \
  $(RUBY_H_INCLUDES)
regenc.$(OBJEXT): regenc.c regint.h \
  regenc.h oniguruma.h $(RUBY_H_INCLUDES)
regerror.$(OBJEXT): regerror.c regint.h \
  regenc.h oniguruma.h $(RUBY_H_INCLUDES)
regexec.$(OBJEXT): regexec.c regint.h \
  regenc.h oniguruma.h $(RUBY_H_INCLUDES)
regparse.$(OBJEXT): regparse.c regparse.h \
  regint.h regenc.h oniguruma.h \
  $(RUBY_H_INCLUDES)
regsyntax.$(OBJEXT): regsyntax.c regint.h \
  regenc.h oniguruma.h $(RUBY_H_INCLUDES)
ruby.$(OBJEXT): ruby.c $(RUBY_H_INCLUDES) util.h \
  $(ENCODING_H_INCLUDES) eval_intern.h $(VM_CORE_H_INCLUDES) \
  dln.h internal.h
safe.$(OBJEXT): safe.c $(RUBY_H_INCLUDES) $(VM_CORE_H_INCLUDES)
signal.$(OBJEXT): signal.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES)
sprintf.$(OBJEXT): sprintf.c $(RUBY_H_INCLUDES) re.h \
  regex.h vsnprintf.c $(ENCODING_H_INCLUDES)
st.$(OBJEXT): st.c $(RUBY_H_INCLUDES)
strftime.$(OBJEXT): strftime.c $(RUBY_H_INCLUDES) \
  timev.h $(ENCODING_H_INCLUDES)
string.$(OBJEXT): string.c $(RUBY_H_INCLUDES) re.h \
  regex.h $(ENCODING_H_INCLUDES) internal.h $(PROBES_H_INCLUDES)
struct.$(OBJEXT): struct.c $(RUBY_H_INCLUDES) internal.h
thread.$(OBJEXT): thread.c eval_intern.h \
  $(RUBY_H_INCLUDES) gc.h $(VM_CORE_H_INCLUDES) \
  thread_$(THREAD_MODEL).c $(ENCODING_H_INCLUDES) \
  internal.h io.h thread.h
transcode.$(OBJEXT): transcode.c $(RUBY_H_INCLUDES) \
  $(ENCODING_H_INCLUDES) transcode_data.h internal.h
cont.$(OBJEXT): cont.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) gc.h eval_intern.h \
  internal.h
time.$(OBJEXT): time.c $(RUBY_H_INCLUDES) \
  $(ENCODING_H_INCLUDES) timev.h internal.h
util.$(OBJEXT): util.c $(RUBY_H_INCLUDES) util.h \
  internal.h
variable.$(OBJEXT): variable.c $(RUBY_H_INCLUDES) \
  node.h util.h encoding.h \
  oniguruma.h internal.h constant.h
version.$(OBJEXT): version.c $(RUBY_H_INCLUDES) \
  version.h $(srcdir)/version.h $(srcdir)/revision.h config.h \
  verconf.h
dmyversion.$(OBJEXT): dmyversion.c version.$(OBJEXT)

compile.$(OBJEXT): compile.c iseq.h \
  $(RUBY_H_INCLUDES) $(VM_CORE_H_INCLUDES) insns.inc \
  insns_info.inc optinsn.inc \
  optunifs.inc opt_sc.inc insns.inc \
  internal.h
iseq.$(OBJEXT): iseq.c gc.h iseq.h \
  $(RUBY_H_INCLUDES) $(VM_CORE_H_INCLUDES) insns.inc \
  insns_info.inc node_name.inc internal.h
vm.$(OBJEXT): vm.c gc.h iseq.h \
  eval_intern.h $(RUBY_H_INCLUDES) $(ENCODING_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) vm_method.c vm_eval.c \
  vm_insnhelper.c vm_insnhelper.h vm_exec.c \
  vm_exec.h insns.def vmtc.inc \
  vm.inc insns.inc \
  internal.h vm.h constant.h \
  $(PROBES_H_INCLUDES) probes_helper.h
vm_dump.$(OBJEXT): vm_dump.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) addr2line.h \
  internal.h
debug.$(OBJEXT): debug.c $(RUBY_H_INCLUDES) \
  $(ENCODING_H_INCLUDES) $(VM_CORE_H_INCLUDES) eval_intern.h \
  util.h
id.$(OBJEXT): id.c $(RUBY_H_INCLUDES) id.h vm_opts.h
vm_backtrace.$(OBJEXT): vm_backtrace.c \
  $(VM_CORE_H_INCLUDES) $(RUBY_H_INCLUDES) $(ENCODING_H_INCLUDES) \
  internal.h iseq.h debug.h
vm_trace.$(OBJEXT): vm_trace.c $(ENCODING_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) $(RUBY_H_INCLUDES) debug.h \
  internal.h
miniprelude.$(OBJEXT): miniprelude.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) internal.h
prelude.$(OBJEXT): prelude.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) internal.h
golf_prelude.$(OBJEXT): golf_prelude.c $(RUBY_H_INCLUDES) \
  $(VM_CORE_H_INCLUDES) internal.h
goruby.$(OBJEXT): goruby.c main.c $(RUBY_H_INCLUDES) \
  vm_debug.h node.h

ascii.$(OBJEXT): ascii.c regenc.h config.h \
  oniguruma.h missing.h $(RUBY_H_INCLUDES)
us_ascii.$(OBJEXT): us_ascii.c regenc.h \
  config.h oniguruma.h missing.h $(RUBY_H_INCLUDES)
unicode.$(OBJEXT): unicode.c regint.h \
  config.h defines.h regenc.h \
  oniguruma.h st.h ruby.h \
  missing.h intern.h \
  enc/unicode/name2ctype.h enc/unicode/casefold.h  \
  subst.h $(RUBY_H_INCLUDES)

utf_8.$(OBJEXT): utf_8.c regenc.h config.h \
  oniguruma.h missing.h $(RUBY_H_INCLUDES)

win32/win32.$(OBJEXT): win32/win32.c $(RUBY_H_INCLUDES) $(PLATFORM_D)
win32/file.$(OBJEXT): win32/file.c $(RUBY_H_INCLUDES) $(PLATFORM_D)

$(NEWLINE_C): $(srcdir)/enc/trans/newline.trans $(srcdir)/tool/transcode-tblgen.rb
	$(Q) $(BASERUBY) "$(srcdir)/tool/transcode-tblgen.rb" -vo $@ $(srcdir)/enc/trans/newline.trans
newline.$(OBJEXT): $(NEWLINE_C) defines.h \
  intern.h missing.h st.h \
  transcode_data.h ruby.h config.h subst.h

DTRACE_DEPENDENT_OBJS = array.$(OBJEXT) \
		eval.$(OBJEXT) \
		gc.$(OBJEXT) \
		hash.$(OBJEXT) \
		load.$(OBJEXT) \
		object.$(OBJEXT) \
		parse.$(OBJEXT) \
		string.$(OBJEXT) \
		vm.$(OBJEXT)

probes.$(OBJEXT): $(DTRACE_DEPENDENT_OBJS)
ruby-glommed.$(OBJEXT): $(OBJS) $(DTRACE_OBJ)

$(OBJS):  config.h missing.h

INSNS2VMOPT = --srcdir="$(srcdir)"

minsns.inc: $(srcdir)/template/minsns.inc.tmpl

opt_sc.inc: $(srcdir)/template/opt_sc.inc.tmpl

optinsn.inc: $(srcdir)/template/optinsn.inc.tmpl

optunifs.inc: $(srcdir)/template/optunifs.inc.tmpl

insns.inc: $(srcdir)/template/insns.inc.tmpl

insns_info.inc: $(srcdir)/template/insns_info.inc.tmpl

vmtc.inc: $(srcdir)/template/vmtc.inc.tmpl

vm.inc: $(srcdir)/template/vm.inc.tmpl

srcs: parse.c lex.c newline.c id.c srcs-ext srcs-enc

EXT_SRCS = $(srcdir)/ext/ripper/ripper.c $(srcdir)/ext/json/parser/parser.c \
	   $(srcdir)/ext/dl/callback/callback.c

srcs-ext: $(EXT_SRCS)

srcs-enc: $(ENC_MK)
	$(ECHO) making srcs under enc
	$(Q) $(MAKE) -f $(ENC_MK) RUBY="$(MINIRUBY)" MINIRUBY="$(MINIRUBY)" $(MFLAGS) srcs

all-incs: incs
incs: $(INSNS) node_name.inc encdb.h transdb.h known_errors.inc \
      $(srcdir)/revision.h $(REVISION_H) enc/unicode/name2ctype.h id.h probes.dmyh

insns: $(INSNS)

id.h: $(srcdir)/tool/generic_erb.rb $(srcdir)/template/id.h.tmpl $(srcdir)/defs/id.def
	$(ECHO) generating $@
	$(Q) $(BASERUBY) $(srcdir)/tool/generic_erb.rb --output=$@ \
		$(srcdir)/template/$@.tmpl

id.c: $(srcdir)/tool/generic_erb.rb $(srcdir)/template/id.c.tmpl $(srcdir)/defs/id.def
	$(ECHO) generating $@
	$(Q) $(BASERUBY) $(srcdir)/tool/generic_erb.rb --output=$@ \
		$(srcdir)/template/$@.tmpl

node_name.inc: node.h
	$(ECHO) generating $@
	$(Q) $(BASERUBY) -n $(srcdir)/tool/node_name.rb < $? > $@

encdb.h: $(PREP) $(srcdir)/tool/generic_erb.rb $(srcdir)/template/encdb.h.tmpl
	$(ECHO) generating $@
	$(Q) $(MINIRUBY) $(srcdir)/tool/generic_erb.rb -c -o $@ $(srcdir)/template/encdb.h.tmpl $(srcdir)/enc enc

transdb.h: $(PREP) srcs-enc $(srcdir)/tool/generic_erb.rb $(srcdir)/template/transdb.h.tmpl
	$(ECHO) generating $@
	$(Q) $(MINIRUBY) $(srcdir)/tool/generic_erb.rb -c -o $@ $(srcdir)/template/transdb.h.tmpl $(srcdir)/enc/trans enc/trans

enc/encinit.c: $(ENC_MK) $(srcdir)/enc/encinit.c.erb

known_errors.inc: $(srcdir)/template/known_errors.inc.tmpl $(srcdir)/defs/known_errors.def
	$(ECHO) generating $@
	$(Q) $(BASERUBY) $(srcdir)/tool/generic_erb.rb -c -o $@ $(srcdir)/template/known_errors.inc.tmpl $(srcdir)/defs/known_errors.def

$(MINIPRELUDE_C): $(srcdir)/tool/compile_prelude.rb $(srcdir)/prelude.rb
	$(ECHO) generating $@
	$(Q) $(BASERUBY) -I$(srcdir) $(srcdir)/tool/compile_prelude.rb $(srcdir)/prelude.rb $@

prelude.c: $(srcdir)/tool/compile_prelude.rb $(RBCONFIG) \
	   $(srcdir)/lib/rubygems/defaults.rb \
	   $(srcdir)/lib/rubygems/core_ext/kernel_gem.rb \
	   $(PRELUDE_SCRIPTS) $(PREP)
	$(ECHO) generating $@
	$(Q) $(COMPILE_PRELUDE) $(PRELUDE_SCRIPTS) $@

golf_prelude.c: $(srcdir)/tool/compile_prelude.rb $(RBCONFIG) $(srcdir)/prelude.rb $(srcdir)/golf_prelude.rb $(PREP)
	$(ECHO) generating $@
	$(Q) $(COMPILE_PRELUDE) $(srcdir)/golf_prelude.rb $@

probes.dmyh: probes.d $(srcdir)/tool/gen_dummy_probes.rb
	$(BASERUBY) $(srcdir)/tool/gen_dummy_probes.rb $(srcdir)/probes.d > $@

probes.h: probes.$(DTRACE_EXT)

prereq: incs srcs preludes PHONY

preludes: miniprelude.c
preludes: golf_prelude.c

$(srcdir)/revision.h:
	@exit > $@

$(REVISION_H): $(srcdir)/version.h $(srcdir)/ChangeLog $(srcdir)/tool/file2lastrev.rb $(REVISION_FORCE)
	-$(Q) $(BASERUBY) $(srcdir)/tool/file2lastrev.rb --revision.h "$(srcdir)" > revision.tmp
	$(Q)$(IFCHANGE) "--timestamp=$@" "$(srcdir)/revision.h" revision.tmp

$(srcdir)/ext/ripper/ripper.c: parse.y
	$(ECHO) generating $@
	$(Q) $(CHDIR) $(@D) && $(exec) $(MAKE) -f depend $(MFLAGS) \
		Q=$(Q) ECHO=$(ECHO) top_srcdir=../.. srcdir=. VPATH=../.. RUBY="$(BASERUBY)"

$(srcdir)/ext/json/parser/parser.c: $(srcdir)/ext/json/parser/parser.rl
	$(ECHO) generating $@
	$(Q) $(CHDIR) $(@D) && $(exec) $(MAKE) -f prereq.mk $(MFLAGS) \
		Q=$(Q) ECHO=$(ECHO) top_srcdir=../../.. srcdir=. VPATH=../../.. BASERUBY="$(BASERUBY)"

$(srcdir)/ext/dl/callback/callback.c: $(srcdir)/ext/dl/callback/mkcallback.rb $(srcdir)/ext/dl/dl.h
	$(ECHO) generating $@
	$(Q) $(CHDIR) $(@D) && $(exec) $(MAKE) -f depend $(MFLAGS) \
		Q=$(Q) ECHO=$(ECHO) top_srcdir=../.. srcdir=. VPATH=../.. RUBY="$(BASERUBY)"

##

run: fake miniruby$(EXEEXT) PHONY
	$(BTESTRUBY) $(TESTRUN_SCRIPT) $(RUNOPT)

runruby: $(PROGRAM) PHONY
	$(RUNRUBY) $(TESTRUN_SCRIPT)

parse: fake miniruby$(EXEEXT) PHONY
	$(BTESTRUBY) $(srcdir)/tool/parse.rb $(TESTRUN_SCRIPT)

COMPARE_RUBY = $(BASERUBY)
ITEM =
OPTS =

benchmark: $(PROGRAM) PHONY
	$(BASERUBY) $(srcdir)/benchmark/driver.rb -v \
	            --executables="$(COMPARE_RUBY); built-ruby::$(RUNRUBY)" \
	            --pattern='bm_' --directory=$(srcdir)/benchmark $(OPTS)

benchmark-each: $(PROGRAM) PHONY
	$(BASERUBY) $(srcdir)/benchmark/driver.rb -v \
	            --executables="$(COMPARE_RUBY); built-ruby::$(RUNRUBY)" \
	            --pattern=$(ITEM) --directory=$(srcdir)/benchmark $(OPTS)

tbench: $(PROGRAM) PHONY
	$(BASERUBY) $(srcdir)/benchmark/driver.rb -v \
	            --executables="$(COMPARE_RUBY); built-ruby::$(RUNRUBY)" \
	            --pattern='bmx_' --directory=$(srcdir)/benchmark $(OPTS)

run.gdb:
	echo b ruby_debug_breakpoint           > run.gdb
	echo '# handle SIGINT nostop'         >> run.gdb
	echo '# handle SIGPIPE nostop'        >> run.gdb
	echo '# b rb_longjmp'                 >> run.gdb
	echo source $(srcdir)/breakpoints.gdb >> run.gdb
	echo source $(srcdir)/.gdbinit        >> run.gdb
	echo 'set $$_exitcode = -999'         >> run.gdb
	echo run                              >> run.gdb
	echo 'if $$_exitcode != -999'         >> run.gdb
	echo '  quit'                         >> run.gdb
	echo end                              >> run.gdb


gdb: miniruby$(EXEEXT) run.gdb PHONY
	gdb -x run.gdb --quiet --args $(MINIRUBY) $(TESTRUN_SCRIPT)

gdb-ruby: $(PROGRAM) run.gdb PHONY
	$(Q) $(RUNRUBY_COMMAND) $(RUNRUBY_DEBUGGER) -- $(TESTRUN_SCRIPT)

dist:
	$(BASERUBY) $(srcdir)/tool/make-snapshot tmp $(RELNAME)

up::
	-$(Q)$(MAKE) $(MFLAGS) REVISION_FORCE=PHONY "$(REVISION_H)"

info: info-program info-libruby_a info-libruby_so info-arch
info-program:
	@echo PROGRAM=$(PROGRAM)
info-libruby_a:
	@echo LIBRUBY_A=$(LIBRUBY_A)
info-libruby_so:
	@echo LIBRUBY_SO=$(LIBRUBY_SO)
info-arch:
	@echo arch=$(arch)

change: PHONY
	$(BASERUBY) -C "$(srcdir)" ./tool/change_maker.rb $(CHANGES) > change.log

love: sudo-precheck up all test install test-all
	@echo love is all you need

sudo-precheck:
	@$(SUDO) echo > $(NULL)

help: PHONY
	$(MESSAGE_BEGIN) \
	"                Makefile of Ruby" \
	"" \
	"targets:" \
	"  all (default):   builds all of below" \
	"  miniruby:        builds only miniruby" \
	"  encs:            builds encodings" \
	"  exts:            builds extensions" \
	"  main:            builds encodings, extensions and ruby" \
	"  docs:            builds documents" \
	"  run:             runs test.rb by miniruby" \
	"  runruby:         runs test.rb by ruby you just built" \
	"  gdb:             runs test.rb by miniruby under gdb" \
	"  gdb-ruby:        runs test.rb by ruby under gdb" \
	"  check:           equals make test test-all" \
	"  test:            ruby core tests" \
	"  test-all:        all ruby tests" \
	"  test-rubyspec:   run RubySpec test suite" \
	"  update-rubyspec: update local copy of RubySpec" \
	"  benchmark:       benchmark this ruby and COMPARE_RUBY" \
	"  install:         install all ruby distributions" \
	"  install-nodoc:   install without rdoc" \
	"  install-cross:   install cross compiling staff" \
	"  clean:           clean for tarball" \
	"  distclean:       clean for repository" \
	"  change:          make change log template" \
	"  golf:            for golfers" \
	"" \
	"see DeveloperHowto for more detail: " \
	"  http://bugs.ruby-lang.org/wiki/ruby/DeveloperHowto" \
	$(MESSAGE_END)
ruby: $(PROGRAM);
