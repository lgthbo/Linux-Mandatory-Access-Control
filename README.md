# Linux Mandatory Access Control

## 安裝及測試方式

執行 setup.sh

    ./setup.sh

## 有環境下直接使用方式

將profile放到該放的地方

    sudo cp myProfile /etc/apparmor.d/usr.local.bin.px

重啟 apparmor

    sudo service apparmor reload
  
將該profile改成enforce mode  
  
    sudo aa-enforce /etc/apparmor.d/usr.local.bin.px

把你的programX編過去(下面是我的)

    sudo gcc ProgramX.c -o /usr/local/bin/px

重啟 apparmor

    sudo service apparmor reload
## reference

https://gitlab.com/apparmor/apparmor/-/wikis/home

https://blog.csdn.net/hanningxue/article/details/78029708
