#!/bin/bash
#client server
#session window pane layout

TARGET_KVM=~/bash/tool/qemu/kvm.sh
TARGET_LOG=~/temp/tmux/log_${TARGET_SESSION}_${TARGET_WINDOW}
TARGET_BUFFER=~/temp/tmux/buffer_${TARGET_SESSION}_${TARGET_WINDOW}
[ -e ~/temp/tmux ] || mkdir -p ~/temp/tmux

TARGET_PANE=1

[ -z "$TARGET_WINDOW" ] && TARGET_WINDOW=`tmux list-windows 2>/dev/null |sed -n '/active/p'|cut -d':' -f1`
[ -n "$TARGET_SESSION" ] && echo tmux: $TARGET_LOG
[ -n "$TARGET_SESSION" ] && echo tmux: $TARGET_BUFFER
[ -n "$TARGET_SESSION" ] && echo tmux: $TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE

pdebug() {
	echo "[`date +%H:%M:%S`]$TARGET_SESSION:$TARGET_WINDOW.$TARGET_PANE> $*" >> $TARGET_LOG
}

pconsole() {
	TARGET_SESSION=${1:-vpm}

	if tmux has-session -t $TARGET_SESSION &>/dev/null
	then
		for ((i=1;i<16;i++)) do
			tmux list-panes -t $TARGET_SESSION:$i &>/dev/null || break;
		done
		[ $i -ge 16 ] && echo "too many windows in session $TARGET_SESSION" && return 1

		TARGET_WINDOW=$i
		tmux set-environment -t $TARGET_SESSION TARGET_WINDOW $TARGET_WINDOW
		tmux new-window -t $TARGET_SESSION
	else
		TARGET_WINDOW=1
		tmux new-session -d -s $TARGET_SESSION
		tmux set-environment -t $TARGET_SESSION LOCAL_PROMPT '[$TARGET_WINDOW,$TARGET_PANE]'
		tmux set-environment -t $TARGET_SESSION TARGET_SESSION $TARGET_SESSION
		tmux set-environment -t $TARGET_SESSION TARGET_WINDOW $TARGET_WINDOW
	fi

	echo "" > ~/temp/tmux/log_${TARGET_SESSION}_${TARGET_WINDOW}
	select img in ~/work/image/*.img; do break; done
	select manu in ~/work/image/*.leadsec; do break; done
	echo -n "IP0(1.0.0.$TARGET_WINDOW): " && read ip0 && ip0=${ip0:-"1.0.0.$TARGET_WINDOW"}
	echo -n "IP1: " && read ip1

	tmux split-window -d -l 10 -t $TARGET_SESSION:$TARGET_WINDOW.1
	tmux send-keys -t $TARGET_SESSION:$TARGET_WINDOW.2 -- "pimg $img $manu $ip0 $ip1"
	tmux send-keys -t $TARGET_SESSION:$TARGET_WINDOW.2 -- C-J

	tmux split-window -d -h -t $TARGET_SESSION:$TARGET_WINDOW.1
	tmux send-keys -t $TARGET_SESSION:$TARGET_WINDOW.2 -- 'tail -f $TARGET_LOG'
	tmux send-keys -t $TARGET_SESSION:$TARGET_WINDOW.2 -- C-J

	tmux set-environment -u -t $TARGET_SESSION TARGET_WINDOW
	tmux attach-session -t $TARGET_SESSION \; select-pane -t 3
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
	local begin=`date +%s`
	local eslipe=`date +%s`
	((eslipe=eslipe-begin))
	echo -n "\r\e[K \e[1mwait\e[0m \e[1;32;5;7m$1\e[0m \e[4m${eslipe}\e[0ms"
	sleep 0.002
	until phas $*; do
		eslipe=`date +%s`
		((eslipe=eslipe-begin))
		echo -n "\r\e[K \e[1mwait\e[0m \e[1;32;5;7m$1\e[0m \e[4m${eslipe}\e[0ms"
		sleep 0.002
	done
}

pwait() {
	echo -n $1"...<Enter>"
	read
}

pe() {
	sleep 0.01 && puntil $1 && shift && p $*
	shift
	echo " "$*
}

pp() {
	sleep 0.01 && puntil "$TARGET_PS1" && p $*
	echo " "$*
}

pvm() {
	$TARGET_KVM $*
}

pquit() {
	power C-A c q C-J
}

