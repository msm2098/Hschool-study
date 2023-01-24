#!/bin/bash

cat /mnt/cdrom/USER_INFO/passwd >> /etc/passwd
cat /mnt/cdrom/USER_INFO/shadow >> /etc/shadow
cat /mnt/cdrom/USER_INFO/group >> /etc/group

rm -rf /etc/securetty

cd /home/
cp -rf /mnt/cdrom/HOME/* .
tar xvfzp home.gzip
rm -rf home.gzip

# level1
gcc -o /bin/ExecuteMe /mnt/cdrom/LEVELS/LEVEL1/ExcuteMe.c
chown level2.level1 /bin/ExecuteMe
chmod u+s /bin/ExecuteMe
chmod o-rwx /bin/ExecuteMe
chattr +ai /bin/ExecuteMe

# level2
gcc -o /usr/bin/editor /mnt/cdrom/LEVELS/LEVEL2/editor.c
chown level3.level2 /usr/bin/editor
chmod u+s /usr/bin/editor
chmod o-rwx /usr/bin/editor
chattr +ai /usr/bin/editor

# level3
gcc -o /bin/autodig /mnt/cdrom/LEVELS/LEVEL3/autodig.c
chown level4.level3 /bin/autodig
chmod u+s /bin/autodig
chmod o-rwx /bin/autodig
chattr +ai /bin/autodig

# level4
cp /mnt/cdrom/LEVELS/LEVEL4/backdoor /etc/xinetd.d/	
chown root.level4 /etc/xinetd.d/backdoor
chattr +ai /etc/xinetd.d/backdoor
cp -rf /bin/ls /home/level4/tmp/backdoor
chown level4.level4 /home/level4/tmp/backdoor
/etc/init.d/xinetd restart
rm -rf /home/level4/tmp/backdoor

# level5
gcc -o /usr/bin/level5 /mnt/cdrom/LEVELS/LEVEL5/level5.c
chown level6.level5 /usr/bin/level5
chmod g-r /usr/bin/level5 
chmod u+s /usr/bin/level5
chmod o-rwx /usr/bin/level5
chattr +ai /usr/bin/level5

# level7
gcc -o /bin/level7 /mnt/cdrom/LEVELS/LEVEL7/level7.c
chown level8.level7 /bin/level7
chmod g-r /bin/level7
chmod u+s /bin/level7
chmod o-rwx /bin/level7
chattr +ai /bin/level7

# level8
cp /mnt/cdrom/LEVELS/LEVEL8/found.txt /etc/rc.d/found.txt
chown root.level8 /etc/rc.d/found.txt
chmod o-rwx /etc/rc.d/found.txt
chattr +ai /etc/rc.d/found.txt

# level9
gcc -o /usr/bin/bof /mnt/cdrom/LEVELS/LEVEL9/bof.c
chown level10.level9 /usr/bin/bof
chmod g-r /usr/bin/bof
chmod u+s /usr/bin/bof
chmod o-rwx /usr/bin/bof
chattr +ai /usr/bin/bof

# level10
/home/level10/program/level10

# My-pass
gcc -o /bin/my-pass /mnt/cdrom/ETC/my-pass.c
chmod o-rw /bin/my-pass

# for restarting
cp -rf /mnt/cdrom/ETC/rc.local /etc/rc.local

# crontab
crontab /mnt/cdrom/ETC/cron_root

# server banner
cp -rf /mnt/cdrom/ETC/issue.net /etc/issue.net

# for korean
cp /mnt/cdrom/ETC/.bashrc.txt /etc/skel/.bashrc

# establish telnetd
cp -rf /mnt/cdrom/ETC/telnet /etc/xinetd.d/telnet
/etc/init.d/xinetd restart
