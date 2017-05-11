#!/bin/bash

[ "$#" -ne 4 ] && echo "usage: $0 image cpu mem net" && exit 1
IMG=$1 CPU=$2 MEM=$3 NUM=$4 NET=

for ((i=1,j=0; j<=20; j++)) do
	ifconfig kvmif$j &> /dev/null && continue
	NET="$NET -net nic,model=e1000 -net tap,ifname=kvmif$j"
	((i++ >= NUM)) && break;
done
((i < NUM)) && echo "there are too many kvmif" && exit 1

sudo qemu-system-x86_64 -rtc clock=host -nographic \
	-smp $CPU -m $MEM -drive file=$IMG $NET

#sudo ifconfig bridge1 create
#sudo ifconfig bridge1 addm tap0

#-net nic,model=e1000 -net tap,script=no,downscript=no

#-netdev tap,id=kvmbr0,script=no,downscript=no -device e1000,netdev=kvmbr0
