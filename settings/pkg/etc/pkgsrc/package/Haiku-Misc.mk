#Miscellaneous settings for sucessful compile for specific packages

.if ${PKGPATH} == "security/tcp_wrappers" || ${PKGPATH} == "x11/qt4-libs"
BUILD_TARGET.Haiku= haiku
.endif

.if ${PKGPATH} == "pkgtools/rc.subr" || ${PKGPATH} == "lang/ghc7"
ONLY_FOR_PLATFORM+= Haiku-*-*
.endif

.if ${PKGPATH} == "benchmarks/netpipe"
MAKE_ENV+=	EXTRA_LIBS="-lnetwork"
.endif

.if ${PKGPATH} == "benchmarks/nttcp"
MAKE_ENV+=	LIB="-lnetwork"
.endif

.if ${PKGPATH} == "lang/python27"
USE_BUILTIN.zlib=	no
.endif

.if ${PKGPATH} == "net/balance"
MAKE_ENV+=	LIBRARIES="-lnetwork"
.endif

.if ${PKGPATH} == "security/sslproxy" || ${PKGPATH} == "sysutils/amtterm"
MAKE_ENV+=	LDLIBS="-lnetwork"
.endif

.if ${PKGPATH} == "security/sslwrap"
LDADD.Haiku=	-lnetwork
.endif

.if ${PKGPATH} == "graphics/ImageMagick"
post-extract:
	${CP} ${FILESDIR}/pango.c ${WRKSRC}/coders
.endif
