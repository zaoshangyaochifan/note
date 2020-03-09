# wifi

推荐：
使用NetworkManager-wifi进行连接：
1. yum install NetworkManager-wifi
2. nmcli device wifi list
3. nmcli device wifi connect "SSID" password "pass"

不推荐：
在Linux下通过命令行连接wifi：
1. yum install iw
2. iw dev #获取无线网卡设备名称
3. ip link set wlo1 up #开启无线网卡
4. iw wlo1 scan | grep SSID 获取网络名称
5. wpa_supplicant -B -i wlo1 -c <(wpa_passphrase "网络名称" "网络密码")
6. dhclient wlo1 #请求地址
7. ip addr #查看连接状态

