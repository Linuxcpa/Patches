#Remove hard links from certain package build processes for specific packages

.if ${PKGPATH} == archivers/bzip2 || ${PKGPATH} == "archivers/rzip" \
|| ${PKGPATH} == "devel/cmake"|| ${PKGPATH} == "x11/xjman" \
|| ${PKGPATH} == "devel/nspr" || ${PKGPATH} == "archivers/pigz" \
|| ${PKGPATH} == "archivers/libzip" || ${PKGPATH} == "net/bind99" \
|| ${PKGPATH} == "lang/tcl" || ${PKGPATH} == "x11/tk" \
|| ${PKGPATH} == "net/libpcap" || ${PKGPATH} == "converters/unix2dos" \
|| ${PKGPATH} == "geography/proj" || ${PKGPATH} == "editors/bvi" \
|| ${PKGPATH} == "lang/pfe" || ${PKGPATH} == "math/newmat" \
|| ${PKGPATH} == "misc/ja-man" || ${PKGPATH} == "net/bind96" \
|| ${PKGPATH} == "net/bind98" || ${PKGPATH} == "www/libwww" \
|| ${PKGPATH} == "net/bind910" || ${PKGPATH} == "net/whoson" \
|| ${PKGPATH} == "security/seccure" || ${PKGPATH} == "shells/rc" \
|| ${PKGPATH} == "sysutils/hfsutils" || ${PKGPATH} == "textproc/diction" \
|| ${PKGPATH} == "textproc/ispell" || ${PKGPATH} == "textproc/ispell-de" \
|| ${PKGPATH} == "textproc/ispell-en_GB" || ${PKGPATH} == "textproc/ispell-es" \
|| ${PKGPATH} == "textproc/harmony" || ${PKGPATH} == "textproc/xmlstarlet" \
|| ${PKGPATH} == "textproc/yodl" || ${PKGPATH} == "shells/zsh" \
|| ${PKGPATH} == "devel/git-gitk"
TOOLS_PLATFORM.ln?=             /bin/ln -s
.endif

.if ${PKGPATH} == "security/libgnome-keyring"
TOOLS_PLATFORM.ln?=             /bin/ln -sf
.endif

.if ${PKGPATH} == "math/fftw" || ${PKGPATH} == "lang/ruby200-base"
TOOLS_PLATFORM.ln?=             /bin/ln
.endif

#.if ${PKGPATH} == "devel/p5-FindBin-libs"
#TOOLS_PLATFORM.ln?=             /bin/ln -s
#.endif
