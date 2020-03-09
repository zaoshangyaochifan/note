# update kernel

在CentOS7上编译更新5.2版本的内核，以支持Intel AX200无线网卡，并去除nouveau。

步骤如下：  
1. 从github下载对应版本内核源代码；
2. 安装必要的编译工具；
3. 使用make clean清空（可选）；
4. 使用make menuconfig，设置编译选项，保存在源代码根目录的.config文件中，其中有几个需要设置的地方：打开Device Drivers => Network Device Support => Wireless LAN => Intel相关选项；关闭Device Drivers => Graphics Support => Nouveau (NVIDIA) Cards相关选项；
5. 使用make -j4编译内核；
6. 使用make modules_install安装内核模块，在/lib/modules可查看安装的模块；
7. 使用make install安装内核；
8. cat /boot/grub2/grub.cfg | grep menuentry #查看系统可用内核;
9. grub2-set-default 'CentOS Linux (5.5) 7 (Core)' #修改开机默认使用的内核;
10. 完成；