"Bulding" (only copying the header to inculde)

```
git submodule update --init --recursive
mkdir -p thirdparty/bin/include/nlohmann/
cp thirdparty/src/json/single_include/nlohmann/json.hpp thirdparty/bin/include/nlohmann/
```

Building and running the application
```
mkdir build
cd build
cmake ..
make
./main
```
