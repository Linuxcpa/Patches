.if ${PKGPATH} == "devel/pkg-config" || ${PKGPATH} == "benchmarks/netio"
LIBS.Haiku+=	-lnetwork
.endif
