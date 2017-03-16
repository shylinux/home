hub mac win
vps shy vpn

add mod pro
del fix opt

ARM UNIX HTTP
    c
  sh  go
vi  py  js

make gcc gdb/*{{{*/
库文件 头文件 源文件
类型 变量 函数
语句 表达式
常量 变量 运算符 函数

标识符 常量 变量
分隔符 空白 注释
运算符
/*}}}*/
gcc -c -o/*{{{*/

/etc/ld.so.conf
ldconfig
/*}}}*/
#include<>/*{{{*/
#define
#undef
#if
#elif
#else
#endif
#ifdef
#ifndef
#error
#line 123 "file"
__LINE__ __FILE__
__DATE__ __TIME__
#pragma message()
#pragma warning(once:4385)
/*}}}*/

char int float double void
signed unsigned short long
auto register volatile const

struct union enum
typedef sizeof
static extern

if else
for do while
switch case default
break continue
goto return
// /**/ /*{{{*/
'a' "a"
01 0x1

[] () . ->
! ~ ++ -- + - * & sizeof
* / %
+ -
<< >>
< <= > >= 
== !=
& ^ |
&& ||
?:
=
,
/*}}}*/

C89 15/*{{{*/
#include <math.h>/*{{{*/
	signbit()
	isfinite()
	isnan()
	isinf()
	M_E M_LOG2E M_LOG10E M_LN2 M_LN10 M_PI M_PI_2
	M_PI_4 M_1_PI M_2_PI M_2_SQRTPI M_SQRT2 M_SQRT1_2
/*}}}*/
#include <ctype.h>/*{{{*/
	isctype()
	isascii() toascii()

	iscntrl()
	isprint()
		isspace()
		isgraph()
			ispunct()
			isalnum()
				isdigit()
				isxdigit()
				isalpha()
					islower() toupper()
					isupper() tolower()
	/*}}}*/
#include <string.h>/*{{{*/
	memmem()
	mempcpy()

	memset()
	memchr()
	memcmp()
	memcpy() memmove()
	strcpy() strncpy()
	strcat() strncat()
	strlen() strnlen()
	strcmp() strncmp()
	strchr() strrchr()
	strspn() strcspn()
	strtok() strpbrk()
	strstr()
	stpcpy()

	strcasecmp()
	strncasecmp()
	strerror()
	strsignal()

	strcoll()
	strcfrm()
	strdup()
	strndup()

	bcopy()
	bzero()
	bcmp()
	index()
	basename()
/*}}}*/
#include <stdlib.h>/*{{{*/
	EXIT_SUCCESS
	EXIT_FAILURE

	atof() atoi() atol() atoll() l64a() a64l()
	strtof() strtod() strtold() strtol() strtoul()
	strtoll() strtoull() strtoq() strtouq()
	random srandom() initstate() setstate()
	malloc() calloc() realloc() free()
	abort() atexit() exit()
	getenv() putenv() setenv() unsetenv() clearenv()
	system() realpath() mktemp() mkstemp()
	bsearch() qsort() abs() div() ldiv()
/*}}}*/
#include <stdio.h>/*{{{*/
	EOF
	va_list
	off_t ssize_t fpos_t
	FILE stdin stdout stderr
	SEEK_SET SEEK_CUR SEEK_END
	remove() rename() tmpfile() tmpnam() tempnam()

	fopen() fclose() freopen() fdopen() fcloseall() fmemopen()
	fflush() setbuf() setvbuf() setbuffer() setlinebuf()

	snprintf()
	sprintf() sscanf()
	printf() scanf()
	fprintf() fscanf()
	vsnprintf()
	vsprintf() vscanf()
	vprintf() vsscanf()
	vfprintf() vfscanf()

	ungetc()
	getw() putw()
	getc() putc()
	fgetc() fputc()
	getchar() putchar()
	gets() puts()
	fgets() fputs()

	fread() fwrite()
	fseek() ftell()
	feof() ferror()
	rewind() clearerr()
	fgetpos() fsetpos()
	perror() fileno()
	popen() pclose()

	scanf("%d %o %x %f %e %c %s")
	printf("%u %d %o %x %f %e %g %c %s")
/*}}}*/

#include <errno.h>/*{{{*/
	errno
/*}}}*/
#include <setjmp.h>/*{{{*/
	jmp_buf setjmp() longjmp()
/*}}}*/
#include <assert.h>/*{{{*/
	assert()
/*}}}*/
#include <signal.h>/*{{{*/
	sigset_t
	pid_t
	uid_t
	signal()
	kill()
	raise()
	sigblock()
	sigsetmask()
	siggetmask()
	sigemptyset()
	sigfillset()
	sigaddset()
	sigdelset()
	sigismember()
	sigisemptyset()
	sigandset()
	sigorset()
	sigprocmask()
	sigsuspend()
	sigaction()
	sigpending()
	sigwait()
/*}}}*/

#include <time.h>/*{{{*/
	clock_t
	clock()

	nanosleep()
	timer_create()
	timer_delete()
	timer_settime()
	timer_gettime()

	tzname
	daylight

	asctime()
	ctime()

	stime()
	time()
	time_t difftime()
	mktime()
	gmtime() localtime() timezone
	struct tm
	strptime()
	strftime()
/*}}}*/
#include <locale.h>/*{{{*/
	struct lconv
	localeconv()
/*}}}*/
#include <limits.h>/*{{{*/
/*}}}*/
 #include <stdarg.h>/*{{{*/
	va_list
	va_start()
	va_arg()
	va_end()
/*}}}*/
#include <stddef.h>/*{{{*/
	NULL
/*}}}*/
#include <float.h>/*{{{*/
/*}}}*/
/*}}}*/
C99 24/*{{{*/
#include <fenv.h>
 #include <iso646.h>
#include <wchar.h>
#include <wctype.h>
#include <complex.h>
#include <tgmath.h>
#include <inttypes.h>
#include <stdint.h>
 #include <stdbool.h>

/*}}}*/
POSIX std 26/*{{{*/
#include <sys/stat.h>/*{{{*/
	#include <bits/stat.h>
		struct stat

	S_IFMT S_IFLNK
	S_IFREG S_IFDIR
	S_IFCHR S_IFBLK
	S_IFIFO S_IFSOCK

	S_ISUID S_ISGID S_ISVTX
	S_IRUSR S_IWUSR S_IXUSR
	S_IRGRP S_IWGRP S_IXGRP
	S_IROTH S_IWOTH S_IXOTH

	umask() getumask()
	stat() fstat() lstat()
	chmod() lchmod() fchmod()
	mkdir() mknod() mkfifo()
/*}}}*/
#include <dirent.h>/*{{{*/
	#include <bits/dirent.h>
		struct dirent
	DIR
	opendir() closedir()
	readdir() rewinddir()
	seekdir() telldir()
	fdopendir() dirfd()
	scandir() alphasort()
/*}}}*/
#include <fcntl.h>/*{{{*/
	#include <bits/fcntl.h>
		O_RDONLY O_WRONLY O_RDWR
		O_CREAT O_EXCL O_NOCTTY
		O_TRUNC O_APPEND
		O_NONBLOCK O_SYNC O_ASYNC
	
	S_IFMT S_IFLNK
	S_IFREG S_IFDIR
	S_IFCHR S_IFBLK
	S_IFIFO S_IFSOCK

	S_IRUSR S_IWUSR S_IXUSR
	S_IRGRP S_IWGRP S_IXGRP
	S_IROTH S_IWOTH S_IXOTH

	open() fcntl() creat()

	R_OK W_OK X_OK F_OK
	SEEK_SET SEEK_CUR SEEK_END
	F_ULOCK F_LOCK F_TLOCK F_TEST
	lockf()
/*}}}*/

#include <linux/fs.h>/*{{{*/

fd buf data
files inode list
fop cdev dev_t

struct inode {
	umode_t i_mode;
	kuid_t i_uid;
	kgid_t i_gid;
	unsigned long i_ino;
	unsigned int i_nlink;
	dev_t i_rdev;
	loff_t i_size;
	struct timespec i_atime;
	struct timespec i_mtime;
	struct timespec i_ctime;
	unsigned int i_blkbits;
	blkcnt_t i_blocks;
}
struct file_operations {
	llseek()
	read()
	write()
	open()
	release()
	unlocked_iotcl()
}
/*}}}*/
#include <linux/sched.h>/*{{{*/
struct task_struct {
	volatile long state;
	pid_t pid;
	pid_t tgid;
	int exit_state;
	int exit_code;
	int exit_signal;
	struct files_struct *files;
	struct signal_struct *signal;
}
/*}}}*/

#include <sys/wait.h>/*{{{*/
	WTERMSIG() WIFSIGNALED()
	WIFSTOPPED() WSTOPSIG()
	WEXITSTATUS() WIFEXITED()

	wait() waitpid()
/*}}}*/
#include <unistd.h>/*{{{*/
	STDIN_FILENO
	STDOUT_FILENO
	STDERR_FILENO

	R_OK W_OK X_OK F_OK
	access()

	SEEK_SET SEEK_CUR SEEK_END
	lseek() close()
	read() write()
	pipe()

	alarm() ualarm()
	sleep() usleep()
	pause()

	chown() fchown() lchown()
	chdir() fchdir() getcwd()
	dup() dup2() dup3()
	environ

	execve() execv() execvp()
	execle() execl() execlp()
	nice() _exit()

	pathconf() fpathconf()
	sysconf() confstr()

	getpid() getppid()
	getpgrp() setpgrp()
	getpgid() setpgid()
	getsid() setsid()

	getuid() geteuid()
	getgid() getegid() getgroups()
	setuid() setreuid() seteuid()
	getgid() getregid() setegid()
	getresuid() getresgid()
	setresuid() setresgid()

	fork() vfork()
	ttyname() isatty()

	symlink() realink()
	link() unlink() rmdir()

	tcgetpgrp() tcsetpgrp()

	getlogin() setlogin()

	gethostname()
	sethostname()

	vhangup() revoke()
	profil() acct()
	daemon() chroot() getpass()
	sync() fsync() syncfs()
	gethostid()

	getpagesize() getdtablesize()
	truncate() ftruncate()
	brk() sbrk()
	syscall()

	F_ULOCK F_LOCK F_TLOCK F_TEST
	lockf()
	crypt() encrypt()
	swab() ctermid()
/*}}}*/

#include <sys/socket.h>/*{{{*/
	socket() socketpair() shutdown()
	bind() listen() accept() connect()
	getsockname() getpeername()
	getsockopt() setsockopt()

	send() recv()
	sendto() recvfrom()
	sendmsg() recvmsg()
/*}}}*/
#include <netinet/in.h>/*{{{*/
	in_addr_t
	struct in_addr
	struct sockaddr_in
		sin_family
		sin_port
		sin_addr
			s_addr
	INADDR_ANY
	INADDR_LOOPBACK
	ntohl()
	ntohs()
	htonl()
	htons()
/*}}}*/
#include <arpa/inet.h>/*{{{*/
	socklen_t
	inet_addr()
	inet_lnaof() inet_netof()
	inet_network() inet_makeaddr()
	inet_ntoa() inet_aton()
	inet_pton() inet_ntop()
/*}}}*/
#include <netdb.h>/*{{{*/
	struct hostent
	sethostent() gethostent() endhostent()
	gethostbyaddr() gethostbyname()
/*}}}*/

#include <fnmatch.h>
#include <glob.h>
#include <grp.h>
#include <pwd.h>
#include <regex.h>
#include <tar.h>
#include <termios.h>
#include <utime.h>
#include <wordexp.h>
#include <net/if.h>
#include <netinet/tcp.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/times.h>
#include <sys/types.h>
#include <sys/un.h>
#include <sys/utsname.h>
/*}}}*/
POSIX XSI 26/*{{{*/
#include <cpio.h>
#include <dlfcn.h>
#include <fmtmsg.h>
#include <ftw.h>
#include <iconv.h>
#include <langinfo.h>
#include <libgen.h>
#include <monetary.h>
#include <nl_types.h>
#include <poll.h>
#include <search.h>
#include <strings.h>
#include <syslog.h>
#include <ucontext.h>
#include <ulimit.h>
#include <utmpx.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/resource.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/statvfs.h>
#include <sys/time.h>
#include <sys/timeb.h>
#include <sys/uio.h>
 #include <ndbm.h>
/*}}}*/
POSIX opt 6/*{{{*/
#include <pthread.h>/*{{{*/
	pthread_create()
	pthread_exit() pthread_yield()
	pthread_join() pthread_detach()
	pthread_self() pthread_equal()

	pthread_once()
	pthread_setcancelstate()
	pthread_setcanceltype()
	pthread_cancel()
	pthread_testcancel()


	pthread_attr_init()
	pthread_attr_destroy()
	pthread_attr_getdetachstate()
	pthread_attr_setdetachstate()
	pthread_attr_getguardsize()
	pthread_attr_setguardsize()
	pthread_attr_getschedparma()
	pthread_attr_setschedparma()
	pthread_attr_getschedpolicy()
	pthread_attr_setschedpolicy()
	pthread_attr_getstacksize()
	pthread_attr_setstacksize()
	pthread_attr_getstack()
	pthread_attr_setstack()

	pthread_mutex_init()
	pthread_mutex_destroy()
	pthread_mutex_trylock()
	pthread_mutex_lock()
	pthread_mutex_unlock()
	pthread_mutex_timedlock()

	pthread_rwlock_init()
	pthread_rwlock_destroy()
	pthread_rwlock_rdlock()
	pthread_rwlock_tryrdlock()
	pthread_rwlock_timedrdlock()
	pthread_rwlock_wrlock()
	pthread_rwlock_trywrlock()
	pthread_rwlock_timedwrlock()
	pthread_rwlock_unlock()

	pthread_cond_init()
	pthread_cond_destroy()
	pthread_cond_signal()
	pthread_cond_broadcast()
	pthread_cond_wait()
	pthread_cond_timewait()

	pthread_spin_init()
	pthread_spin_destroy()
	pthread_spin_lock()
	pthread_spin_trylock()
	pthread_spin_unlock()
/*}}}*/
#include <semaphore.h>/*{{{*/
	sem_init() sem_destroy()
	sem_open() sem_close() sem_unlink()
	sem_wait() sem_timewait() sem_trywait()
	sem_post() sem_getvalue()
/*}}}*/
#include <aio.h>
#include <mqueue.h>
#include <sched.h>
#include <spawn.h>
#include <stropts.h>
 #include <trace.h>
/*}}}*/

sudo apt-get install libcurl4-openssl-dev/*{{{*/
gcc -lcurl

#include <curl/curl.h>
	#include <curl/typecheck-gcc.h>
		CURLOPT_URL
		CURLOPT_WRITEDATA
		CURLOPT_WRITEFUNCTION
	CURL
	curl_easy_init()
	curl_easy_setopt()
	curl_easy_perform()
	curl_easy_cleanup()
/*}}}*/
sudo apt-get install libsqlite3-dev/*{{{*/
gcc -lsqlite3
#include <sqlite3.h>
	sqlite3
	sqlite3_stmt
	sqlite3_open() sqlite3_exec() sqlite3_close()
	sqlite3_get_table() sqlite3_free_table()
	sqlite3_errcode() sqlite3_errmsg()
	sqlite3_prepare() sqlite3_sql()
	sqlite3_column_count()
	sqlite3_column_name()
	sqlite3_data_count()


/*}}}*/
sudo apt-get install mysql-server mysql-client mysql-client-dev
gcc -lmysqlclient

show databases;
#include <mysql/mysql.h>
	MYSQL
	mysql_init() mysql_real_connect()
	mysql_query() mysql_real_query()
	MYSQL_RES mysql_use_result() mysql_store_result()
	MYSQL_ROW mysql_fetch_row() mysql_fetch_lengths()
	mysql_num_fields()
	mysql_data_seek()
	mysql_row_seek()
	mysql_num_rows()
	mysql_affected_rows()

	mysql_free_result()
	mysql_close()

