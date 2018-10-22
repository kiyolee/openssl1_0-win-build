# openssl1_0-win-build

openssl-1.0 Windows build with Visual Studio.

This version is openssl-1.0.2p.

See win-build-info for general information about the
win-build effort.

To build, simply open the required solution file, and
you know how to use Visual Studio, right?
(or perhaps this is the wrong place for you.)

Depends on zlib-win-build. There are hard references assuming
zlib-win-build sits next to openssl1_0-win-build.

Basically, in a command prompt:

> \> cd {somewhere}\\  
> \> git clone https://github.com/kiyolee/zlib-win-build.git  
> \> git clone https://github.com/kiyolee/openssl1_0-win-build.git

Build zlib first and then openssl1_0, with the same corresponding Visual Studio solution of course.

Note that only zlib static libraries are used.

### Third Party Tools:

The following third party tools are required:

1. Perl

   Any reasonably recent version should be fine.\
   ActivePerl from ActiveState is used to develop this project.\
   Download ActivePerl from https://www.activestate.com/activeperl/.

2. NASM (Assembler)

   Download NASM from https://www.nasm.us.

Make sure both perl and nasm can be found through command path.

### Highlights:

1. Multiple Visual Studio versions build happily sharing the same build directory.
2. Build both 32-bit (x86) and 64-bit (x64) binaries in one solution.
3. Assembly sources are generated from original perlasm scripts. No pre-generated assembly source are checked in.
4. Keyboard is optional. (Once this repository is cloned.)

### Testing:

To test one set of output binaries that use DLLs:

> \> cd {somewhere}\openssl1_0-win-build\
> \> ms\test_one.cmd build-{vsver}\\{outdir}

where build-{vsver} is one of the VS build directories and {outdir} is one of the following:
* Release (32-bit release build)
* Debug (32-bit debug build)
* x64\Release (64-bit release build)
* x64\Debug (64-bit debug build)

To test one set of output binaries that use static libraries:

> \> cd {somewhere}\openssl1_0-win-build\
> \> ms\test_one.cmd build-{vsver}\\{outdir} -static

To test all binaries that have been built:

> \> cd {somewhere}\openssl1_0-win-build\
> \> ms\test_all.cmd
