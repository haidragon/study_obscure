# llvm pass 编译与调试
```
clang -emit-llvm -c /Users/haidragon/Desktop/llvm_note/class5/test.m  -o/Users/haidragon/Desktop/llvm_note/class5/test.bc 
./opt -load /Users/haidragon/Desktop/llvm_note/class5/LLVMHello.dylib -hello -time-passes -disable-output /Users/haidragon/Desktop/llvm_note/class5/test.bc 
```
* ![](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class5/opt.png)

