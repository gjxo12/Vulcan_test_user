## Vulcan_test_user

cmkae Build and target

`cmake -S . -B build -G "MinGW Makefiles"`

main code 

`cmake --build build --target ROOT.main`

unittest code

`cmake --build build --target ROOT.unittest`


GCC build

`gcc -o test src/main.c`

GCC test build

`g++ -o main_test test/test.cpp src/main.c -lgtest -lpthread`