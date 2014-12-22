#Select a specific compiler for specific packages

#Use pkgsrc gcc4 for these packages
#.if ${PKGPATH} == "multimedia/ffmpeg2" || ${PKGPATH} == "multimedia/ffmpeg1" \
#|| ${PKGPATH} == "multimedia/ffplay" || ${PKGPATH} == "multimedia/ffplay2" \
#|| ${PKGPATH} == "multimedia/ffmpeg010"
#USE_PKGSRC_GCC= yes
#GCC_REQD= 4.7
#.endif

.if ${PKGPATH} == "devel/zlib"
USE_CMAKE += yes
USE_LIBTOOL+=		no
PKGCONFIG_OVERRIDE+=	zlib.pc
SUBST_FILES.pc= zlib.pc
.endif

.if ${PKGPATH} == "audio/portaudio"
USE_CMAKE += yes
.endif
