#Remove hard links from certain package build processes for specific packages

.if ${PKGPATH} == archivers/bzip2 || ${PKGPATH} == "archivers/rzip" \
|| ${PKGPATH} == "devel/cmake" || ${PKGPATH} == "lang/ruby200-base" \
|| ${PKGPATH} == "math/fftw" || ${PKGPATH} == "archivers/pigz" \
|| ${PKGPATH} == "archivers/libzip" || ${PKGPATH} == "net/bind99" \
|| ${PKGPATH} == "lang/tcl" || ${PKGPATH} == "x11/tk" \
|| ${PKGPATH} == "net/libpcap" || ${PKGPATH} == "converters/unix2dos" \
|| ${PKGPATH} == "geography/proj" || ${PKGPATH} == "editors/bvi" \
|| ${PKGPATH} == "lang/pfe" || ${PKGPATH} == "math/newmat" \
|| ${PKGPATH} == "misc/ja-man" || ${PKGPATH} == "net/bind96" \
|| ${PKGPATH} == "devel/p5-FindBin-libs" || ${PKGPATH} == "net/bind98" \
|| ${PKGPATH} == "net/bind910" || ${PKGPATH} == "net/whoson" \
|| ${PKGPATH} == "security/seccure" || ${PKGPATH} == "shells/rc" \
|| ${PKGPATH} == "sysutils/hfsutils" || ${PKGPATH} == "textproc/diction" \
|| ${PKGPATH} == "textproc/ispell" || ${PKGPATH} == "textproc/ispell-de" \
|| ${PKGPATH} == "textproc/ispell-en_GB" || ${PKGPATH} == "textproc/ispell-es" \
|| ${PKGPATH} == "textproc/harmony"
TOOLS_PLATFORM.ln?=             /bin/ln -s
.endif
