/usr/local/bin:/usr/bin:/bin#{{{
/usr/local/lib:/usr/lib:/lib
/usr/local/include:/usr/include

gcc -D -U -E -S -c -o -O -g -W -f -I -L -l
ar crv
nm ldd file
ldconfig /etc/ld.so.conf
man info which whereis
time
mount
/dev/console
/dev/tty
/dev/zero
/dev/null

find grep sed awk

# '' "" \
# << < | > >>
# * ./ ? [^-]
# {} ; & && ||


local
export 
readonly
unset 

var=exp var=() var[exp]=exp
${:+} ${:-} ${:=} ${:?}
${#} ${%}

$()
$[]
$(())
$LOGNAME $USER $PATH $HOME $PWD
$LANG $TERM $SHELL $PS1 $PS2 $IFS
$$ $0 $?
$1 $# $@ $*

[ = != -n -z ]
[ -e -s -O -G ]
[ -r -w -x -u -g -k ]
[ -f -d -L -b -c -p -S -t ]
[ -eq -ne -gt -ge -lt -le ]

if exp; then cmd; else cmd; fi
while exp; do cmd; done
until exp; do cmd; done
for var in exp; do cmd; done
case var in pat) cmd ;; *) cmd; esac
break continue true false

function fun() {return}
set;shift
test eval
read echo
exec exit
trap source bash
env

#}}}

float.h
stdarg.h
stddef.h

assert.h
ctype.h
locale.h
math.h
setjmp.h
signal.h
string.h
time.h
#include<errno.h>
#include<stdio.h>
	fopen()
	fclose()
	fread()
	fwrite()
	fflush()
	fseek()
	fgetc()
	getc()
	getchar()
	fputc()
	putc()
	putchar()
	fgets()
	gets()
	printf()
	fprintf()
	sprintf()
	scanf()
	fscanf()
	sscanf()
#include<limits.h>
	errno:int
#include<stdlib.h>
	exit()

#include<unistd.h>
	dup()
	dup2()
	read()
	write()
	close()
	SEEK_SET
	SEEK_CUR
	SEEK_END
	lseek()
#include<fcntl.h>
	#include<bits/fcntl.h>/*{{{*/
		O_RDONLY
		O_WRONLY
		O_RDWR

		O_CREAT
		O_EXCL
		O_NOCTTY

		O_TRUNC
		O_APPEND
		O_NONBLOCK
/*}}}*/
	S_IRUSR
	S_IWUSR
	S_IXUSR
	S_IRGRP
	S_IWGRP
	S_IXGRP
	S_IROTH
	S_IWOTH
	S_IXOTH
	open()

#include<dirent.h>


#include<sys/types.h>
#include<sys/stat.h>
	#include<bits/stat.h>/*{{{*/
		stat:struct
			st_mode:mode_t
			st_ino:ino_t
			st_nlink:nlink_t
			st_dev:dev_t
			st_uid:uid_t
			st_gid:git_t
			st_size:off_t
			st_blksize:blksize_t
			st_blksize:blkcnt_t
			st_atime:time_t
			st_mtime:time_t
			st_ctime:time_t
/*}}}*/
	stat()
	fstat()
	lstat()
	S_IFBLK
	S_IFCHR
	S_IFDIR
	S_IFREG
	S_IFLNK
	S_IFIFO
	S_ISUID
	S_ISGID
	S_ISBLK()
	S_ISCHR()
	S_ISDIR()
	S_ISREG()
	S_ISLNK()
	S_ISFIFO()
#include<sys/ioctl.h>
	ioctl()

sys/acct.h
sys/bitypes.h
sys/cdefs.h
sys/debugreg.h
sys/dir.h
sys/epoll.h
sys/errno.h
sys/eventfd.h
sys/fanotify.h
sys/fcntl.h
sys/file.h
sys/fsuid.h
sys/gmon.h
sys/gmon_out.h
sys/inotify.h
sys/io.h
sys/ipc.h
sys/kdaemon.h
sys/kd.h
sys/klog.h
sys/mman.h
sys/mount.h
sys/msg.h
sys/mtio.h
sys/param.h
sys/pci.h
sys/perm.h
sys/personality.h
sys/poll.h
sys/prctl.h
sys/procfs.h
sys/profil.h
sys/ptrace.h
sys/queue.h
sys/quota.h
sys/raw.h
sys/reboot.h
sys/reg.h
sys/resource.h
sys/select.h
sys/sem.h
sys/sendfile.h
sys/shm.h
sys/signalfd.h
sys/signal.h
sys/socket.h
sys/socketvar.h
sys/soundcard.h
sys/statfs.h
sys/statvfs.h
sys/stropts.h
sys/swap.h
sys/syscall.h
sys/sysctl.h
sys/sysinfo.h
sys/syslog.h
sys/sysmacros.h
sys/termios.h
sys/timeb.h
sys/time.h
sys/timerfd.h
sys/times.h
sys/timex.h
sys/ttychars.h
sys/ttydefaults.h
sys/ucontext.h
sys/uio.h
sys/ultrasound.h
sys/un.h
sys/unistd.h
sys/user.h
sys/ustat.h
sys/utsname.h
sys/vfs.h
sys/vlimit.h
sys/vt.h
sys/vtimes.h
sys/wait.h
sys/xattr.h

complex.h
error.h
grp.h
linux
malloc.h
mm
net
netdb.h
neteconet
netinet
openssl
pthread.h
pwd.h
readline
syslog.h
ulimit.h
arpa

aio.h
aliases.h
alloca.h
a.out.h
argp.h
argz.h
ar.h
asm-generic
byteswap.h
c++
cpio.h
crypt.h
dbus-1.0
dlfcn.h
drm
elf.h
endian.h
envz.h
err.h
execinfo.h
features.h
fenv.h
fmtmsg.h
fnmatch.h
fstab.h
fts.h
ftw.h
_G_config.h
gconv.h
getopt.h
glob.h
gnu-versions.h
gshadow.h
gstreamer-0.10
iconv.h
ieee754.h
ifaddrs.h
inttypes.h
langinfo.h
lastlog.h
libgen.h
libintl.h
libio.h
libltdl
link.h
ltdl.h
mcheck.h
memory.h
mntent.h
monetary.h
mqueue.h
mtd
nautilus-sendto
netash
netatalk
netax25
netipx
netiucv
netpacket
netrom
netrose
nfs
nl_types.h
nss.h
obstack.h
paths.h
pcrecpparg.h
pcrecpp.h
pcre.h
pcreposix.h
pcre_scanner.h
pcre_stringpiece.h
poll.h
printf.h
protocols
pty.h
python2.7
rdma
re_comp.h
regex.h
regexp.h
resolv.h
rpc
rpcsvc
sched.h
scsi
search.h
semaphore.h
sgtty.h
shadow.h
sound
spawn.h
stab.h
stdint.h
stdio_ext.h
strings.h
stropts.h
sudo_plugin.h
syscall.h
sysexits.h
tar.h
termio.h
termios.h
tgmath.h
thread_db.h
ttyent.h
ucontext.h
ustat.h
utime.h
utmp.h
utmpx.h
values.h
video
wait.h
wchar.h
wctype.h
wordexp.h
X11
x86_64-linux-gnu
xen
xlocale.h
xorg
zconf.h
zlibdefs.h
zlib.h
