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

.if ${PKGPATH} == "lang/python27" || ${PKGPATH} == "lang/python34"
LDFLAGS+= -L/boot/system/lib
SUBST_CLASSES+= symlink
SUBST_STAGE.symlink= pre-configure
SUBST_FILES.symlink= Makefile.pre.in
SUBST_SED.symlink= -e 's,LN) -f ,LN) -sf ,g'
.endif

.if ${PKGPATH} == "devel/gobject-introspection" || ${PKGPATH} == "devel/physfs"
SUBST_CLASSES+= fix_ld
SUBST_STAGE.fix_ld= post-configure
SUBST_FILES.fix_ld= giscanner/shlibs.py
SUBST_SED.fix_ld= -e "s|'ldd'|'/boot/home/pkg/sbin/fakeldd'|"
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
|| ${PKGPATH} == "time/titrax" || ${PKGPATH} == "time/xcal" \
|| ${PKGPATH} == "wm/larswm"
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

.if ${PKGPATH} == "time/xtimer" || ${PKGPATH} == "games/cbzone"
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

.if ${PKGPATH} == "net/3proxy"
SUBST_CLASSES+= lnetwork5
SUBST_STAGE.lnetwork5= pre-build
SUBST_MESSAGE.lnetwork5= Fixing lroot
SUBST_FILES.lnetwork5= Makefile.unix
SUBST_SED.lnetwork5+= -e 's|CFLAGS = -Wall -g -O2 -c -pthread|CFLAGS = -Wall -g -O2 -c -lroot|g'

SUBST_CLASSES+= lnetwork6
SUBST_STAGE.lnetwork6= pre-build
SUBST_MESSAGE.lnetwork6= Fixing lnetwork lbsd
SUBST_FILES.lnetwork6= Makefile.unix
SUBST_SED.lnetwork6+= -e 's|LDFLAGS = -Wall -O2 -pthread|LDFLAGS = -Wall -O2 -lnetwork -lbsd|g'
.endif

.if ${PKGPATH} == "net/mtr"
SUBST_CLASSES+= lnetwork7
SUBST_STAGE.lnetwork7= pre-configure
SUBST_MESSAGE.lnetwork7= Fixing lnetwork
SUBST_FILES.lnetwork7= configure
SUBST_SED.lnetwork7+= -e 's|-lsocket|-lnetwork|g'
.endif

#.if ${PKGPATH} == "devel/git-base"
#SUBST_CLASSES+= lnetwork8
#SUBST_STAGE.lnetwork8= pre-build
#SUBST_MESSAGE.lnetwork8= Fixing lnetwork
#SUBST_FILES.lnetwork8= Makefile
#SUBST_SED.lnetwork8+= -e 's|-lsocket|-lnetwork|g'
#.endif

.if ${PKGPATH} == "chat/jabberd"
SUBST_CLASSES+= lnetwork10
SUBST_STAGE.lnetwork10= pre-build
SUBST_MESSAGE.lnetwork10= Fixing lnetwork
SUBST_FILES.lnetwork10= platform-settings
SUBST_SED.lnetwork10+= -e 's|LIBS= -lssl -lcrypto|LIBS= -lssl -lcrypto -lnetwork|g'
.endif

.if ${PKGPATH} == "converters/odt2txt"
SUBST_CLASSES+= usr-local-fix
SUBST_STAGE.usr-local-fix= pre-build
SUBST_MESSAGE.usr-local-fix= Fixing /usr/local to /boot/home/pkg
SUBST_FILES.usr-local-fix= Makefile
SUBST_SED.usr-local-fix+= -e 's|/usr/local|/boot/home/pkg|g'
.endif

.if ${PKGPATH} == "converters/php-mbstring"
SUBST_CLASSES+= fix-disable-shared
SUBST_STAGE.fix-disable-shared= pre-build
SUBST_MESSAGE.fix-disable-shared= Fixing shared disable
SUBST_FILES.fix-disable-shared= Itmain.sh
SUBST_SED.fix-disable-shared+= -e 's|fix-disable-shared| |g'
.endif

.if ${PKGPATH} == "finance/xquote" || ${PKGPATH} == "games/battalion"
SUBST_CLASSES+= lnetwork9
SUBST_STAGE.lnetwork9= pre-build
SUBST_MESSAGE.lnetwork9= Fixing lnetwork
SUBST_FILES.lnetwork9= Makefile
SUBST_SED.lnetwork9+= -e 's|-lm|-lnetwork|g'
.endif

.if ${PKGPATH} == "net/tnftp"
SUBST_CLASSES+= lbsd
SUBST_STAGE.lbsd= pre-build
SUBST_MESSAGE.lbsd= Fixing lbsd
SUBST_FILES.lbsd= src/Makefile
SUBST_SED.lbsd+= -e 's|-lnetbsd|-lbsd|g'
.endif

.if ${PKGPATH} == "chat/xaric" || ${PKGPATH} == "devel/php-memcached" \
|| ${PKGPATH} == "devel/php-memcache"
SUBST_CLASSES+= usr-fix1
SUBST_STAGE.usr-fix1= pre-configure
SUBST_MESSAGE.usr-fix1= Fixing /usr to /boot/home/pkg in configure
SUBST_FILES.usr-fix1= configure
SUBST_SED.usr-fix1+= -e 's|/usr|/boot/home/pkg|g'
.endif

.if ${PKGPATH} == "devel/php-memcached" || ${PKGPATH} == "devel/php-memcache"
SUBST_CLASSES+= usr-fix2
SUBST_STAGE.usr-fix2= configure
SUBST_MESSAGE.usr-fix2= Fixing /usr to /boot/home/pkg in configure.in
SUBST_FILES.usr-fix2= configure.in
SUBST_SED.usr-fix2+= -e 's|/usr|/boot/home/pkg|g'
.endif

.if ${PKGPATH} == "devel/php-memcached" || ${PKGPATH} == "devel/php-memcache"
SUBST_CLASSES+= usr-fix3
SUBST_STAGE.usr-fix3= post-configure
SUBST_MESSAGE.usr-fix3= Fixing /usr to /boot/home/pkg in configure.in
SUBST_FILES.usr-fix3= aclocal.m4
SUBST_SED.usr-fix3+= -e 's|/usr|/boot/home/pkg|g'
.endif

.if ${PKGPATH} == "games/stratagus"
SUBST_CLASSES+= lnetwork11
SUBST_STAGE.lnetwork11= pre-build
SUBST_MESSAGE.lnetwork11= Fixing lnetwork
SUBST_FILES.lnetwork11= Rules.make
SUBST_SED.lnetwork11+= -e 's|CCLLIB		= -lm|CCLLIB		= -lnetwork|g'
.endif
