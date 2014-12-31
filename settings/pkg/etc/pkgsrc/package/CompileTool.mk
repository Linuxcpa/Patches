#Select a specific compiler for specific packages

.if ${PKGPATH} == "devel/zlib"
USE_CMAKE += yes
USE_LIBTOOL+=		no
PKGCONFIG_OVERRIDE+=	zlib.pc
SUBST_FILES.pc= zlib.pc
.endif

.if ${PKGPATH} == "biology/mopac" || ${PKGPATH} == "biology/plink" \
|| ${PKGPATH} == "devel/libtool-fortran"|| ${PKGPATH} == "biology/puzzle" \
|| ${PKGPATH} == "parallel/mpi-ch" || ${PKGPATH} == "biology/gromacs" \
|| ${PKGPATH} == "cad/sci-wcalc" || ${PKGPATH} == "cad/wcalc" \
|| ${PKGPATH} == "biology/mpqc" || ${PKGPATH} == "biology/plink" \
|| ${PKGPATH} == "biology/py-mol" || ${PKGPATH} == "parallel/mpi-ch" \
|| ${PKGPATH} == "math/blas" || ${PKGPATH} == "math/py-numpy" \
|| ${PKGPATH} == "math/lapack" || ${PKGPATH} == "cad/tnt-mmtl"
IGNORE_G95=	yes
#.include "../../devel/libtool-fortran/buildlink3.mk"
.endif

#Not working below here

#Use pkgsrc gcc4 for these packages
#.if ${PKGPATH} == "multimedia/ffmpeg1"|| ${PKGPATH} == "multimedia/ffplay2" \
#|| ${PKGPATH} == "multimedia/ffplay" || ${PKGPATH} == "multimedia/ffmpeg010"
#USE_PKGSRC_GCC= yes
#GCC_REQD= 4.7
#.endif

.if ${PKGPATH} == "audio/portaudio"
USE_CMAKE += yes
.endif


