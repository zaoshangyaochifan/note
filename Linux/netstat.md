# netstat

man手册中的解释为：Print network connections, routing tables, interface statistics, masquerade connections, and multicast memberships  
翻译成中文为打印网络链接、路由表、接口状态、无效链接(?)和多播成员

用法简介：
-  netstat 默认
-  netstat -r, --route 打印路由信息
-  netstat -i, -I, --interfaces 打印接口信息
-  netstat -g, --groups 打印多播组成员信息
-  netstat -M, --masquerade 打印masquerade连接列表
-  netstat -s 打印每个协议的统计
 
具体用法命令如下：
```
netstat  [address_family_options]  [--tcp|-t]  [--udp|-u]  [--udplite|-U]  [--sctp|-S]  [--raw|-w]  [--l2cap|-2] [--rfcomm|-f] [--listening|-l] [--all|-a] [--numeric|-n] [--numeric-hosts] [--numeric-ports]  [--numeric-users]  [--symbolic|-N]  [--extend|-e[--extend|-e]]  [--timers|-o]  [--program|-p]  [--ver‐bose|-v] [--continuous|-c] [--wide|-W] [delay]

netstat    {--route|-r}    [address_family_options]   [--extend|-e[--extend|-e]]   [--verbose|-v]   [--numeric|-n]   [--numeric-hosts]   [--numeric-ports] [--numeric-users] [--continuous|-c] [delay]

netstat {--interfaces|-I|-i} [--all|-a] [--extend|-e] [--verbose|-v] [--program|-p] [--numeric|-n] [--numeric-hosts]  [--numeric-ports]  [--numeric-users] [--continuous|-c] [delay]

netstat {--groups|-g} [--numeric|-n] [--numeric-hosts] [--numeric-ports] [--numeric-users] [--continuous|-c] [delay]

netstat {--masquerade|-M} [--extend|-e] [--numeric|-n] [--numeric-hosts] [--numeric-ports] [--numeric-users] [--continuous|-c] [delay]

netstat {--statistics|-s} [--tcp|-t] [--udp|-u] [--udplite|-U] [--sctp|-S] [--raw|-w] [delay]

netstat {--version|-V}

netstat {--help|-h}

address_family_options:
[-4|--inet]  [-6|--inet6]  [--protocol={inet,inet6,unix,ipx,ax25,netrom,ddp,bluetooth, ... } ] [--unix|-x] [--inet|--ip|--tcpip] [--ax25] [--x25] [--rose] [--ash] [--bluetooth] [--ipx] [--netrom] [--ddp|--appletalk] [--econet|--ec]
```
