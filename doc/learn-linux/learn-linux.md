# Linux学习笔记

主要学习自: [Debian参考手册](https://www.debian.org/doc/manuals/debian-reference/index.zh-cn.html)

2025-01-27: 最近在想换个Linux发行版用. 作为新手在各种了解和选择之后, 有两个备选: `OpenSUSE` 和 `debian`. 两个差的有点大, 不知道到底要选哪个. 好像Debian更通用?

## GNU/Linux 教程

### 文件权限

对于第1个字符:

- `-`: 普通文件
- `d`: 目录
- `l`: 符号链接
- `c`: 字符设备节点
- `b`: 块设备节点
- `p`: 命名管道
- `s`: 套接字

对于后9个字符:

- `r`: 可读
- `w`: 可写
- `x`: 可执行

文件访问权限由9或10个字符组成. 用chmod的时候考虑后9个, 读权限符的时候额外看第1个文件类型. 总体上, 从前往后分别是: `文件类型[1]-用户[3]-用户组[3]-其他用户[3]`.

例子见下:

```bash
$ ls -l /etc/passwd /etc/shadow /dev/ppp /usr/sbin/exim4
crw------T 1 root root   108, 0 Oct 16 20:57 /dev/ppp
-rw-r--r-- 1 root root     2761 Aug 30 10:38 /etc/passwd
-rw-r----- 1 root shadow   1695 Aug 30 10:38 /etc/shadow
-rwsr-xr-x 1 root root   973824 Sep 23 20:04 /usr/sbin/exim4
$ ls -ld /tmp /var/tmp /usr/local /var/mail /usr/src
drwxrwxrwt 14 root root  20480 Oct 16 21:25 /tmp
drwxrwsr-x 10 root staff  4096 Sep 29 22:50 /usr/local
drwxr-xr-x 10 root root   4096 Oct 11 00:28 /usr/src
drwxrwsr-x  2 root mail   4096 Oct 15 21:40 /var/mail
drwxrwxrwt  3 root root   4096 Oct 16 21:20 /var/tmp
```

知道文件权限的表示后, 就可以修改文件权限

- `chown`: 用于root账户修改文件的所有者.
- `chgrp`: 用于文件的所有者或 root 账户修改文件所属的组.
- `chmod`: 用于文件的所有者或 root 账户修改文件和文件夹的访问权限。

语法不做赘述, 只提供以下例子:

```bash
$ touch foo bar
$ chmod u=rw,go=r foo
$ chmod 644 bar
$ ls -l foo bar
-rw-r--r-- 1 penguin penguin 0 Oct 16 21:39 bar
-rw-r--r-- 1 penguin penguin 0 Oct 16 21:35 foo
```

### 链接

太好用了叭!

在Linux中, 软链接在应用看来, 和实际文件几乎没有区别. 硬链接的话, 就是完全没有区别.

如何创建链接:

```shell
ln linkfile /usr/destfile # 创建硬链接
ln -s linkfile /usr/destfile # 创建软链接
```

另外, 为了防止各种相对路径计算的问题, 创建链接时尽量使用绝对路径. 从windows路径那边看来的, 可能Linux这边对链接的支持更好而不用考虑该问题.

### 典型的命令组合和重定向

| 命令常见用法                | 说明                                                                                                        |
| --------------------------- | ----------------------------------------------------------------------------------------------------------- |
| `command &`                 | 在子 shell 的后台 中执行 command                                                                            |
| `command1 \| command2`      | 通过管道将 command1 的标准输出作为 command2 的标准输入(并行执行)                                            |
| `command1 2>&1 \| command2` | 通过管道将 command1 的标准输出和标准错误作为 command2 的标准输入(并行执行)                                  |
| `command1 ; command2`       | 依次执行 command1 和 command2                                                                               |
| `command1 && command2`      | 执行 command1；如果成功，按顺序执行 command2(如果 command1 和 command2 都执行成功了，返回 success )         |
| `command1 \|\| command2`    | 执行 command1；如果不成功，按顺序执行 command2(如果 command1 或 command2 执行成功，返回 success )           |
| `command > foo`             | 将 command 的标准输出重定向到文件 foo(覆盖)                                                                 |
| `command 2> foo`            | 将 command 的标准错误重定向到文件 foo(覆盖)                                                                 |
| `command >> foo`            | 将 command 的标准输出重定向到文件 foo(附加)                                                                 |
| `command 2>> foo`           | 将 command 的标准错误重定向到文件 foo(附加)                                                                 |
| `command > foo 2>&1`        | 将 command 的标准输出和标准错误重定向到文件 foo                                                             |
| `command < foo`             | 将 command 的标准输入重定向到文件 foo                                                                       |
| `command << delimiter`      | 将 command 的标准输入重定向到下面的命令行，直到遇到“delimiter”(here document)                               |
| `command <<- delimiter`     | 将 command 的标准输入重定向到下面的命令行，直到遇到“delimiter”(here document，命令行中开头的制表符会被忽略) |

### 知识点

- Linux的文件名是区分大小写的, 即使它们大部分文件名是全小写. 这关系到另外一件事: Linux与Unix敌我同源, 而Unix哲学中有一条: 使用小写字母并尽量简短.  
  [[wiki-Unix哲学]](https://zh.wikipedia.org/wiki/Unix哲学)  
  即使它目前有争议, 但我认为作为操作系统的文件架构, 遵循这一点真是太好了. 不像windows, 系统的默认文件路径存在大量的大小写区分(Windows是大写, system32是小写)和连写区分(Appdata连写, Program File分开). 前者导致输入文件名时要多琢磨一下, 后者直接引发了一些兼容问题(空格将文件路径分成两个参数).  

- 或许将`/`视作根文件夹; 将`name/`视作名为name的文件夹; `filename`视作文件, 会改善对文件路径的理解, 知道什么时候该加`/`, 什么时候不要.

### TODO-LIST

- 管道, 套接字学习
