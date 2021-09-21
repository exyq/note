# Arch install

#### arch network

``` shell
	1 使用ip link查看网卡及网卡状态,ip link set wlan0 up开启网卡
	2 iwlist scan | grep ESSID来筛选所需的wifi名
	3 wpa_passphrase ESSID PASSWARD > FILENAME
	4 wpa_suppliacnt -c FILENAME -i WLAN0 &
	5 等待三到五秒使用dhcpcd &来自动分配ip地址
```

#### timedatectl set-ntp true

#### 更换使用ctrl-alt-F2来更换终端

#### mount disks

``` shell
	1 fdisk -l
	2 swapon SWAP---挂载交换空间
	3 mount / /mnt---挂载根目录分区到/mnt
	4 mkdir /mnt/boot
	5 提前在/mnt创建文件夹来创建并挂载你要每次开机自动挂载的分区
```

#### pacstrap /mnt base linux linux-firmware---向根目录分区安装arch的框架等最基本数据包

#### genfstab -U /mnt >> /mnt/etc/fstab---向分区表导入须挂载的分区

#### arch-chroot /mnt---以正在安装的硬盘分区的root身份进入分区安装

#### ln -sf /usr/share/zoneinfo/Asia/Shanghai /etc/localtime---实现时间本地化

#### hwclock -w

#### pacman -S grub efibootmgr os-prober amd-ucode---安装grub等引导工具但是需注意,amd-ucode需要按照cpu型号来挑选

#### pacman -S base-devel vi vim wpa_supplicant dhcpcd man---安装其余命令行工具

#### 编辑/etc/locale.gen, /etc/locale.conf, /etc/hostname, /etc/hosts这些文件

#### install grub

```shell
	1 mount /BOOT /boot---挂载引导分区到/boot
	2 mkdir /boot/grub
	3 使用uname来查看cpu架构
	4 grub-install --target=x86_64-efi --efi-directory=/boot---x86_64的位置是uname命令的返回结果
	5 grub-mkconfig > /boot/grub/grub.cfg---创建启动引导文件
```

#### 创建用户及更改密码

```shell
1 passwd---更改root用户密码
2 useradd -m -G wheel eric---创建一个wheel组的新用户并自带家目录
3 visudo---通过此命令可编辑sudo指令的授权权限
4 在接下来的文档中找到wheel把下一行的注释去掉,设置完成,保存退出
```

#### 到这里archlinux的安装就结束了,但只能作为没有图形界面的版本来使用,如果需要安装图形界面还需要安装以下软件并配置

1 ntfs-3g i3 dmenu xorg xorg-xinit ibus ibus-pinyin xf86-video-amdgpu xf86-input-synaptics xf86-input-lib-libinput gcfs-mtp qterminal networkmanager network-manager-applet ttf-droid wqy-microhei wqy-zenhei noto-fonts-emoji ttf-font-awesome kmix xfce4-pulseaudio-plugin compton conky acpi acpid gparted firefox 
2 需要使用cp /etc/X11/xinit/xinitrc ~/.xinitrc来复制图形界面配置
3 vim ~/.xinitrc来找到这些
```shell
	twm &
	xclock -geometry 50x50-1+1 &
	xterm -geometry 80x50+494+51 &
	xterm -geometry 80x20+494-0 &
	exec xterm -geometry 80x66+0+0 -name logini
```
  并删掉,之后添加这段
  ```shell
	export export GTK_IM_MODULE=ibus
	export XMODIFIERS=@im=ibus
	export QT_IM_MODULE=ibus
	ibus-daemon &
	kmix &
	exec i3
  ```
4 到此arch的所有安装配置就结束了