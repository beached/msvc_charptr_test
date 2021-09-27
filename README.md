# msvc_charptr_test

Issue in MSVC can be reproduced by 

```
git clone https://github.com/beached/msvc_charptr_test.git
cd mscv_charptr_test
mkdir build
cd build
cmake ..
cmake --build .
```
Do not enable optimizations, eg. `-DCMAKE_BUILD_TYPE=Release` as it doesn't exhibit the issue
