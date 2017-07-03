# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH=$HOME/.oh-my-zsh # {{{

# Set name of the theme to load. Optionally, if you set this to "random"
# it'll load a random theme each time that oh-my-zsh is loaded.
# See https://github.com/robbyrussell/oh-my-zsh/wiki/Themes
ZSH_THEME="robbyrussell"

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion. Case
# sensitive completion must be off. _ and - will be interchangeable.
# HYPHEN_INSENSITIVE="true"

# Uncomment the following line to disable bi-weekly auto-update checks.
# DISABLE_AUTO_UPDATE="true"

# Uncomment the following line to change how often to auto-update (in days).
# export UPDATE_ZSH_DAYS=13

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
# ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
# COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# The optional three formats: "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Which plugins would you like to load? (plugins can be found in ~/.oh-my-zsh/plugins/*)
# Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
# Example format: plugins=(rails git textmate ruby lighthouse)
# Add wisely, as too many plugins slow down shell startup.
plugins=(tmux go)

source $ZSH/oh-my-zsh.sh

# User configuration

# export MANPATH="/usr/local/man:$MANPATH"

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# ssh
# export SSH_KEY_PATH="~/.ssh/dsa_id"

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
# Example aliases
# alias zshconfig="mate ~/.zshrc"
# alias ohmyzsh="mate ~/.oh-my-zsh"
# }}}

export PROMPT=$LOCAL_PROMPT'%![%*]%c$ ' # {{{
export GOPATH=~/go
export GOBIN=~/go/bin
export PATH=$PATH:$GOBIN
export EDITOR=vim

alias t='tmux'
# }}}
HISTORY=~/temp/bash/history # {{{
[ -e $HISTORY ] || mkdir -p $HISTORY

LIST_MODE=1
LIST_NUM=60

zle-line-finish() { # {{{
	local now=$(date +%s)

	echo $BUFFER|awk "{printf \"%d %s\n\", $now, \$1}" >>$HISTORY/cmd
	echo $BUFFER|awk "{if (\$1==\"sudo\")printf \"%d %s\n\", $now, \$2}" >>$HISTORY/cmd
	echo $BUFFER|awk "{for (i=2;i<=NF;i++){printf \"%d %s\n\", $now, \$i}}" >>$HISTORY/arg

	case $LIST_MODE in
		1)	cat $HISTORY/cmd|cut -d' ' -f2|sort|uniq -c|sort -rn|head -$LIST_NUM >$HISTORY/cmd_tmp
			cat $HISTORY/arg|cut -d' ' -f2|sort|uniq -c|sort -rn|head -$LIST_NUM >$HISTORY/arg_tmp
			;;
		2)	cat $HISTORY/cmd|sort -rn|head -$LIST_NUM >$HISTORY/cmd_tmp
			cat $HISTORY/arg|sort -rn|head -$LIST_NUM >$HISTORY/arg_tmp
			;;
	esac
}
# }}}

complete_history() { # {{{
	local hi=$HISTORY/cmd_tmp
	if [ $CURRENT -gt 1 ]; then
		hi=$HISTORY/arg_tmp
	fi

	while read cnt cmd; do
		compadd -- $cmd
	done < $hi
}
# }}}

zle -C complete_history expand-or-complete complete_history
bindkey "^G" complete_history
# }}}

check() { # {{{
	list=(~ ~/go/src/share ~/go/src/back ~/work ~/vpn/nginx-1.4.1/src/ngx_grammar)

	for l in $list; do
		if [ -n "$1" ]; then
			if ! git pull; then
				echo -n "enter to continue: "
				read
			fi
			continue
		fi

		cd $l && clear && git s
		echo && echo $l "(input blank to skip commit)"&& echo -n "git commit -am " && read
		if [ -n "$REPLY" ]; then
			git commit -am "$REPLY"
			if ! git push; then
				echo -n "enter to continue: "
				read
			fi
		fi
	done

	if [ `uname` = 'Linux' ]; then
		usb='/media/SHY/home'
	fi

	list=(~/vpn/back $usb/vpn/back ~/bash/back $usb/bash/back)
	for n o in $list; do
		if [ -n "$1" ]; then
			clear && back -save $o $n
			continue
		fi

		if ! [ -d $o ]; then
			echo $o "not exist"
			continue
		fi

		clear && back -save $n $o
		echo -n "enter to continue: "
		read
	done
}
# }}}
hello() {
	check 1
}
bindkey -e # {{{
bindkey -s sd _
bindkey -s SD _
bindkey jk accept-line
bindkey kl vi-cmd-mode
bindkey "^N" down-line-or-beginning-search
bindkey "^P" up-line-or-beginning-search
bindkey -M vicmd j down-line-or-beginning-search
bindkey -M vicmd k up-line-or-beginning-search
# }}}

source ~/.zsh_local # {{{
source ~/bash/tool/tmux/power.sh
source ~/work/tool/vpm.sh
# }}}
