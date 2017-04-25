#!/bin/bash

NUM=3

net_start() {
	for ((i=1; i<=NUM; i++))
	do
		ifconfig kvmbr$i &>/dev/null && continue
		sudo brctl addbr kvmbr$i
		sudo ifconfig kvmbr$i up 1.0.$i.254 netmask 255.255.255.0 broadcast 1.0.$i.255
		echo "start bridge kvmbr$i"
	done
}

net_stop() {
	for ((i=1; i<=NUM; i++))
	do
		ifconfig kvmbr$i &>/dev/null || continue
		sudo ifconfig kvmbr$i down
		sudo brctl delbr kvmbr$i
		echo "stop bridge kvmbr$i"
	done
}

[ -n "$2" ] && NUM=$2

case $1 in
	start)
		net_start
		echo "start bridge success"
		;;
	stop)
		net_stop
		echo "stop bridge success"
		;;
	*)
		echo "usage $0 start|stop [num]"
esac

