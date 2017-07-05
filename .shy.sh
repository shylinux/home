
check() { # {{{
	list=(~ ~/go/src/share ~/go/src/back ~/work ~/vpn/nginx-1.4.1/src/ngx_grammar)

	for l in $list; do
		cd $l && echo $l

		if [ -n "$1" ]; then
			git pull || { echo -n "enter to continue: " && read }
		else
			git s && echo $l "(input blank to skip commit)"&& echo -n "git commit -am " && read
			if [ -n "$REPLY" ]; then
				{ git commit -am "$REPLY" && git push } || { echo -n "enter to continue: " && read }
			fi
		fi

		echo && echo
	done

	if [ `uname` = 'Linux' ]; then
		usb='/media/SHY/home'
	else
		usb='/Volumes/SHY/home'
	fi

	list=(~/vpn/back $usb/vpn/back ~/bash/back $usb/bash/back)
	for n o in $list; do
		if ! [ -d $o ]; then
			echo $o "not exist" && echo
			continue
		fi

		if [ -n "$1" ]; then
			back -save $o $n
		else
			back -save $n $o
		fi

		echo && echo
	done

	cd
}
hello() {
	check 1
}
# }}}
