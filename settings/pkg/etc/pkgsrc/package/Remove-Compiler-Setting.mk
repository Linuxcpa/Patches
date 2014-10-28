#Removes compiler options that cause build fail for specific packages

.if ${PKGPATH} == chat/anope || ${PKGPATH} == "chat/ctrlproxy" \
|| ${PKGPATH} == "chat/eggdrop" || ${PKGPATH} == "cad/covered" \
|| ${PKGPATH} == "cad/covered-current" || ${PKGPATH} == "cad/MyHDL-iverilog" \
|| ${PKGPATH} == "cad/verilog" || ${PKGPATH} == "cad/verilog-current"
BUILDLINK_TRANSFORM+= rm:-rdynamic
.endif
