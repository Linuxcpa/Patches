.if ${PKGPATH} == "wm/py-tyle" || ${PKGPATH} == "devel/py-distribute" \
|| ${PKGPATH} == "games/heretic2-demo" || ${PKGPATH} == "security/py-keyring" \
|| ${PKGPATH} == "www/py-flask-testing"
CHECK_PERMS?=		no
.endif

.if ${PKGPATH} == "news/tin"
CHECK_WRKREF?=		no
.endif
