# man
man默认搜索所有章节，默认的章节优先级为：  
```
1 1p 8 2 3 3p 4 5 6 7 9 0p n l p o 1x 2x 3x 4x 5x 6x  7x  8x
```

这些章节包含的内容分别是：

```
1   Executable programs or shell commands
2   System calls (functions provided by the kernel)
3   Library calls (functions within program libraries)
4   Special files (usually found in /dev)
5   File formats and conventions eg /etc/passwd
6   Games
7   Miscellaneous (including macro packages and conventions), e.g. man(7), groff(7)
8   System administration commands (usually only for root)
9   Kernel routines [Non standard]
```

常用命令参数包括：
```
-a 打开并搜索所有同名帮助手册
-aw 搜索并显示所有同名手册的路径
-M 指定手册的搜索路径
-k, --apropos 根据关键字模糊搜索
-f, --whatis 根据关键字精确搜索