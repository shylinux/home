sudo apt-get install tmux zsh
git clone git://github.com/robbyrussell/oh-my-zsh.git .oh-my-zsh
cp .oh-my-zsh/templates/zshrc.zsh-template .zshrc

# > >> << <
: & | && ||
{} ()
if cmd; then cmd; elif cmd; then cmd; else cmd; fi
for var in var; do cmd; done
for ((exp; exp; exp)); do cmd; done
while cmd; do cmd; done
until cmd; do cmd; done
repeat exp; do cmd; done
case exp in pat) cmd;; pat) cmd;& pat) cmd;| esac
select var in exp; do cmd; done
function fun() {}
time
alias
 bg fg wait kill
let (())
test [[]]
