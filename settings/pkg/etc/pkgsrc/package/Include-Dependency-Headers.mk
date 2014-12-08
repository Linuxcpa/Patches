.if ${PKGPATH} == "converters/odt2txt" || ${PKGPATH} == "devel/astyle"
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
