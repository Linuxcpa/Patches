#Sed arguements to pass during statges of build process for specific packages

.if ${PKGPATH} == "devel/ncurses" || ${PKGPATH} == "devel/ncursesw"
SUBST_CLASSES+= sh
SUBST_STAGE.sh= post-configure
SUBST_MESSAGE.sh= Fix broken event on Haiku.
SUBST_FILES.sh= edit_man.sh include/MKkey_defs.sh \
include/edit_cfg.sh man/make_sed.sh \
man/MKterminfo.sh ncurses/base/MKlib_gen.sh \
ncurses/tinfo/MKkeys_list.sh ncurses/tty/MKexpanded.sh \
progs/MKtermsort.sh progs/capconvert
SUBST_SED.sh+= -e 's/1 2 5 15/1 2 15/g'
.endif

.if ${PKGPATH} == "lang/python27"
LDFLAGS+= -L/boot/system/lib
SUBST_CLASSES+= symlink
SUBST_STAGE.symlink= pre-configure
SUBST_FILES.symlink= Makefile.pre.in
SUBST_SED.symlink= -e 's,LN) -f ,LN) -sf ,g'
.endif

.if ${PKGPATH} == "devel/gobject-introspection"
SUBST_CLASSES+= fix_ld
SUBST_STAGE.fix_ld= post-configure
SUBST_FILES.fix_ld= giscanner/shlibs.py
SUBST_SED.fix_ld= -e "s|'ldd'|'fakeldd'|"
.endif

.if ${PKGPATH} == "archivers/zziplib"
SUBST_CLASSES+= zzipinc
SUBST_STAGE.zzipinc= pre-build
SUBST_MESSAGE.zzipinc = Fixing Path To Headers in configure
SUBST_FILES.zzipinc=configure
SUBST_SED.zzipinc=		-e "s|'$with_zlib/include'|'$with_zlib/headers'|"

SUBST_CLASSES+= zzipinc-ac
SUBST_STAGE.zzipinc-ac= pre-build
SUBST_MESSAGE.zzipinc-ac = Fixing Path To Headers in configure.ac
SUBST_FILES.zzipinc-ac=configure.ac
SUBST_SED.zzipinc-ac=		-e "s|'$with_zlib/include'|'$with_zlib/headers'|"
.endif
