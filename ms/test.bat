@echo off

set test=..\ms
set opath=%PATH%
PATH=..\ms;%PATH%
set OPENSSL_CONF=..\apps\openssl.cnf

rem run this from inside the bin directory

echo rsa_test
rsa_test%BIN_SUFFIX%
if errorlevel 1 goto done

echo destest
destest%BIN_SUFFIX%
if errorlevel 1 goto done

echo ideatest
ideatest%BIN_SUFFIX%
if errorlevel 1 goto done

echo bftest
bftest%BIN_SUFFIX%
if errorlevel 1 goto done

echo shatest
shatest%BIN_SUFFIX%
if errorlevel 1 goto done

echo sha1test
sha1test%BIN_SUFFIX%
if errorlevel 1 goto done

echo md5test
md5test%BIN_SUFFIX%
if errorlevel 1 goto done

echo rc2test
rc2test%BIN_SUFFIX%
if errorlevel 1 goto done

echo rc4test
rc4test%BIN_SUFFIX%
if errorlevel 1 goto done

echo randtest
randtest%BIN_SUFFIX%
if errorlevel 1 goto done

echo dhtest
dhtest%BIN_SUFFIX%
if errorlevel 1 goto done

echo exptest
exptest%BIN_SUFFIX%
if errorlevel 1 goto done

echo dsatest
dsatest%BIN_SUFFIX%
if errorlevel 1 goto done

echo ectest
ectest%BIN_SUFFIX%
if errorlevel 1 goto done

echo testenc
call %test%\testenc openssl%BIN_SUFFIX%
if errorlevel 1 goto done

echo testpem
call %test%\testpem openssl%BIN_SUFFIX%
if errorlevel 1 goto done

echo testss
call %test%\testss openssl%BIN_SUFFIX%
if errorlevel 1 goto done

set SSL_TEST=ssltest%BIN_SUFFIX% -key keyU.ss -cert certU.ss -c_key keyU.ss -c_cert certU.ss -CAfile certCA.ss

echo test sslv2
ssltest%BIN_SUFFIX% -ssl2
if errorlevel 1 goto done

echo test sslv2 with server authentication
%SSL_TEST% -ssl2 -server_auth
if errorlevel 1 goto done

echo test sslv2 with client authentication
%SSL_TEST% -ssl2 -client_auth
if errorlevel 1 goto done

echo test sslv2 with both client and server authentication
%SSL_TEST% -ssl2 -server_auth -client_auth
if errorlevel 1 goto done

echo test sslv3
ssltest%BIN_SUFFIX% -ssl3
if errorlevel 1 goto done

echo test sslv3 with server authentication
%SSL_TEST% -ssl3 -server_auth
if errorlevel 1 goto done

echo test sslv3 with client authentication
%SSL_TEST% -ssl3 -client_auth
if errorlevel 1 goto done

echo test sslv3 with both client and server authentication
%SSL_TEST% -ssl3 -server_auth -client_auth
if errorlevel 1 goto done

echo test sslv2/sslv3
ssltest%BIN_SUFFIX%
if errorlevel 1 goto done

echo test sslv2/sslv3 with server authentication
%SSL_TEST% -server_auth
if errorlevel 1 goto done

echo test sslv2/sslv3 with client authentication
%SSL_TEST% -client_auth
if errorlevel 1 goto done

echo test sslv2/sslv3 with both client and server authentication
%SSL_TEST% -server_auth -client_auth
if errorlevel 1 goto done

echo test sslv2 via BIO pair
ssltest%BIN_SUFFIX% -bio_pair -ssl2
if errorlevel 1 goto done

echo test sslv2/sslv3 with 1024 bit DHE via BIO pair
ssltest%BIN_SUFFIX% -bio_pair -dhe1024dsa -v
if errorlevel 1 goto done

echo test sslv2 with server authentication via BIO pair
%SSL_TEST% -bio_pair -ssl2 -server_auth
if errorlevel 1 goto done

echo test sslv2 with client authentication via BIO pair
%SSL_TEST% -bio_pair -ssl2 -client_auth
if errorlevel 1 goto done

echo test sslv2 with both client and server authentication via BIO pair
%SSL_TEST% -bio_pair -ssl2 -server_auth -client_auth
if errorlevel 1 goto done

echo test sslv3 via BIO pair
ssltest%BIN_SUFFIX% -bio_pair -ssl3
if errorlevel 1 goto done

echo test sslv3 with server authentication via BIO pair
%SSL_TEST% -bio_pair -ssl3 -server_auth
if errorlevel 1 goto done

echo test sslv3 with client authentication  via BIO pair
%SSL_TEST% -bio_pair -ssl3 -client_auth
if errorlevel 1 goto done

echo test sslv3 with both client and server authentication via BIO pair
%SSL_TEST% -bio_pair -ssl3 -server_auth -client_auth
if errorlevel 1 goto done

echo test sslv2/sslv3 via BIO pair
ssltest%BIN_SUFFIX% -bio_pair
if errorlevel 1 goto done

echo test sslv2/sslv3 with server authentication
%SSL_TEST% -bio_pair -server_auth
if errorlevel 1 goto done

echo test sslv2/sslv3 with client authentication via BIO pair
%SSL_TEST% -bio_pair -client_auth
if errorlevel 1 goto done

echo test sslv2/sslv3 with both client and server authentication via BIO pair
%SSL_TEST% -bio_pair -server_auth -client_auth
if errorlevel 1 goto done

echo passed all tests
goto end
:done
echo problems.....
:end
PATH=%opath%
