.if ${PKGPATH} == "converters/odt2txt" || ${PKGPATH} == "devel/astyle"
.include "../../converters/libiconv/buildlink3.mk"
.endif

.if ${PKGPATH} == "converters/pyzy"
.include "../../devel/libuuid/buildlink3.mk"
.endif

#.if ${PKGPATH} == "devel/rcs"
#.include "../../editors/ed/buildlink3.mk"
#.endif
