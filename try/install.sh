#!/bin/bash
if [[ $EUID -ne 0 ]]; then
   echo "You must be root to run this script. Aborting...";
   exit 1;
fi
echo "Welcome To ICP Easy Install Script"
echo "Installing , Please Wait ..."
sleep 3
cp icp.tar.gz /opt

cd /opt
tar -xf icp.tar.gz
cd /
gzip -dc chilkat-9.3.2-python-2.7-x86_64-linux.tar.gz | tar -xof -
chmod 755 /opt/icp/*
ln -s /opt/icp/icp /usr/bin/icp
rm -rf /opt/icp.tar.gz
echo "Installed Directory : /opt/icp"
echo "Run From Terminal : sudo icp"
echo "All Results will be saved on your desktop in folder named india"
echo "Installation Complete."
