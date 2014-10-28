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
