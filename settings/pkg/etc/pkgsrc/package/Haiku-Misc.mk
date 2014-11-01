#Miscellaneous settings for sucessful compile for specific packages

.if ${PKGPATH} == "net/3proxy"
MAKE_FILE= Makefile.haiku
.endif

.if ${PKGPATH} == "security/tcp_wrappers"
BUILD_TARGET.Haiku= haiku
.endif

.if ${PKGPATH} == "pkgtools/rc.subr"
ONLY_FOR_PLATFORM+= Haiku-*-*
.endif

.if ${PKGPATH} == "benchmarks/netpipe"
MAKE_ENV+=	EXTRA_LIBS="-lnetwork"
.endif

.if ${PKGPATH} == "benchmarks/nttcp"
MAKE_ENV+=	LIB="-lnetwork"
.endif

