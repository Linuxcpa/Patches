#Select a specific compiler for specific packages

#Use pkgsrc gcc4 for these packages
.if ${PKGPATH} == "multimedia/ffmpeg2" || ${PKGPATH} == "multimedia/ffmpeg" \
|| ${PKGPATH} == "multimedia/ffplay" || ${PKGPATH} == "multimedia/ffplay2" \
|| ${PKGPATH} == "multimedia/ffmpeg010"
USE_PKGSRC_GCC= yes
GCC_REQD= 4.7
.endif
