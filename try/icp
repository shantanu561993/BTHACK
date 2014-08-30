#!/bin/bash
if [[ $EUID -ne 0 ]]; then
   echo "You must be root to run this script. Aborting...";
   exit 1;
fi

sleep 3

cd /opt/icp
./run

