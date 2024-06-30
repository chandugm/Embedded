<< 'comment'
Write a network monitor application server_monitor.sh which show the below information

OS name
Architecture version
Kernel version
Internet status
IP Address
Memory Usage
Disk file systems usage
system uptime
comment


#!/bin/bash
echo "OS name :`uname -o`"
echo "Architecture version :`uname -m`"
echo "Kernel version:`uname -r`"
echo "Internet status:`ping -c 1 8.8.8.8 &> /dev/null && echo "Connected" || echo "Disconnected"`"
echo "IP Address:`hostname -I | awk '{print $1}'`"
echo "Memory Usage`free -h`"
echo "Disk file systems usage:`df -h`"
echo "System uptime:`uptime -s`"
