# LD flags to pass to make for specifc packages

.if ${PKGPATH} == "www/serf"
LDFLAGS+= -Wl,-R${PREFIX}/lib
.endif

.if ${PKGPATH} == "devel/p5-subversion"
LDFLAGS+= -lssp_nonshared
.endif

.if ${PKGPATH} == "net/samba" || ${PKGPATH} == "lang/gcc48-libs"
LDFLAGS+= -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "lang/gcc48-libs"
LDFLAGS+= -L/boot/system/lib
.endif

.if ${PKGPATH} == "graphics/netpbm" || ${PKGPATH} == "security/tcp_wrappers"
LDFLAGS+= -lnetwork
.endif

.if ${PKGPATH} == "textproc/xmlcatmgr" || ${PKGPATH} == "graphics/netpbm" \
|| ${PKGPATH} == "textproc/mdocml" || ${PKGPATH} == "security/mit-krb5" \
|| ${PKGPATH} == "devel/git-base" || ${PKGPATH} == "archivers/p7zip" \
|| ${PKGPATH} == "mail/msmtp" || ${PKGPATH} == "devel/editline" \
|| ${PKGPATH} == "devel/bmkdep" || ${PKGPATH} == "archivers/unrar"
LDFLAGS+= -lbsd
.endif
