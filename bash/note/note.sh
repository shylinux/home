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
	wait-for
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
send-prefix
send-keys
run-shell
if-shell
#}}}
zsh #{{{
# ! | && || & ; \

set;setopt;shift getopts $OPTIND $OPTARG unsetopt
typeset declare interge float local export;readonly unset
read;echo;print;printf eval test let

. : true false
break continue return exit exec source trap suspend logout bye
disalbe enable builtin command hash rehash unhash
ulimit umask times limit unlimit log noglob ttyctl

if cmd; then cmd; elif cmd; then cmd; fi
for var in val; do cmd; done
for ((exp; exp; exp)) do cmd; done
case val in pat) cmd;; esac
select var in val; do cmd; done
while cmd; do cmd; done
until cmd; do cmd; done
function fun() {}
() (())
[] [[ ]]
{}
'' "" ``

alias unalias fc history
pwd cd dirs popd pushd
jobs bg fg wait kill disown
whence where which

bindkey#{{{
bindkey -e
bindkey -v
bindkey -a
bindkey -M

bindkey -l
bindkey -d
bindkey -D
bindkey -N
bindkey -A

bindkey
bindkey -s
bindkey -r
bindkey -L
#}}}
zle#{{{
zle -l
zle -D
zle -A
zle -N
zle -C

zle -R
zle -M
zle -U
zle -K
#}}}


vared
bindkey #{{{
bindkey -N
bindkey -D
bindkey -d
bindkey -A
bindkey -l

bindkey -e
bindkey -v
bindkey -a
bindkey -M

bindkey
bindkey -s
bindkey -r
bindkey -L
#}}}
zle #{{{
zle -l
zle -D
zle -A
zle -N
zle -C

zle -R
zle -M
zle -U
#}}}
widget #{{{
$BUFFERLINES $BUFFER $CURSOR $LBUFFER $RBUFFER
$HISTNO $CONTEXT $CUTBUFFER $killring[] $MARK
$MUMBER $PREDISPLAY $POSTDISPLAY

$PROMPT $ZLE_STATE $KEYMAP $KEYS
$WIDGET $WIDGETFUNC $WIDGETSTYLE

zle-line-init()
zle-line-finish()
zle-keymap-select()
zle-history-line-set()
zle-line-pre-redraw()
zle-isearch-update()
zle-isearch-exit()

movement #{{{
down-line
up-line
forward-char
backward-char
forward-word
backward-word
emacs-forward-word
emacs-backward-word
beginning-of-line
end-of-line

vi-goto-column
vi-goto-mark
vi-goto-mark-line
vi-repeat-find
vi-rev-repeat-find
vi-find-next-char
vi-find-prev-char
vi-find-next-char-skip
vi-find-prev-char-skip
vi-forward-char
vi-backward-char
vi-forward-word
vi-backward-word
vi-forward-word-end
vi-backward-word-end
vi-forward-blank-word
vi-backward-blank-word
vi-forward-blank-word-end
vi-backward-blank-word-end
vi-beginning-of-line
vi-first-non-blank
vi-end-of-line
#}}}
history#{{{

up-history
down-history
history-search-backward
history-search-forward

vi-up-line-or-history
vi-down-line-or-history
vi-history-search-backward
vi-history-search-forward
vi-repeat-search
vi-rev-repeat-search
vi-fetch-history

begnning-of-buffer-or-history
beginning-of-line-hist
begnning-of-history
down-line-or-history
down-line-or-search
history-beginning-search-backward
end-of-buffer-or-history
end-of-line-hist
end-of-history
history-incremental-search-backward#{{{
	accept-and-hold
	accept-and-infer-next-history
	accept-line
	accept-line-and-down-history
	backward-delete-char
	vi-backward-delete-char
	accept-search
	backward-delete-word
	backward-kill-word
	vi-backward-kill-word
	clear-screen
	history-incremental-search-backward
	history-incremental-search-forward
	magic-space
	quoted-insert
	vi-quoted-insert
	redisplay
	vi-cmd-mode
	vi-repeat-search
	vi-rev-repeat-search
#}}}
history-incremental-search-forward
history-incremental-pattern-search-backward
history-incremental-pattern-search-forward
infer-next-history
insert-last-word
up-line-or-history
up-line-or-search
histroy-beginning-search-forward
set-local-history
#}}}
modify#{{{
vi-add-eol
vi-add-next
vi-insert
vi-insert-bol
vi-quoted-insert
vi-open-line-above
vi-open-line-below
vi-put-before
vi-put-after

vi-yank
vi-yank-whole-line
vi-yank-eol
vi-delete
vi-delete-char
vi-kill-line
vi-kill-eol
vi-backward-delete-char
vi-backward-kill-word

vi-down-case
vi-up-case
vi-replace
vi-replace-chars
vi-change
vi-change-eol
vi-change-whole-line
vi-swap-case
vi-repeat-change
vi-indent
vi-unindent
vi-join
vi-oper-swap-case
vi-substitute
vi-match-bracket

backward-delete-char
backward-delete-word
backward-kill-line
backward-kill-word
capitalize-word
copy-region-as-kill
copy-prev-word
copy-prev-shell-word
delete-char
delete-word
down-case-word
kill-word
gosmacs-transpose-chars
kill-line
kill-region
kill-buffer
kill-whole-line
overwrite-mode
put-replace-selection
quoted-insert
quote-line
quote-region
self-insert
self-insert-unmeta
transpose-chars
transpose-words
up-case-word
yank
yank-pop
#}}}
completion #{{{
accept-and-menu-complete
complete-word
delete-char-or-list
expand-cmd-path
expand-or-complete
expand-or-complete-prefix
expand-history
expand-word
list-choices
list-expand
magic-space
menu-complete
menu-expand-or-complete
reverse-menu-complete
end-of-list
#}}}
#}}}
completion widget


bindkey
vared
zle
bindkey
unfunction
functions
type
pushln
getln
autoload
compile
zformat
zftp
zle
zmodload
zpareseopts
zprof
zpty
zregexparse
zsocket
zstyle
ztcp
vared
stat
sched
cap
getcap
setcap
echotc echoti
emulate
clone
comparguments
compcall
compctl
compdescribe
compfiles
compgroups
compquote
comptags
comptry
compvalues

#}}}
qemu #{{{
/etc/networks
/etc/resolv.conf
/etc/hosts
ifconfig
netstat
route
arp

sudo apt-get install uml-utilities
tunctl -t
tunctl -d

sudo apt-get install bridge-utils
brctl addbr
brctl delbr
brctl addif
brctl delif
brctl show

sudo apt-get install qemu-kvm
qemu-img create
qemu-img snapshot
qemu-img check
qemu-img commit
qemu-img compare
qemu-img convert
qemu-img info
qemu-img map

qemu-system-x86_64
	-smp 2
	-m 2000
	-localtime
	-nographic
	-vga none
	-boot c
	-drive file=power.img
	-net nic,vlan=0,model=e1000
	-net tap,vlan=0,ifname=tap0,script=no

	-device
	-hda
	-cdrom

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
