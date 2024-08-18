# Google test
```sh
cd (...)/google_test
cmake -S ./ -B build -G "MinGW Makefiles"
cmake --build build
./build/main.exe
ctest --test-dir build
```