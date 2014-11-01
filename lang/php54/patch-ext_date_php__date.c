$NetBSD$

--- ext/date/php_date.c.orig	2014-09-17 07:03:27.000000000 +0000
+++ ext/date/php_date.c
@@ -33,7 +33,7 @@
 
 #ifdef PHP_WIN32
 static __inline __int64 php_date_llabs( __int64 i ) { return i >= 0? i: -i; }
-#elif defined(__GNUC__) && __GNUC__ < 3
+#elif (defined(__GNUC__) && __GNUC__ < 3) && (!defined __HAIKU__)
 static __inline __int64_t php_date_llabs( __int64_t i ) { return i >= 0 ? i : -i; }
 #else
 static inline long long php_date_llabs( long long i ) { return i >= 0 ? i : -i; }
@@ -50,11 +50,7 @@ static inline long long php_date_llabs( 
 		int st = snprintf(s, len, "%lld", i); \
 		s[st] = '\0'; \
 	} while (0);
-#ifdef HAVE_ATOLL
 # define DATE_A64I(i, s) i = atoll(s)
-#else
-# define DATE_A64I(i, s) i = strtoll(s, NULL, 10)
-#endif
 #endif
 
 /* {{{ arginfo */
@@ -2398,7 +2394,11 @@ static void date_object_free_storage_per
 /* Advanced Interface */
 PHPAPI zval *php_date_instantiate(zend_class_entry *pce, zval *object TSRMLS_DC)
 {
+	Z_TYPE_P(object) = IS_OBJECT;
 	object_init_ex(object, pce);
+	Z_SET_REFCOUNT_P(object, 1);
+	Z_UNSET_ISREF_P(object);
+
 	return object;
 }
 
@@ -2506,19 +2506,14 @@ PHP_FUNCTION(date_create)
 	zval           *timezone_object = NULL;
 	char           *time_str = NULL;
 	int             time_str_len = 0;
-	zval            datetime_object;
 
 	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|sO!", &time_str, &time_str_len, &timezone_object, date_ce_timezone) == FAILURE) {
 		RETURN_FALSE;
 	}
 
-	php_date_instantiate(date_ce_date, &datetime_object TSRMLS_CC);
-	if (!php_date_initialize(zend_object_store_get_object(&datetime_object TSRMLS_CC), time_str, time_str_len, NULL, timezone_object, 0 TSRMLS_CC)) {
-		zval_dtor(&datetime_object);
+	php_date_instantiate(date_ce_date, return_value TSRMLS_CC);
+	if (!php_date_initialize(zend_object_store_get_object(return_value TSRMLS_CC), time_str, time_str_len, NULL, timezone_object, 0 TSRMLS_CC)) {
 		RETURN_FALSE;
-	} else {
-		zval *datetime_object_ptr = &datetime_object;
-		RETVAL_ZVAL(datetime_object_ptr, 0, 0);
 	}
 }
 /* }}} */
@@ -2531,19 +2526,14 @@ PHP_FUNCTION(date_create_from_format)
 	zval           *timezone_object = NULL;
 	char           *time_str = NULL, *format_str = NULL;
 	int             time_str_len = 0, format_str_len = 0;
-	zval            datetime_object;
 
 	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "ss|O", &format_str, &format_str_len, &time_str, &time_str_len, &timezone_object, date_ce_timezone) == FAILURE) {
 		RETURN_FALSE;
 	}
 
-	php_date_instantiate(date_ce_date, &datetime_object TSRMLS_CC);
-	if (!php_date_initialize(zend_object_store_get_object(&datetime_object TSRMLS_CC), time_str, time_str_len, format_str, timezone_object, 0 TSRMLS_CC)) {
-		zval_dtor(&datetime_object);
+	php_date_instantiate(date_ce_date, return_value TSRMLS_CC);
+	if (!php_date_initialize(zend_object_store_get_object(return_value TSRMLS_CC), time_str, time_str_len, format_str, timezone_object, 0 TSRMLS_CC)) {
 		RETURN_FALSE;
-	} else {
-		zval *datetime_object_ptr = &datetime_object;
-		RETVAL_ZVAL(datetime_object_ptr, 0, 0);
 	}
 }
 /* }}} */
@@ -2566,7 +2556,7 @@ PHP_METHOD(DateTime, __construct)
 }
 /* }}} */
 
-static int php_date_initialize_from_hash(php_date_obj **dateobj, HashTable *myht TSRMLS_DC)
+static int php_date_initialize_from_hash(zval **return_value, php_date_obj **dateobj, HashTable *myht TSRMLS_DC)
 {
 	zval            **z_date = NULL;
 	zval            **z_timezone = NULL;
@@ -2636,7 +2626,7 @@ PHP_METHOD(DateTime, __set_state)
 
 	php_date_instantiate(date_ce_date, return_value TSRMLS_CC);
 	dateobj = (php_date_obj *) zend_object_store_get_object(return_value TSRMLS_CC);
-	if (!php_date_initialize_from_hash(&dateobj, myht TSRMLS_CC)) {
+	if (!php_date_initialize_from_hash(&return_value, &dateobj, myht TSRMLS_CC)) {
 		php_error(E_ERROR, "Invalid serialization data for DateTime object");
 	}
 }
@@ -2654,7 +2644,7 @@ PHP_METHOD(DateTime, __wakeup)
 
 	myht = Z_OBJPROP_P(object);
 
-	if (!php_date_initialize_from_hash(&dateobj, myht TSRMLS_CC)) {
+	if (!php_date_initialize_from_hash(&return_value, &dateobj, myht TSRMLS_CC)) {
 		php_error(E_ERROR, "Invalid serialization data for DateTime object");
 	}
 }
