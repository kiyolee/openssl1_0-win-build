@echo off
setlocal

cd %~dp0\..
set MY_ROOT=%cd%

set BIN_SUFFIX=%2

set BIN_DIR=%MY_ROOT%\%1
if exist %BIN_DIR%\openssl%BIN_SUFFIX%.exe goto :start0
@rem Assume argument is absolute directory.
set BIN_DIR=%1

:start0
if .%BIN_SUFFIX%. == .. goto :nosuffix
echo TESTING: %BIN_DIR% (BIN_SUFFIX:%BIN_SUFFIX%)
goto :start
:nosuffix
echo TESTING: %BIN_DIR%

:start
echo.

if not exist %BIN_DIR%\openssl%BIN_SUFFIX%.exe goto :noexe

pushd %MY_ROOT%\ms

path %BIN_DIR%;%PATH%

echo VERSION-INFO:
openssl%BIN_SUFFIX% version -a

if .%SKIP_TEST%. == .YES. goto :skiptest
echo.
call test.bat
:skiptest

popd

goto :done

:noexe
echo %BIN_DIR%\openssl%BIN_SUFFIX%.exe does not exist.

:done
endlocal
