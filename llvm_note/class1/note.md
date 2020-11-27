# 第一课 llvm项目 编译(windows mac)
## mac下
* 命令行
```
git clone https://github.com/llvm/llvm-project
cd llvm-project
mkdir build
cd build
cmake -G "Unix Makefiles" ../llvm
make -j 10
```
* xcode
```
git clone https://github.com/llvm/llvm-project
cd llvm-project
mkdir build
cd build
cmake -G "Xcode" ../llvm
```
* 编译clang
```
git clone https://github.com/llvm/llvm-project
cd llvm-project
mkdir build
cd build
cmake -DLLVM_ENABLE_PROJECTS=clang -G "Unix Makefiles" ../llvm
cmake -DLLVM_ENABLE_PROJECTS=clang -G "Xcode" ../llvm
```
## 说明
    建议用git上的项目，直接下载官网的项目生成Xcode环境编译会出现各种问题，命令行是没有问题。
## windows vs项目
* 命令行 （用cygwin)
```
git clone https://github.com/llvm/llvm-project -b xxx
cd llvm-project
mkdir build
cd build
//cmake -G "Visual Studio 14 2015" ../llvm （可能不行要用最高vs版本)
cmake -G "Visual Studio 16 2019" ../llvm (ml.exe可能报少库)
```
# cmake-gui 
* (ml.exe可能报少库，这里报少[mspdb140.dll](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class1/mspdb140.dll)  网上下载放入对应目录这里是[C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\x86_amd64])



