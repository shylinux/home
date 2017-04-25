#!/bin/bash

[ "$#" -ne 4 ] && echo "usage: $0 image cpu mem net" && exit 1

IMG=$1
CPU=$2
MEM=$3
NUM=$4
NET=

for ((i=1,j=0; j<=20; j++)) do
	ifconfig kvmif$j &> /dev/null && continue
	NET="$NET -net nic,model=e1000 -net tap,ifname=kvmif$j"
	((i++ >= NUM)) && break;
done
((i < NUM)) && echo "there are too many kvmif" && exit 1

	#-rtc clock=host -enable-kvm \
sudo qemu-system-x86_64 -smp $CPU -m $MEM \
	-rtc clock=host \
	-drive file=$IMG \
	-nographic \
	$NET
