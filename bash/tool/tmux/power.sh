#!/bin/bash

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

pconsole() {
	tmux split-window -l 10
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

pc() {
	p clear
}

pint() {
	power C-C
}

pwait() {
	echo -n $1"...<Enter>"
	read
}

