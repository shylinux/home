#!/bin/bash

LOCAL_BUFFER=/tmp/tmux_save_buffer
LOCAL_KVM=~/bash/tool/qemu/kvm.sh

pconsole() {
	tmux split-window -l 10
}

TARGET_PANE=1
p1() {
	TARGET_PANE=1
}
p2() {
	TARGET_PANE=2
}
p3() {
	TARGET_PANE=3
}
p4() {
	TARGET_PANE=4
}

pt() {
	TARGET_PANE=${1:-1}
	echo select:$TARGET_PANE
}

pu() {
	tmux split-window -t .$TARGET_PANE
	tmux last-pane
}

pv() {
	tmux split-window -h -t .$TARGET_PANE
	tmux last-pane
}

pq() {
	tmux kill-pane -t .$TARGET_PANE
}

power() {
	for cmd; do
	tmux send-keys -t .$TARGET_PANE -- $cmd
	done
}

p() {
	power C-U
	power "$*"
	power C-J
}

pr() {
	pp clear
}

pn() {
	power C-J
}

pi() {
	power C-C
}

phas() {
	local end=${1:-'10038[11:16:44]~$'}
	local finish="false"

	tmux capture-pane -t .$TARGET_PANE
	tmux save-buffer $LOCAL_BUFFER
	tmux delete-buffer

	while read; do
		[ -z "$REPLY" ] && continue
		finish="false"
		echo "$REPLY" |grep "$end" &>/dev/null && finish="true"
		[ $finish = "true" -a -n "$2" ] && break
	done < "$LOCAL_BUFFER"

	[ "$finish" = "true" ] && return 0
	[ "$finish" = "false" ] && return 1
}

puntil() {
	sleep 0.002
	until phas $*; do
		sleep 0.002
	done
}

pwait() {
	echo -n $1"...<Enter>"
	read
}

pe() {
	sleep 0.01
	puntil $1
	shift
	p $*
}

pp() {
	sleep 0.01
	puntil "$TARGET_PS1"
	p $*
}

pvm() {
	$LOCAL_KVM $*

}

pquit() {
	power C-A c q C-J
}

