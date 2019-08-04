/* 
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2014 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Rasmus Lerdorf <rasmus@php.net>                             |
   |          Zeev Suraski <zeev@zend.com>                                |
   |          Colin Viebrock <colin@easydns.com>                          |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "php.h"
#include "php_ini.h"
#include "php_globals.h"
#include "ext/standard/head.h"
#include "ext/standard/html.h"
#include "info.h"
#include "credits.h"
#include "css.h"
#include "SAPI.h"
#include <time.h>
#include "php_main.h"
#include "zend_globals.h"		/* needs ELS */
#include "zend_extensions.h"
#include "zend_highlight.h"
#ifdef HAVE_SYS_UTSNAME_H
#include <sys/utsname.h>
#endif



/* {{{ php_print_marquinhos_function
 */
PHPAPI void php_print_marquinhos_function(TSRMLS_D)
{
        php_info_print_table_start();
	php_info_print_table_header(1, " marquinhos version - @marcosptf ");
	php_info_print_table_row(1, "args-1 - funcao criada de modo builtin dentro de basic_functions.c;");
	php_info_print_table_row(2, "args-2 - PHPAPI void php_print_marquinhos_function(TSRMLS_D); ");
	php_info_print_table_row(3, "args-3 -  esta versao de phpcredits foi modificada por @marcosptf ");
	php_info_print_table_row(4, "args-4 -  esta versao de phpcredits foi modificada por @marcosptf ");
	php_info_print_table_row(5, "args-5 -  esta versao de phpcredits foi modificada por @marcosptf ");
	php_info_print_table_end();

}
/* }}} */


/* {{{ proto void phpcredits([int flag])
   Prints the list of people who've contributed to the PHP project */
PHP_FUNCTION(phpmarquinhos)
{
	long flag = PHP_CREDITS_ALL;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|l", &flag) == FAILURE) {
		return;
	}

	php_print_marquinhos_function(flag TSRMLS_CC);
	RETURN_TRUE;
}
/* }}} */


