#!/bin/bash

[ "$#" -ne 4 ] && echo "usage: $0 image cpu mem net" && exit 1
IMG=$1 CPU=$2 MEM=$3 NUM=$4 NET=

for ((i=1,j=0; j<=20; j++)) do
	case `uname -s` in
		'Darwin')
			ifconfig tap$j &> /dev/null && continue
			NET="$NET -net nic,model=e1000 -net tap,script=no,downscript=no"
			echo tap$j
			;;
		*)
			ifconfig kvmif$j &> /dev/null && continue
			NET="$NET -net nic,model=e1000 -net tap,ifname=kvmif$j"
			echo kvmif$j
	esac

	((i++ >= NUM)) && break;
done
((i < NUM)) && echo "there are too many kvmif" && exit 1

[ `uname -s` = 'Linux' ] && KVM='-enable-kvm'

set -x
sudo qemu-system-x86_64 -rtc clock=host -nographic \
	$KVM -smp $CPU -m $MEM -drive file=$IMG $NET

