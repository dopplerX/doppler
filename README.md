## Building Doppler

### On *nix:

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55 or later.

You may download them from:

- http://gcc.gnu.org/
- http://www.cmake.org/
- http://www.boost.org/


Build commands:
```
cd ~

sudo apt-get install build-essential git cmake libboost1.58-all-dev

git clone https://github.com/dopplerX/doppler.git doppler 

cd doppler 

mkdir build && cd build && cmake .. && make
```
You will find dopplerd (daemon) and doppler-wallet-cli on /doppler/build/src



Parallel build: run `make -j<number of threads>` instead of `make`.

Debug build: run `make build-debug`.

Test suite: run `make test-release` to run tests in addition to building. Running `make test-debug` will do the same to the debug version.

Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++` before running `make`.

### On Windows:
Dependencies: MSVC 2015 or later, CMake 2.8.6 or later, and Boost 1.59 or later. You may download them from:

- http://www.microsoft.com/
- http://www.cmake.org/
- http://www.boost.org/

To build, change to a directory where this file is located, and run this commands:
```
mkdir build
cd build
cmake -G "Visual Studio 14 2015" ..
```

And then do Build.

Good luck!
