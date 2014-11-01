#Remove hard links from certain package build processes for specific packages

.if ${PKGPATH} == archivers/bzip2 || ${PKGPATH} == "archivers/rzip" \
|| ${PKGPATH} == "devel/cmake" || ${PKGPATH} == "lang/ruby200-base" \
|| ${PKGPATH} == "math/fftw" || ${PKGPATH} == "archivers/pigz" \
|| ${PKGPATH} == "archivers/libzip" || ${PKGPATH} == "net/bind99" 
TOOLS_PLATFORM.ln?=             /bin/ln -s
.endif
