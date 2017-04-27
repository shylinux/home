#!/bin/bash

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

psp() {
	tmux select-pane -t $TARGET_PANE
	tmux split-window
}

pv() {
	tmux select-pane -t $TARGET_PANE
	tmux split-window -h
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
	sleep 0.2
	power C-U
	power "$*"
	power C-J
}

pr() {
	power C-L
}

pn() {
	power C-J
}

pi() {
	power C-C
}

pvm() {
	p ~/bash/tool/qemu/kvm.sh $@
}

pquit() {
	power C-A c q C-J
}

pend() {
	local buffer=~/bash/tool/tmux/tmux_save_buffer
	local end=${1:-'10038[11:16:44]~$'}
	local finish="false"

	tmux capture-pane -t .$TARGET_PANE
	tmux save-buffer $buffer
	tmux delete-buffer

	while read; do
		[ -z "$REPLY" ] && continue
		finish="false"
		echo $REPLY|grep $end &>/dev/null && finish="true"
	done < $buffer

	[ "$finish" = "true" ] && return 0
	[ "$finish" = "false" ] && return 1
}

pwait() {
	echo -n $1"...<Enter>"
	read
}

puntil() {
	sleep 0.1
	until pend $1; do
		sleep 0.1
	done
}
