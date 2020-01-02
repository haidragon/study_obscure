# 第二课 clang编译与调试(xcode)
* clang 编译
```
git clone https://github.com/llvm/llvm-project
cd llvm-project
mkdir build
cd build
cmake -DLLVM_ENABLE_PROJECTS=clang -G "Unix Makefiles" ../llvm
cmake -DLLVM_ENABLE_PROJECTS=clang -G "Xcode" ../llvm
```
* lldb 命令
```
image list
image lookup -n main 查看函数符号信息
```


