#!/bin/bash
#Program:
#   To setup environment of Mini Project 5:
#History:
#2020/06/10 lgthbo

# install packages
sudo apt update -y
sudo apt install -y apparmor-utils
sudo apt install -y apparmor-profiles
sudo apt install gcc

# move profile file into config dir
sudo cp myProfile  /etc/apparmor.d/usr.local.bin.px

# open enforce mode of apparmor
sudo aa-enforce /etc/apparmor.d/usr.local.bin.px
sudo service apparmor reload

# make program dir
sudo rm -rf /var/X
sudo rm -rf /var/Y
sudo mkdir /var/X
sudo mkdir /var/Y

# install programX to usr/local/bin/px
sudo gcc ProgramX.c -o /usr/local/bin/px

# run programX
sudo /usr/local/bin/px


