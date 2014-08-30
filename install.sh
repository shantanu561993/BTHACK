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
chmod 755 /opt/icp/*
ln -s /opt/icp/icp /usr/bin/icp
rm -rf /opt/icp.tar.gz
echo "Installed Directory : /opt/icp"
echo "Run From Terminal : sudo icp"
echo "Installation Complete."
