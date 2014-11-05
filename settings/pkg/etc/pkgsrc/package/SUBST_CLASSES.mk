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

.if ${PKGPATH} == "benchmarks/postal"
SUBST_CLASSES+= libs
SUBST_STAGE.libs= pre-build
SUBST_MESSAGE.libs = Adding Haiku lnetwork to libraries
SUBST_FILES.libs=Makefile
SUBST_SED.libs=		-e '/^CRYPTLFLAGS/s/$$/ -lnetwork/'
.endif

.if ${PKGPATH} == "cad/tkgate"
SUBST_CLASSES+= xawfix
SUBST_STAGE.xawfix= pre-build
SUBST_MESSAGE.xawfix= Fixing libxaw to libxaw6
SUBST_FILES.xawfix= src/gmac/Makefile
SUBST_SED.xawfix+= -e 's|libXaw.a|libXaw6.a|g'
.endif

.if ${PKGPATH} == "time/gnyaclock" || ${PKGPATH} == "time/lmclock" \
|| ${PKGPATH} == "time/polclock" || ${PKGPATH} == "time/sunclock" \
|| ${PKGPATH} == "time/titrax" || ${PKGPATH} == "time/xcal"
SUBST_CLASSES+= xawfix1
SUBST_STAGE.xawfix1= pre-build
SUBST_MESSAGE.xawfix1= Fixing libxaw to libxaw6
SUBST_FILES.xawfix1= Makefile
SUBST_SED.xawfix1+= -e 's|libXaw.a|libXaw6.a|g'
.endif

.if ${PKGPATH} == "time/titrax"
SUBST_CLASSES+= xawfix2
SUBST_STAGE.xawfix2= post-build
SUBST_MESSAGE.xawfix2= Fixing libxaw to libxaw6
SUBST_FILES.xawfix2= Makefile
SUBST_SED.xawfix2+= -e 's|libXaw.a|libXaw6.a|g'
.endif

.if ${PKGPATH} == "time/xtimer"
SUBST_CLASSES+= xawfix3
SUBST_STAGE.xawfix3= pre-build
SUBST_MESSAGE.xawfix3= Fixing libxaw to libxaw6
SUBST_FILES.xawfix3= Makefile
SUBST_SED.xawfix3+= -e 's|libXaw.a|libXaw6.a|g'
.endif

.if ${PKGPATH} == "time/xcal"
SUBST_CLASSES+= xawfix5
SUBST_STAGE.xawfix5= pre-build
SUBST_MESSAGE.xawfix5= Fixing libxaw to libxaw6
SUBST_FILES.xawfix5= xcal_cal/Makefile
SUBST_SED.xawfix5+= -e 's|libXaw.a|libXaw6.a|g'

SUBST_CLASSES+= xawfix6
SUBST_STAGE.xawfix6= pre-build
SUBST_MESSAGE.xawfix6= Fixing libxaw to libxaw6
SUBST_FILES.xawfix6= xcalev/Makefile
SUBST_SED.xawfix6+= -e 's|libXaw.a|libXaw6.a|g'
.endif

.if ${PKGPATH} == "emulators/gxemul"
SUBST_CLASSES+= lnetwork4
SUBST_STAGE.lnetwork4= pre-build
SUBST_MESSAGE.lnetwork4= Fixing libxaw to libxaw6
SUBST_FILES.lnetwork4= Makefile
SUBST_SED.lnetwork4+= -e 's|OTHERLIBS=-L/boot/home/pkg/lib|OTHERLIBS=-L/boot/home/pkg/lib -lnetwork|g'
.endif

.if ${PKGPATH} == "x11/xcb"
SUBST_CLASSES+= xaufix
SUBST_STAGE.xaufix= pre-build
SUBST_MESSAGE.xaufix= Fixing libxa to libxau
SUBST_FILES.xaufix= Makefile
SUBST_SED.xaufix+= -e 's|libXa.a|libXau.a|g'

SUBST_CLASSES+= cppfix
SUBST_STAGE.cppfix= pre-build
SUBST_MESSAGE.cppfix= Fixing /lib/cpp to /bin/cpp
SUBST_FILES.cppfix= Makefile
SUBST_SED.cppfix+= -e 's|/lib/cpp|/bin/cpp|g'
.endif
