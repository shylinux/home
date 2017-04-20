c
sh go
vi py js
ARM Linux HTTP

linux gun ubuntu

tmux #{{{
set-option show-options #{{{
	prefix
	prefix2

	default-terminal
	default-command
	default-shell

	mode-keys
	history-limit

	base-index
	renumber-windows

	display-panes-time
	display-time

	mouse-utf8
	mouse

	status
	status-utf8
	status-keys
	status-interval
	status-position

	status-justify
	status-style
	status-left-length
	status-left-style
	status-left
	status-right-length
	status-right-style
	status-right

	message-style
	message-command-style

	lock-after-time
	lock-command

	display-panes-active-colour
	display-panes-colour

	buffer-limit
	message-limit
	escape-time
	repeat-time
	assume-paste-time
	bell-action
	bell-on-alert
	visual-activity
	visual-bell
	visual-silence
	word-separators

	exit-unattatched
	focus-events
	destroy-unattached
	detach-on-destroy
	set-remain-on-exit
	set-titles
	set-titles-string

	set-clipboard
	terminal-overrider
	update-environment
	history-file
#}}}
set-window-option show-window-options #{{{
	pane-base-index
	utf8

	window-status-style
	window-status-format
	window-status-separator
	window-status-bell-style
	window-status-last-style
	window-status-current-style
	window-status-current-format


	window-active-style
	aggressive-resize
	allow-rename
	alternate-screen
	automatic-rename
	automatic-rename-format
	clock-mode-colour
	clock-mode-style
	force-height
	force-width
	main-pane-height
	main-pane-width
	mode-style
	monitor-activity
	monitor-silence
	other-pane-height
	other-pane-width
	pane-active-border-style
	pane-border-style
	remain-on-exit
	synchronize-panes
	window-active-style
	window-style
	xterm-keys
	wrap-search
#}}}

client server session #{{{
	clock-mode
	has-session
	new-session
	lock-session
	kill-session
	list-sessions
	attach-session
	rename-session

	lock-client
	list-clients
	detach-client
	switch-client
	suspend-client
	refresh-client

	lock-server
	kill-server
	start-server
	list-commands
	show-message
	source-file
#}}}
window pane #{{{
	choose-tree
	choose-client
	choose-session
	choose-window

	new-window
	kill-window
	move-window
	link-window
	swap-window
	list-windows
	find-windows
	last-window
	next-window
	previous-window
	select-window
	rotate-window
	rename-window
	respawn-window
	split-window

	next-layout
	select-layout
	previous-layout

	kill-pane
	move-pane
	swap-pane
	join-pane
	break-pane
	pipe-pane
	list-panes
	last-pane
	select-pane
	capture-pane
	display-panes
	resize-pane
	respawn-pane
#}}}
buffer #{{{
	clear-history
	delete-buffer
	choose-buffer
	paste-buffer
	list-buffers
	load-buffer
	save-buffer
	set-buffer
	show-buffer
#}}}

vi-edit vi-copy vi-choice #{{{
	bind-key unbind-key list-keys
		Up Down Left Right
		Tab Enter Space Escape
#}}}
display-message
confirm-before
command-prompt
run-shell
if-shell
wait-for
send-keys
send-prefix
#}}}

-h
--help
man
info

"" '' ``
* ? [^-] / . .. ~ -
# < << | >> >
; \
()
${} =


! !! !$ !!:gs// ^^^
$HISTFILE $HISTFILESIZE $HISTSIZE history fc script

% & 
jobs bg fg kill wait nohup

exit 

alias unalis

set -o vi
set -o emacs
 
 

$PATH
which whereis whatis apropos

/boot /dev
/proc /etc

/sbin /lib
/bin /usr

/root /var
/home /mnt

/usr/include
/usr/lib
/usr/src
/usr/bin
/usr/sbin
/usr/share
/usr/local

/dev
null zero stdin stdout stderr fd/

/etc
hosts
networks

bashrc
defaults
ftpd.conf
group
localtime
locate.rc
man.conf
manpaths
nfs.conf
notify.conf
ntp.conf
passwd
profile
resolv.conf
shells
ssh
sudoers
syslog.conf
zshrc

/bin
sh csh ksh tcsh bash zsh
ls ln mv rm rmdir mkdir
ps kill
df
cp cat dd ed
chmod

link unlink

expr test # [
echo
pwd
date sleep
stty sync
hostname domainname

/sbin
dmesg md5
ifconfig ping route
shutdown reboot halt
mount umount mknod

uname
sort
who
wc
find
/dev/null
uname
tee

file
od

$HOME
pwd cd
ls ln mv rm rmdir mkdir
cat tee more less head tail
diff patch
cp dd
od
ed
find
grep

vim
ioa hjkl web gnft cdy rsx qup zvm

shell
#! /bin/bash
$0 $$ $_ $?
$- $1 $# $@ $* shift
$REPLY read; echo; exit
until cmd; do cmd; done
for var in val; do cmd; done
if cmd; then cmd; else cmd; fi
${!}

var=val
${var}
export 
$LINENO

$OPTARG
$OPTIND
getopts
$PPID
$PWD
$RANDOM
$SECONDS

$COLUMNS
$EDITOR


mknod
sync
ps kill
df
chmod
/dev/null
/dev/zero
chmod
umask
touch

boot etc#{{{
proc dev
root var
home mnt
sbin lib
bin usr
#}}}
/sbin/init#{{{
/etc/init.d
/etc/rc.local

/etc/issue
/sbin/getty
/bin/login /usr/sbin/sshd
/etc/shadow
/etc/passwd
/etc/motd

/bin/bash
/etc/profile
~/.bashrc

#}}}
AEBF#{{{
MIJV
HDYWUK
NPORXT
CZSQLG

iao
hjkl web gftn
cdy xsr zvm qup

h
#}}}
\ "" '' `` . : #{{{
# > >> << <
~ ./ ../ * ? [^-]
% ; & | && ||
!
() {}
= $
-
+
:
#}}}
-h --help man info
pwd cd dirs pushd popd
ls mv rm mkdir rmdir ln
cat tee more less head tail
cp grep sort uniq diff tr
file touch chmod
bzip2 bunzip2 bzcat
gzip gunzip zcat
tar

hostname date
type which whereis
ps
who w write mesg cmail
script

chsh passwd

/dev/null

$HISTSIZE $HISTFILE $HISTFILESIZE $FCEDIT
history fc !
alias 
unalias
function 


set; unset 
exec
exit
echo
bash source
() (()) [] [[]]


 jobs bg fg ps top kill

$TERM $COLUMS $LINES $PS1 $PS2 $IFS
$USER $HOME $SHELL $PATH $PWD $CDPATH
declare -a -f -i -r -x
readonly export 


touch stat file
tee 
top  fg bg kill killall wait trap lsof
mount umount df du tar bzip2 gzip zip
printenv alias 

/etc/passwd /etc/shadow /etc/skel /etc/group
useradd userdel usermod passwd chsh chfn chage chpasswd
groupadd groupdel groupmod 
umask chmod chown chgrp


# \ '' "" `` . :
# | > >> << <
./ .. ~ * ? [^]
! ^ ; & % && ||

  

var=val $var var=(one two) ${var[0]}
set; unset; export; readonly declare 
$$ $0 $1 $# $* $@ $OPTARG $OPTIND
shift getopt getopts  
echo; read bash exit exec source return
$? $_

trap "echo hello" HUP INT QUIT KILL TERM STOP TSTP CONT
trap "echo hello" EXIT

bc expr let test

test [ ] [[ ]] (( ))
[ = != \< \> -n -z ]
[ -eq -ne -gt -ge -lt -le ]
[ -e -s -d -f -r -w -x -O -G -nt -ot ]

$IFS
mktemp

if cmd; then cmd; elif cmd; then cmd; else cmd; fi
case exp in pat1|pat2) cmd;; *) cmd esac
for var in exp; do cmd; done
while cmd; do cmd; done
until cmd; do cmd; done
break continue





fc history alias script
jobs bg fg kill wait nohup times ulimit
which whereis whatis appropos

boot etc proc dev
root mnt home var
sbin lib bin usr


mknod

ln
chmod sync
od
diff patch basename
find grep sort

iao
hjkl web gftn
cdy rsx zvm qup
ernp wq mtd

bash
source
sleep

true false

$0 $$
$1 $* $@ $#
$? $_
$SECONDS $RANDOM $OPTIND $OPTARG $PWD $PPID
$PATH

read echo
printf

return

exit
trap
=
typeset 
type
.
:

alias
exec
set 
getopts
shift
break continue
declare -a
declare -f 
declare -i
declare -r
declare -x
enable
eval
hash
let
test
expr
logout
readonly


unset 
${} ${!} ${#}
${var:-val} ${var:=val} ${var:?val} ${var:+val}
${var#pat}
${var##pat}
${var%pat}
${var%%pat}
$()
[ -e -s -b -c -d -f -p -L -S file ]
[ -r -w -x -u -g -k file ]
[ f1 -nt f2 ]
[ f1 -ot f2 ]
[ f1 -ef f2 ]
[ -z -n str ]
[ s1 = s2 ]
[ s1 != s2 ]
[ s1 \< s2 ]
[ s1 \> s2 ]
[ n1 -eq n2 ]
[ n1 -ne n2 ]
[ n1 -gt n2 ]
[ n1 -ge n2 ]
[ n1 -lt n2 ]
[ n1 -le n2 ]


if cmd; then cmd; else cmd; fi
until cmd; do cmd; done
for var in list; do cmd; done
export 





man sudo apt-get ps kill top free ping netstat ip who
cat tee tail uniq sort tr cut paste grep sed awk perl python
ls pwd cd ln cp rm mv chmod mkdir rmdir du find df mount umount tar
ssh bash tmux git vim go svn nginx openssl sqlite3
wget curl tcpdump lynx links
gdb gcc make ar od nm ldd size file readelf
