#pkgsrc build options for specific packages

PKG_OPTIONS.perl= -threads

PKG_OPTIONS.git= -git-send-email

PKG_OPTIONS.SDL= aalib

PKG_OPTIONS.gcc47= -gcc-fortran -gcc-java -gcc-objc -gcc-objc++

PKG_OPTIONS.gcc48= -gcc-graphite -gcc-java

PKG_OPTIONS.freetype2= subpixel

#PKG_OPTIONS.mplayer= -mplayer-runtime-cpudetection

PKG_OPTIONS.psi= -enchant -aspell

PKG_OPTIONS.mc= mc-samba ncurses

#PKG_OPTIONS.php= suhosin

PKG_OPTIONS.cherokee= -pam

PKG_OPTIONS.boost= icu

PKG_OPTIONS.cairo= -xcb

PKG_OPTIONS.samba= -ads -ldap -winbind -pam

PKG_OPTIONS.subversion= -serf

PKG_OPTIONS.tinyproxy= -socks5

PKG_OPTIONS.squid= -inet6 -snmp -squid-backend-diskd -squid-carp -squid-pam-helper squid-unlinkd ssl
