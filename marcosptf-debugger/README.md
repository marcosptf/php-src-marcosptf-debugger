The PHP Interpreter - code source - marcosptf debugger - php-5.5-dev version - fc22
===================

    #to compile this code source
    $ dnf install gcc libc-dev make autoconf automake libtool re2c
    $ wget ftp://rpmfind.net/linux/sourceforge/s/sl/sl7-i686-project/yum/FEDOREL7/FULLMISSING/bison-2.7-4.el7.i686.rpm
    $ dnf install bison-2.7-4.el7.i686.rpm
    $ ./buildconf
    #configure PHP in debug mode and with thread safety
    $ ./configure --disable-all --disable-cgi --enable-debug --enable-maintainer-zts
    # lista todas as opcoes
    $ ./configure --help | tail -25
    # exemplo de outras opcoes
    # ./configure --disable-all CC=clang CFLAGS="-O3 -march=native"
    $ ./configure
    $ make
    $ make install
    $ /usr/local/bin/php --version
    #something wrong?
    $ make clean
    $ make distclean
    $ ./vcsclean
    $ git clean -X -f -d
    
    # to run tests
    $ php run-tests.php -P Zend/ ext/reflection/ ext/standard/tests/array/
    $ run-tests.php
    $ make test
    $ make test TESTS="Zend/ ext/reflection/ ext/standard/tests/array/"    

    #depois de compilado rodar para ver os modulos instalados
    $ php -m
    #lista as opcoes de configuracao do php
    $ php-config
    #mostra o php_info();
    $ php -i
  
    # to change version label
    # https://github.com/marcosptf/php-src-marcosptf-debug/blob/master/configure.in#L124
    # https://github.com/marcosptf/php-src-marcosptf-debug/blob/master/Zend/zend.c#L130
    # https://github.com/marcosptf/php-src-marcosptf-debug/blob/master/Zend/zend.h#L25
    
    
    # arquivos do diretorio /Zend
    #a extensão l é para arquivos que geram lexers
    #a extensão y é dos arquivos que geram parsers (através do bison)
    #a extensão de .M4 me parece que é fragmento de Makefile
    #(aquele arquivo que tem as tasks quando vc digita make alguma coisa, ex.: make install)
