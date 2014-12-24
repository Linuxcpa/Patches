.if ${PKGPATH} == "devel/pkg-config" || ${PKGPATH} == "benchmarks/netio" \
|| ${PKGPATH} == "chat/anope" || ${PKGPATH} == "chat/emech" \
|| ${PKGPATH} == "comms/binkd" || ${PKGPATH} == "converters/yencode" \
|| ${PKGPATH} == "games/netris" || ${PKGPATH} == "net/wget" \
|| ${PKGPATH} == "mail/mutt" || ${PKGPATH} == "emulators/or1ksim" \
|| ${PKGPATH} == "graphics/libcaca" || ${PKGPATH} == "graphics/netpbm" \
|| ${PKGPATH} == "comms/minicom" || ${PKGPATH} == "mail/msmtp" \
|| ${PKGPATH} == "chat/bsflite" || ${PKGPATH} == "chat/jabberd" \
|| ${PKGPATH} == "lang/python34" || ${PKGPATH} == "security/cyrus-sasl" \
|| ${PKGPATH} == "devel/gobject-introspection" || ${PKGPATH} == "games/xfrisk" \
|| ${PKGPATH} == "mail/cyrus-imapd" || ${PKGPATH} == "mail/cyrus-imapd23" \
|| ${PKGPATH} == "mail/avenger" || ${PKGPATH} == "mail/nullmailer" \
|| ${PKGPATH} == "mail/pfqueue" || ${PKGPATH} == "mail/procmail" \
|| ${PKGPATH} == "mail/pulsar" || ${PKGPATH} == "mail/solid-pop3d" \
|| ${PKGPATH} == "mail/spamassassin" || ${PKGPATH} == "misc/cstream" \
|| ${PKGPATH} == "misc/open2300-mysql" || ${PKGPATH} == "misc/open2300" \
|| ${PKGPATH} == "multimedia/ccxstream" || ${PKGPATH} == "multimedia/smpeg" \
|| ${PKGPATH} == "net/chimera" || ${PKGPATH} == "net/inadyn" \
|| ${PKGPATH} == "net/ipgrab" || ${PKGPATH} == "net/ipw" \
|| ${PKGPATH} == "net/ishell" || ${PKGPATH} == "net/msdl" \
|| ${PKGPATH} == "devel/libnet11" || ${PKGPATH} == "net/barnyard" \
|| ${PKGPATH} == "net/pxe" || ${PKGPATH} == "net/traceroute-nanog" \
|| ${PKGPATH} == "net/zsync" || ${PKGPATH} == "security/cy2-anonymous" \
|| ${PKGPATH} == "security/cy2-crammd5" || ${PKGPATH} == "security/cy2-digestmd5" \
|| ${PKGPATH} == "security/cy2-gssapi" || ${PKGPATH} == "security/cy2-ldapdb" \
|| ${PKGPATH} == "security/cy2-login" || ${PKGPATH} == "security/cy2-ntlm" \
|| ${PKGPATH} == "security/cy2-otp" || ${PKGPATH} == "security/cy2-plain" \
|| ${PKGPATH} == "security/cy2-saml" || ${PKGPATH} == "security/cy2-scram" \
|| ${PKGPATH} == "security/cy2-sql" || ${PKGPATH} == "security/cyrus-saslauthd" \
|| ${PKGPATH} == "security/arirang" || ${PKGPATH} == "www/analog" \
|| ${PKGPATH} == "www/lhs" || ${PKGPATH} == "net/chksniff" \
|| ${PKGPATH} == "net/cidr" || ${PKGPATH} == "net/connect"
LIBS.Haiku+=	-lnetwork
.endif

.if ${PKGPATH} == "security/cyrus-sasl" || ${PKGPATH} == "mail/cyrus-imapd" \
|| ${PKGPATH} == "mail/cyrus-imapd23" || ${PKGPATH} == "mail/avenger" \
|| ${PKGPATH} == "mail/cyrus-imapd24" || ${PKGPATH} == "sysutils/libpciaccess" \
|| ${PKGPATH} == "x11/libdrm" || ${PKGPATH} == "mail/procmail" \
|| ${PKGPATH} == "net/gini" || ${PKGPATH} == "net/libexosip" \
|| ${PKGPATH} == "shells/nologinmsg" || ${PKGPATH} == "textproc/lout"
LIBS.Haiku+= -lbsd
.endif

