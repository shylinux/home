#!/bin/bash
#tmux qemu zsh vim
#
#server session window pane
#client

TARGET_PATH=~/temp/tmux
[ -e $TARGET_PATH ] || mkdir -p $TARGET_PATH

[ -z "$TARGET_WINDOW" ] && TARGET_WINDOW=`tmux list-windows 2>/dev/null |sed -n '/active/p'|cut -d':' -f1`
[ -n "$TARGET_SESSION" ] && echo tmux: $TARGET_LOG
[ -n "$TARGET_SESSION" ] && echo tmux: $TARGET_BUFFER
[ -n "$TARGET_SESSION" ] && echo tmux: $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE

pdebug() {
	echo "[`date +%H:%M:%S`]$TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE> $*" >> $TARGET_LOG
}

pconsole() {
	case $# in
		0)
			echo "usage: $0 session image manufact ip0 ip1"
			echo "usage: $0 session image manufact ip0"
			echo "usage: $0 session machine"
			echo "usage: $0 session"
			return
			;;
		1)
			tmux attach-session -t $1
			return
			;;
	esac

	TARGET_SESSION=${1:-vpm}
	tmux new-session -d -s $TARGET_SESSION || return
	tmux set-environment -t $TARGET_SESSION TARGET_PANE 1
	tmux set-environment -t $TARGET_SESSION TARGET_WINDOW 1
	tmux set-environment -t $TARGET_SESSION TARGET_SESSION $TARGET_SESSION
	tmux set-environment -t $TARGET_SESSION TARGET_SOURCE ~/work/tool/vpm.sh
	tmux set-environment -t $TARGET_SESSION TARGET_KVM ~/bash/tool/qemu/kvm.sh
	tmux set-environment -t $TARGET_SESSION TARGET_LOG $TARGET_PATH/log_${TARGET_SESSION}_1
	tmux set-environment -t $TARGET_SESSION TARGET_BUFFER $TARGET_PATH/buffer_${TARGET_SESSION}_1

	source ~/work/tool/vpm.sh $*

	tmux split-window -d -l 10 -t $TARGET_SESSION:1.1
	tmux split-window -d -h -t $TARGET_SESSION:1.1
	tmux select-pane -t $TARGET_SESSION:1.3
	tmux split-window -d -h -t $TARGET_SESSION:1.3
	tmux select-pane -t $TARGET_SESSION:1.4

	case $# in
		5)
			tmux send-keys -t $TARGET_SESSION:1.4 -- "pimage"
			tmux send-keys -t $TARGET_SESSION:1.4 -- C-J
			;;
		4|2)
			tmux send-keys -t $TARGET_SESSION:1.4 -- "pconnect && p2 && pconnect && p3 && pconnect"
			tmux send-keys -t $TARGET_SESSION:1.4 -- C-J
			;;
	esac

	echo "" > ~/temp/tmux/log_${TARGET_SESSION}_${TARGET_WINDOW}
	tmux attach-session -t $TARGET_SESSION
}

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
	TARGET_PANE=1
}

power() {
	for cmd; do
	tmux send-keys -t $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE -- $cmd
	done
}

p() {
	pdebug "p $*"

	power C-U
	power "$*"
	power C-J
}

ph() {
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
	local begin=`date +%s`
	local eslipe=`date +%s`
	((eslipe=eslipe-begin))
	[ "$TARGET_DEBUG" = 1 ] && echo -n "\r\e[K \e[1mwait\e[0m \e[1;32;5;7m$1\e[0m \e[4m${eslipe}\e[0ms"
	sleep 0.002
	until phas $*; do
		eslipe=`date +%s`
		((eslipe=eslipe-begin))
		[ "$TARGET_DEBUG" = 1 ] && echo -n "\r\e[K \e[1mwait\e[0m \e[1;32;5;7m$1\e[0m \e[4m${eslipe}\e[0ms"
		sleep 0.002
	done
}

pwait() {
	echo -n $1"(Yes/No)...<Enter>" && read -t 3
	case $REPLY in n|N|no|No) return 1;; esac
	return 0
}

pe() {
	sleep 0.01 && puntil $1 && shift && p $*
	[ "$TARGET_DEBUG" = 1 ] && shift && echo " "$*
}

pp() {
	sleep 0.01 && puntil "$TARGET_PS1" && p $*
	[ "$TARGET_DEBUG" = 1 ] && echo " "$*
}

pquit() {
	power C-A c q C-J
}

