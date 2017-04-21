#!/bin/bash

TARGET_PANE=
power() {
	for cmd; do
	tmux send-keys -t .-$TARGET_PANE -- $cmd
	done
}
pe() {
	TARGET_PANE=$1
	shift
	power C-u
	power "$*"
	power Enter
}
p() {
	pe 1 $@
}

