#Removes compiler options that cause build fail for specific packages

.if ${PKGPATH} == chat/anope || ${PKGPATH} == "devel/dia2code" \
|| ${PKGPATH} == "multimedia/mencoder" || ${PKGPATH} == "www/goaccess" \
|| ${PKGPATH} == "multimedia/mplayer" || ${PKGPATH} == "net/powerdns" \
|| ${PKGPATH} == "security/google-authenticator" || ${PKGPATH} == "shells/fish" \
|| ${PKGPATH} == "shells/scsh" || ${PKGPATH} == "www/c-icap" \
|| ${PKGPATH} == "x11/Xsdl"
BUILDLINK_TRANSFORM+= rm:-rdynamic
.endif

#Not installed yet
.if ${PKGPATH} == "chat/ctrlproxy" || ${PKGPATH} == "chat/eggdrop" \
|| ${PKGPATH} == "cad/covered-current" || ${PKGPATH} == "cad/MyHDL-iverilog" \
|| ${PKGPATH} == "cad/verilog" || ${PKGPATH} == "cad/verilog-current" \
|| ${PKGPATH} == "cad/covered"
BUILDLINK_TRANSFORM+= rm:-rdynamic
.endif

#Below here not working question validity

#.if ${PKGPATH} == "devel/pango"
#BUILDLINK_TRANSFORM+= rm:-no-undefined
#.endif


