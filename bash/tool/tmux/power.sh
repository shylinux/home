#!/bin/bash
#client server
#session window pane

[ -e ~/temp/tmux ] || mkdir -p ~/temp/tmux
TARGET_BUFFER=~/temp/tmux/buffer
LOCAL_KVM=~/bash/tool/qemu/kvm.sh

[ -z "$TARGET_WINDOW" ] && echo "select window" && TARGET_WINDOW=`tmux list-windows|sed -n '/active/p'|cut -d':' -f1`

pconsole() {
	[ -z "$1" ] && echo "usage: $0 session" && return 1
	TARGET_SESSION=$1

	if tmux has-session -t $TARGET_SESSION
	then
		for ((i=1;i<16;i++)) do
			tmux list-panes -t $TARGET_SESSION:$i &>/dev/null || break;
		done
		[ $i -ge 16 ] && echo "too many windows in session $TARGET_SESSION" && return 1

		TARGET_WINDOW=$i
		tmux new-window -t $TARGET_SESSION
	else
		TARGET_WINDOW=1
		tmux new-session -d -s $TARGET_SESSION
		tmux set-environment -t $TARGET_SESSION TARGET_SESSION $TARGET_SESSION
	fi

	tmux set-environment -t $TARGET_SESSION TARGET_WINDOW $TARGET_WINDOW
	tmux split-window -d -t $TARGET_SESSION:$TARGET_WINDOW.1 -l 10
	tmux split-window -d -t $TARGET_SESSION:$TARGET_WINDOW.1 -h
	tmux set-environment -u -t $TARGET_SESSION TARGET_WINDOW
	tmux attach-session -t $TARGET_SESSION \; select-pane -t 3

	return 1
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
	tmux split-window -t $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE
	tmux last-pane
}

pv() {
	tmux split-window -h -t $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE
	tmux last-pane
}

pq() {
	tmux kill-pane -t $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE
}

power() {
	for cmd; do
	tmux send-keys -t $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE -- $cmd
	done
}

p() {
	echo "p  $TARGET_BUFFER $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE $*" >> ~/temp/

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

	tmux capture-pane -t $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE
	tmux save-buffer $TARGET_BUFFER
	tmux delete-buffer

	while read; do
		[ -z "$REPLY" ] && continue
		finish="false"
		echo "$REPLY" |grep "$end" &>/dev/null && finish="true"
		[ $finish = "true" -a -n "$2" ] && break
	done < "$TARGET_BUFFER"

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
	echo "pe $TARGET_BUFFER $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE $*"
	sleep 0.01
	puntil $1
	shift
	p $*
}

pp() {
	echo "pp $TARGET_BUFFER $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE $*"
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

