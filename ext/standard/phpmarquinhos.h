/* 
   +----------------------------------------------------------------------+
   | PHP Version 5 - marquinhos version                                   |
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
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHPMARQUINHOS_H
#define PHPMARQUINHOS_H

BEGIN_EXTERN_C()
PHP_FUNCTION(phpmarquinhos);
PHPAPI void php_print_marquinhos_function(int flag TSRMLS_DC);
END_EXTERN_C()

#endif /* PHPMARQUINHOS_H */
