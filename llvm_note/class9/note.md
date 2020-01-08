# 第九课 ollvm编译(mac/linux)
* mac
```
https://github.com/HikariObfuscator/Hikari/releases
https://github.com/heroims/obfuscator
git clone https://github.com/heroims/obfuscator 
cd obfuscator 
git checkout llvm-8.0
./clang test.c -o test_fla -mllvm -fla -mllvm -split -mllvm -split_num=3
./clang test.c -o test_ollvm -mllvm -fla -mllvm -split -mllvm -split_num=3 -mllvm -sub -mllvm -sub_loop=3 -mllvm -bcf -mllvm -bcf_loop=3 -mllvm -sobf -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk
./clang test.c -o test_1 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk
```
* 默认
* ![](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class9/test.png)
* fla 
* ![](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class9/test2.png)
* ollvm全开
* ![](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class9/test3.png)
# xcode集成配置
* ![](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class9/xc2.png)
* ![](https://github.com/haidragon/study_obscure/blob/master/llvm_note/class9/xcode.png)
* 参考
* https://www.jianshu.com/p/e0637f3169a3


