# Every PHP Package in Haiku Needs This.

.if ${PKGPATH} == "archivers/php-bz2" || ${PKGPATH} == "archivers/php-zip" \
|| ${PKGPATH} == "archivers/php-zlib" || ${PKGPATH} == "time/php-calendar" \
|| ${PKGPATH} == "converters/php-iconv" || ${PKGPATH} == "converters/php-mbstring" \
|| ${PKGPATH} == "devel/php-gettext" || ${PKGPATH} == "devel/php-gmp" \
|| ${PKGPATH} == "devel/php-libawl" || ${PKGPATH} == "devel/php-memcache" \
|| ${PKGPATH} == "devel/php-memcached" || ${PKGPATH} == "devel/php-mode" \
|| ${PKGPATH} == "devel/php-opcache" || ${PKGPATH} == "devel/php-pcntl" \
|| ${PKGPATH} == "devel/php-posix" || ${PKGPATH} == "devel/php-shmop" \
|| ${PKGPATH} == "devel/php-sysvmsg" || ${PKGPATH} == "devel/php-sysvsem" \
|| ${PKGPATH} == "devel/php-sysvshm" || ${PKGPATH} == "databases/php-dba" \
|| ${PKGPATH} == "databases/php-dbx" || ${PKGPATH} == "databases/php-ldap" \
|| ${PKGPATH} == "databases/php-mssql" || ${PKGPATH} == "databases/php-mysql" \
|| ${PKGPATH} == "databases/php-mysqli" || ${PKGPATH} == "databases/php-oci8" \
|| ${PKGPATH} == "databases/php-pdo" || ${PKGPATH} == "databases/php-pdo_dblib" \
|| ${PKGPATH} == "databases/php-pdo_mysql" || ${PKGPATH} == "databases/php-pdo_odbc" \
|| ${PKGPATH} == "databases/php-pdo_pqsql" || ${PKGPATH} == "databases/php-pdo_sqlite" \
|| ${PKGPATH} == "databases/php-pgsql" || ${PKGPATH} == "databases/php-redis" \
|| ${PKGPATH} == "databases/php-sqlite" || ${PKGPATH} == "databases/php-sqlrelay" \
|| ${PKGPATH} == "mail/php-imap" || ${PKGPATH} == "math/php-bcmath" \
|| ${PKGPATH} == "misc/php-orangehrm" || ${PKGPATH} == "editors/vile" \
|| ${PKGPATH} == "multimedia/smpeg" || ${PKGPATH} == "graphics/php-exif" \
|| ${PKGPATH} == "graphics/php-gd" || ${PKGPATH} == "graphics/php-jpgraph" \
|| ${PKGPATH} == "graphics/pear-Image_Canvas" || ${PKGPATH} == "graphics/pear-Image_Color" \
|| ${PKGPATH} == "graphics/pear-Image_Graph" || ${PKGPATH} == "graphics/grap" \
|| ${PKGPATH} == "print/luatex" || ${PKGPATH} == "mail/pear-Auth_SASL" \
|| ${PKGPATH} == "mail/pear-Mail" || ${PKGPATH} == "mail/pear-Mail_Mime" \
|| ${PKGPATH} == "mail/pear-Mail_mimeDecode" || ${PKGPATH} == "mail/squirrelmail" \
|| ${PKGPATH} == "mail/squirrelmail-decode" || ${PKGPATH} == "mail/squirrelmail-locales" \
|| ${PKGPATH} == "mail/roundcube" || ${PKGPATH} == "textproc/php-dom" \
|| ${PKGPATH} == "math/pear-Math_BigInteger" || ${PKGPATH} == "audio/libao-oss" \
|| ${PKGPATH} == "multimedia/php-ming" || ${PKGPATH} == "net/php-ftp" \
|| ${PKGPATH} == "net/php-geoip" || ${PKGPATH} == "net/php-snmp" \
|| ${PKGPATH} == "net/php-soap" || ${PKGPATH} == "net/php-sockets" \
|| ${PKGPATH} == "net/php-xmlrpc" || ${PKGPATH} == "net/php-yaz" \
|| ${PKGPATH} == "print/php-pdflib" || ${PKGPATH} == "security/libpcap" \
|| ${PKGPATH} == "x11/fltk13" || ${PKGPATH} == "security/php-mcrypt" \
|| ${PKGPATH} == "security/php-oauth" || ${PKGPATH} == "security/php-ssdeep" \
|| ${PKGPATH} == "security/php-suhosin" || ${PKGPATH} == "math/fftw" \
|| ${PKGPATH} == "sysutils/pear-log" || ${PKGPATH} == "graphics/ImageMagick" \
|| ${PKGPATH} == "textproc/pear-Console_Table" || ${PKGPATH} == "textproc/pear-File_Find" \
|| ${PKGPATH} == "textproc/php-enchant" || ${PKGPATH} == "textproc/php-intl" \
|| ${PKGPATH} == "textproc/php-json" || ${PKGPATH} == "textproc/php-mecab" \
|| ${PKGPATH} == "textproc/php-pspell" || ${PKGPATH} == "textproc/php-wddx" \
|| ${PKGPATH} == "textproc/php-xsl"|| ${PKGPATH} == "www/pear-HTML_Common" \
|| ${PKGPATH} == "www/pear-HTML_Select"|| ${PKGPATH} == "www/pear-HTML_TreeMenu" \
|| ${PKGPATH} == "www/pear-HTTP"|| ${PKGPATH} == "www/php-apc" \
|| ${PKGPATH} == "www/php-basercms"|| ${PKGPATH} == "www/php-concrete5" \
|| ${PKGPATH} == "www/php-curl"|| ${PKGPATH} == "www/php-eaccelerator" \
|| ${PKGPATH} == "www/php-fpm"|| ${PKGPATH} == "www/php-http" \
|| ${PKGPATH} == "www/php-ja-wordpress"|| ${PKGPATH} == "www/php-owncloud" \
|| ${PKGPATH} == "www/php-phrasea2"|| ${PKGPATH} == "www/php-piwigo" \
|| ${PKGPATH} == "www/php-soycms"|| ${PKGPATH} == "www/php-sugarcrm" \
|| ${PKGPATH} == "www/php-tidy"|| ${PKGPATH} == "www/php-tiki6" \
|| ${PKGPATH} == "www/php-tt-rss"|| ${PKGPATH} == "www/php-tt-rss-fever-plugin" \
|| ${PKGPATH} == "www/php-uploadprogress"|| ${PKGPATH} == "www/php-zendoptimizerplus" \
|| ${PKGPATH} == "lang/ruby200-base" || ${PKGPATH} == "audio/libao-oss"
SHLIBTOOL_OVERRIDE= # empty
LDFLAGS.Haiku+= -Wl,--rpath
.endif

.if ${PKGPATH} == "archivers/php-zip" || ${PKGPATH} == "archivers/php-zlib" \
|| ${PKGPATH} == "devel/php-memcache" || ${PKGPATH} == "devel/php-memcached"
CONFIGURE_ARGS+=	--with-zlib-dir=/boot/home/pkg
CONFIGURE_ARGS+=    --includedir=/boot/home/pkg/include
.endif
