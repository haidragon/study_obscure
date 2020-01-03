# 第二课 clang编译与调试(xcode)
```
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  git config --global user.name haidragon                                   [2020-01-03 16:04:08] 
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  git config --global user.email 18684797674@163.com                        [2020-01-03 16:04:22] 
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  ssh-keygen -t rsa -C 18684797674@163.com                                  [2020-01-03 16:04:34] 
Generating public/private rsa key pair.
Enter file in which to save the key (/Users/haidragon/.ssh/id_rsa): 
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /Users/haidragon/.ssh/id_rsa.
Your public key has been saved in /Users/haidragon/.ssh/id_rsa.pub.
The key fingerprint is:
SHA256:fshDbkDn/A4F9+ih912uryfPINLFqzDvOWl7++BvZPo 18684797674@163.com
The key's randomart image is:
+---[RSA 2048]----+
|                 |
|                 |
|      . o .      |
|     . + o o .   |
|      . S + . o  |
|       * * o . .o|
|        X O o.++.|
|       . * *+*+*o|
|          .oB+*&E|
+----[SHA256]-----+
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  open /Users/haidragon/.ssh/id_rsa.pub                                     [2020-01-03 16:05:06] 
No application knows how to open /Users/haidragon/.ssh/id_rsa.pub.
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  open -n Xcode /Users/haidragon/.ssh/id_rsa.pub                            [2020-01-03 16:06:12] 
The file /Users/haidragon/Xcode does not exist.
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  open -a Xcode /Users/haidragon/.ssh/id_rsa.pub                            [2020-01-03 16:06:37] 
[haidragon@haidragondeMacBook-Pro]: /Users/haidragon   
➜  git clone -b release_90 git@github.com:llvm-mirror/llvm.git llvm          [2020-01-03 16:06:46] 
fatal: destination path 'llvm' already exists and is not an empty directory.
```



