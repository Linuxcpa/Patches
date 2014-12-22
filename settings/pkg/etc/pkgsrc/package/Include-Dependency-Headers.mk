.if ${PKGPATH} == "converters/odt2txt" || ${PKGPATH} == "devel/astyle" \
|| ${PKGPATH} == "security/courier-authlib" || ${PKGPATH} == "shells/fish" \
|| ${PKGPATH} == "textproc/ocaml-text" || ${PKGPATH} == "textproc/unac" \
|| ${PKGPATH} == "www/htmlcxx"
.include "../../converters/libiconv/buildlink3.mk"
.endif

.if ${PKGPATH} == "converters/pyzy"
.include "../../devel/libuuid/buildlink3.mk"
.endif

#.if ${PKGPATH} == "devel/rcs"
#.include "../../editors/ed/buildlink3.mk"
#.endif

#.if ${PKGPATH} == "editors/vile"
#.include "../../devel/flex/buildlink3.mk"
#.endif

#.if ${PKGPATH} == "games/angband-tty"
#.include "../../devel/ncurses/buildlink3.mk"
#.include "../../mk/curses.buildlink3.mk"
#.include "../../mk/terminfo.buildlink3.mk"
#.endif

.if ${PKGPATH} == "www/c-icap-modules"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../converters/libiconv/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.endif

.if ${PKGPATH} == "net/chimera"
.include "../../security/openssl/buildlink3.mk"
.endif

.if ${PKGPATH} == "net/gift"
.include "../../devel/libltdl/buildlink3.mk"
.endif

.if ${PKGPATH} == "shells/zsh" || ${PKGPATH} == "shells/fish" \
|| ${PKGPATH} == "devel/p5-Term-ReadLine"
.include "../../devel/ncurses/buildlink3.mk"
.include "../../mk/curses.buildlink3.mk"
.include "../../mk/terminfo.buildlink3.mk"
.endif

.if ${PKGPATH} == "www/ocsigen"
.include "../../textproc/ocaml-text/buildlink3.mk"
.endif
