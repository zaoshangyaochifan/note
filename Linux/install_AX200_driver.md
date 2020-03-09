# install AX200 driver

AX200是Intel新出的支持wifi6的无线网卡，Linux内核5.2开始集成了驱动。

1. 更新内核版本到5.2以上，并打开intel驱动；
2. 从官方下载[iwlwifi.tgz](https://wireless.wiki.kernel.org/en/users/Drivers/iwlwifi)；
3. 解压，并将iwlwifi*.ucode复制到/lib/firmware；
4. 重启，网卡处于可用状态；