# LD flags to pass to make for specifc packages

.if ${PKGPATH} == "www/serf"
LDFLAGS+= -Wl,-R${PREFIX}/lib
.endif

.if ${PKGPATH} == "devel/p5-subversion"
LDFLAGS+= -lssp_nonshared
.endif

.if ${PKGPATH} == "net/samba" || ${PKGPATH} == "lang/gcc48-libs" \
|| ${PKGPATH} == "chat/anope" 
LDFLAGS+= -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "lang/gcc48-libs"
LDFLAGS+= -L/boot/system/lib
.endif

.if ${PKGPATH} == "chat/gtmess" || ${PKGPATH} == "print/luatex"
LDFLAGS+= -L/boot/system/lib
.endif

.if ${PKGPATH} == "graphics/netpbm" || ${PKGPATH} == "security/tcp_wrappers" \
|| ${PKGPATH} == "benchmarks/httperf" || ${PKGPATH} == "benchmarks/netpipe" \
|| ${PKGPATH} == "chat/goofey" || ${PKGPATH} == "devel/git-base"
LDFLAGS+= -lnetwork
.endif

.if ${PKGPATH} == "textproc/xmlcatmgr" || ${PKGPATH} == "graphics/netpbm" \
|| ${PKGPATH} == "textproc/mdocml" || ${PKGPATH} == "security/mit-krb5" \
|| ${PKGPATH} == "devel/git-base" || ${PKGPATH} == "archivers/p7zip" \
|| ${PKGPATH} == "mail/msmtp" || ${PKGPATH} == "devel/editline" \
|| ${PKGPATH} == "devel/bmkdep" || ${PKGPATH} == "archivers/unrar"
LDFLAGS+= -lbsd
.endif

.if ${PKGPATH} == "net/libpcap" || ${PKGPATH} == "lang/python27" \
|| ${PKGPATH} == "chat/iip" || ${PKGPATH} == "chat/icbirc" \
|| ${PKGPATH} == "chat/mu-conference"
LDFLAGS = -L/boot/system/lib -lnetwork -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "chat/icbirc" || ${PKGPATH} == "devel/git-base"
LDFLAGS+= -L/boot/system/lib -lnetwork -lbsd -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "devel/gobject-introspection"
LDFLAGS+= -L/boot/system/lib -lnetwork -lbsd -Wl,-R/boot/system/lib
#CONFIGURE_ARGS+= -libdir=/boot/system/lib
.endif
