#Removes compiler options that cause build fail for specific packages

.if ${PKGPATH} == chat/anope || ${PKGPATH} == "chat/ctrlproxy" \
|| ${PKGPATH} == "chat/eggdrop" || ${PKGPATH} == "cad/covered" \
|| ${PKGPATH} == "cad/covered-current" || ${PKGPATH} == "cad/MyHDL-iverilog" \
|| ${PKGPATH} == "cad/verilog" || ${PKGPATH} == "cad/verilog-current" \
|| ${PKGPATH} == "devel/dia2code" || ${PKGPATH} == "multimedia/mencoder" \
|| ${PKGPATH} == "multimedia/mplayer"
BUILDLINK_TRANSFORM+= rm:-rdynamic
.endif

.if ${PKGPATH} == "devel/pango"
BUILDLINK_TRANSFORM+= rm:-no-undefined
.endif
