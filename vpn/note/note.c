hub mac win
vps vpm vpn

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
sudo apt-get install mysql-server mysql-client mysql-client-dev/*{{{*/
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
/*}}}*/


hub mac win
vps vpm vpn

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
sudo apt-get install mysql-server mysql-client mysql-client-dev/*{{{*/
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
/*}}}*/


src/core/*{{{*/
ngx_palloc.h/*{{{*/
	ngx_pool_t
		d:ngx_pool_data_t
			last:u_char*
			end:u_char*
			next:ngx_pool_t*
			failed:ngx_uint_t
		max:size_t
		current:ngx_pool_t*
		chain:ngx_pool_large_t*
			next:ngx_pool_large_t*
			alloc:void*
		cleanup:ngx_pool_cleanup_t*
			handler:ngx_pool_cleanup_pt
			data:void* /ngx_pool_cleanup_file_t
				fd:ngx_fd_t
				name:u_char*
				log:ngx_log_t*
			next:ngx_pool_cleanup_t*
		log:ngx_log_t*
	ngx_alloc() ngx_calloc()

	ngx_create_pool()
	ngx_destroy_pool()
	ngx_reset_pool()

	ngx_palloc()
	ngx_pnalloc()
	ngx_pcalloc()
	ngx_pmemalign()
	ngx_pfree()

	ngx_pool_cleanup_add()
	ngx_pool_run_cleanup_file()
	ngx_pool_cleanup_file()
	ngx_pool_delete_file()
/*}}}*/
ngx_palloc.c/*{{{*/
	ngx_create_pool()
		ngx_memalign()
		p:ngx_pool_t*
		p->d.last=p+sizeof(ngx_pool_t)
		p->d.end=p+size
		p->d.next=NULL
		p->d.failed=0
		p->max=size
		p->current=p
		p->log=log
		p->chain=NULL
		p->large=NULL
		p->cleanup=NULL
	ngx_destroy_pool()
		p->cleanup->handler()
		ngx_free(p->large->alloc)
		ngx_free(p->d.next)
	ngx_reset_pool()
		ngx_free(p->large->alloc)
		p->d.last=p+sizeof(ngx_pool_t)
	ngx_palloc()
		p->d.last+=size
		ngx_palloc_block()
			ngx_memalign()
			p:ngx_pool_t*
			p->d.end=p+size
			p->d.next=NULL
			p->d.failed=0
			p->d.last=p+size
		ngx_palloc_large()
			large:ngx_pool_large_t*
			large->alloc=ngx_alloc()
			large->next=p->large
			p->large=large
	ngx_pcalloc()
		ngx_palloc()
		ngx_memzero()
	ngx_pool_cleanup_add()
		ngx_palloc()
		c:ngx_pool_cleanup_t*
		c->next=p->cleanup
		p->cleanup=c
	ngx_pool_delete_file()
		ngx_delete_file()
		ngx_close_file()
	ngx_pool_cleanup_file()
		ngx_close_file()
	ngx_pool_run_cleanup_file()
		p->cleanup->handler()
	ngx_pnalloc()
		p->d.last+=size
		ngx_palloc_block()
		ngx_palloc_large()
	ngx_pmemalign()
		large:ngx_pool_large_t*
		large->alloc=ngx_memalign()
		large->next=p->large
		p->large=large
	ngx_pfree()
		ngx_free(p->large->alloc)
		/*}}}*/
ngx_buf.h/*{{{*/
	ngx_buf_t
		pos:u_char*
		last:u_char*
		file_pos:off_t
		file_last:off_t

		start:u_char*
		end:u_char*
		tag:ngx_buf_tag_t
		file:ngx_file_t*
		shadow:ngx_buf_t*

		temporary:unsigned
		memory:unsigned
		mmap:unsigned
		recycled:unsigned
		in_file:unsigned
		flush:unsigned
		syc:unsigned
		last_buf:unsigned
		last_in_chain:unsigned
		last_shadow:unsigned
		temp_file:unsigned
	ngx_chain_t
		buf:ngx_buf_t*
		next:ngx_chain_t
	ngx_bufs_t
		num:ngx_int_t
		size:size_t
	ngx_output_chain_ctx_t
		buf:ngx_buf_t*
		in:ngx_chain_t*
		free:ngx_chain_t*
		busy:ngx_chain_t*

		sendfile:unsigned
		directio:unsigned
		need_in_memory:unsigned
		need_in_temp:unsigned
		aio:unsigned
		aio_handler:ngx_output_chain_aio_pt
		alignment:off_t
		pool:ngx_pool_t*
		allocated:ngx_int_t
		bufs:ngx_bufs_t
		tag:ngx_buf_tag_t
		output_filter:ngx_output_chain_filter_pt
		filter_ctx:void*
	ngx_chain_writer_ctx_t
		out:ngx_chain_t*
		last:ngx_chain_t**
		connection:ngx_connection_t*
		pool:ngx_pool_t*
		limit:off_t
	ngx_create_temp_buf() ngx_create_chain_of_bufs()
	ngx_alloc_buf() ngx_calloc_buf()
	ngx_alloc_chain_link()
	ngx_free_chain()
	ngx_output_chain()
	ngx_chain_writer()
	ngx_chain_add_copy()
	ngx_chain_get_free_buf()
	ngx_chain_update_chains()
/*}}}*/
ngx_buf.c/*{{{*/
	ngx_create_temp_buf()
		ngx_calloc_buf()
		b:ngx_buf_t*
		b->start=ngx_palloc()
		b->pos=b->start
		b->last=b->start
		b->end=b->last+size
		b->temporary=1
	ngx_alloc_chain_link()
		p->chain
		ngx_palloc()
		cl:ngx_chain_t*
	ngx_create_chain_of_bufs()
		ngx_palloc()
		b:ngx_buf_t*
		ngx_calloc_buf()
		c:ngx_chain_t*
		ngx_alloc_chain_link()
	ngx_chain_add_copy()
		ngx_alloc_chain_link()
		c:ngx_chain_t*
	ngx_chain_get_free_buf()
		ngx_alloc_chain_link()
		ngx_alloc_buf()
	ngx_chain_update_chains()
/*}}}*/
ngx_output_chain.c/*{{{*/
	ngx_output_chain()
		ctx->output_filter()
		ngx_output_chain_as_is()
		ngx_output_chain_align_file_buf()
			ngx_create_temp_buf()
		ngx_output_chain_add_copy()
			ngx_alloc_chain_link()
			ngx_calloc_buf()
		ngx_output_chain_get_buf()
			ngx_calloc_buf()
			b:ngx_buf_t*
			b->start=ngx_palloc()
		ngx_output_chain_copy_buf()
			ngx_read_file()
			ngx_memcpy()
		ngx_alloc_chain_link()
		ngx_chain_update_chains()
	ngx_chain_writer()
		c->send_chain()
		/*}}}*/
ngx_slab.h ngx_slab.c/*{{{*/
	ngx_slab_pool_t
		lock:ngx_shmtx_sh_t
		min_size:size_t
		min_shift:size_t
		pages:ngx_slab_page_t*
		free:ngx_slab_page_t
			slab:uintptr_t
			next:ngx_slab_page_t*
			prev:uintptr_t
		start:u_char*
		end:u_char*
		mutex:ngx_shmtx_t
		log_ctx:u_char*
		zero:u_char
		data:void*
		addr:void*
	ngx_slab_init()
	ngx_slab_alloc() ngx_slab_alloc_locked()
	ngx_slab_free() ngx_slab_free_locked()
	/*}}}*/
ngx_shmtx.h ngx_shmtx.c/*{{{*/
	ngx_shmtx_sh_t
		lock:ngx_atomic_t
		wait:ngx_atomic_t
	ngx_shmtx_t
		lock:ngx_atomic_t*
		wait:ngx_atomic_t*
		semaphore:ngx_uint_t
		sem:sem_t
		fd:ngx_fd_t
		name:u_char*
		spin:ngx_uint_t
	ngx_shmtx_create() ngx_shmtx_destroy()
	ngx_shmtx_lock() ngx_shmtx_trylock()
	ngx_shmtx_unlock() ngx_shmtx_force_unlock()
/*}}}*/
ngx_spinlock.c/*{{{*/
	ngx_spinlock()
/*}}}*/

ngx_string.h ngx_string.c/*{{{*/
	ngx_str_t
		len:size_t
		data:void*
	ngx_keyval_t
		key:ngx_str_t
		value:ngx_str_t
	ngx_variable_value_t
		len:unsigned
		valid:unsigned
		no_cacheable:unsigned
		not_found:unsigned
		escape:unsigned
		data:void*
	ngx_string() ngx_null_string
	ngx_str_set() ngx_str_null()
	ngx_tolower() ngx_toupper()
	ngx_strlow()
	ngx_strncmp() ngx_strcmp()
	ngx_strchr() ngx_strstr()
	ngx_strlen() ngx_strlstr()
	ngx_memzero() ngx_memset()
	ngx_memmove() ngx_memcmp()
	ngx_cpystrn() ngx_strstrn()
	ngx_pstrdup() ngx_sprintf()
	ngx_snprintf() ngx_slprintf()
	ngx_vsnprintf() ngx_vslprintf()
	ngx_strcasecmp() ngx_strncasecmp()
	ngx_strcasestrn() ngx_strlcasestrn()
	ngx_atoi() ngx_atofp()
	ngx_atosz() ngx_atotm()
	ngx_hextoi() ngx_hex_dump()
	ngx_base64_encoded_length()
	ngx_base64_decoded_length()
	ngx_encode_base64()
	ngx_decode_base64()
	ngx_decode_base64url()
	ngx_utf8_decode()
	ngx_utf8_length()
	ngx_utf8_cpystrn()

	ngx_escape_uri()
	ngx_unescape_uri()
	ngx_escape_html()

	ngx_str_node_t
	ngx_str_rbtree_insert_value()
	ngx_str_rbtree_lookup()
	ngx_sort()
/*}}}*/
ngx_array.h ngx_array.c/*{{{*/
	ngx_array_t ngx_array_init()
		elts:void*
		nelts:ngx_uint_t
		size:size_t
		nalloc:ngx_uint_t
		pool:ngx_pool_t
	ngx_array_create() ngx_array_destroy()
	ngx_array_push() ngx_array_push_n()
/*}}}*/
ngx_list.h ngx_list.c/*{{{*/
	ngx_list_t
		last:ngx_list_part_t*
		part:ngx_list_part_t
			elts:void*
			nelts:ngx_uint_t
			next:ngx_list_part_t*
		size:size_t
		nalloc:ngx_uint_t
		pool:ngx_pool_t*
	ngx_list_create()
	ngx_list_init()
	ngx_list_push()
/*}}}*/
ngx_hash.h ngx_hash.c/*{{{*/
	ngx_hash_elt_t
		value:void*
		len:u_short
		name:u_char[]
	ngx_hash_t
		buckets:ngx_hash_elt_t
		size:ngx_uint_t
	ngx_hash_wildcard_t
		hash:ngx_hash_t
		value:void*
	ngx_hash_key_t
		key:ngx_str_t
		key_hash:ngx_uint_t
		value:void*
	ngx_hash_combined_t
		hash:ngx_hash_t
		wc_head:ngx_hash_wildcard_t*
		wc_tail:ngx_hash_wildcard_t*
	ngx_hash_init_t
		hash:ngx_hash_t*
		key:ngx_hash_key_pt
		max_size:ngx_uint_t
		bucket_size:ngx_uint_t
		name:char*
		pool:ngx_pool_t*
		temp_pool:ngx_pool_t*
	ngx_hash_keys_arrays_t
		hsize:ngx_uint_t
		pool:ngx_pool_t*
		temp_pool:ngx_pool_t*
		keys:ngx_array_t
		keys_hash:ngx_array_t*
		dns_wc_head:ngx_array_t
		dns_wc_head_hash:ngx_array_t*
		dns_wc_tail:ngx_array_t
		dns_wc_tail_hash:ngx_array_t*
	ngx_table_elt_t
		hash:ngx_uint_t
		key:ngx_str_t
		value:ngx_str_t
		lowcase_key:u_char*
	ngx_hash_find()
	ngx_hash_find_wc_head()
	ngx_hash_find_wc_tail()
	ngx_hash_find_combined()
	ngx_hash_init()
	ngx_hash_wildcard_init()
	ngx_hash_key()
	ngx_hash_key_lc()
	ngx_hash_strlow()
	ngx_hash_keys_array_init()
	ngx_hash_add_key()
/*}}}*/
ngx_queue.h ngx_queue.c/*{{{*/
	ngx_queue_t
		prev:ngx_queue_t
		next:ngx_queue_t
	ngx_queue_init() ngx_queue_empty()
	ngx_queue_insert_head() ngx_queue_head()
	ngx_queue_insert_tail() ngx_queue_last()
	ngx_queue_sentinel() ngx_queue_next() ngx_queue_prev()
	ngx_queue_remove() ngx_queue_data()
	ngx_queue_split() ngx_queue_add()
	ngx_queue_middle() ngx_queue_sort()
/*}}}*/
ngx_rbtree.h ngx_rbtree.c/*{{{*/
	ngx_rbtree_node_t
		key:ngx_rbtree_key_t
		left:ngx_rbtree_node_t*
		right:ngx_rbtree_node_t*
		parent:ngx_rbtree_node_t*
		color:u_char
		data:u_char
	ngx_rbtree_t
		root:ngx_rbtree_node_t*
		sentinel:ngx_rbtree_node_t*
		insert:ngx_rbtree_insert_pt
	ngx_rbtree_init()
	ngx_rbtree_insert()
	ngx_rbtree_delete()
	ngx_rbtree_insert_value()
	ngx_rbtree_insert_timer_value()
	ngx_rbt_red()
	ngx_rbtree_sentinel_init()
	ngx_rbtree_min()
/*}}}*/
ngx_radix_tree.h ngx_radix_tree.c/*{{{*/
	ngx_radix_node_t
		right:ngx_radix_node_t*
		left:ngx_radix_node_t*
		parent:ngx_radix_node_t*
		value:uintptr_t
	ngx_radix_tree_t
		root:ngx_radix_node_t*
		pool:ngx_pool_t*
		free:ngx_radix_node_t*
		start:char*
		size:size_t
	ngx_radix_tree_create()
	ngx_radix32tree_insert()
	ngx_radix32tree_delete()
	ngx_radix32tree_find()
/*}}}*/

ngx_regex.h/*{{{*/
	ngx_regex_compile_t
		pattern:ngx_str_t
		pool:ngx_pool_t*
		options:ngx_int_t

		ngx_regex_t
			code:pcre*
			extra:pcre_extra*
		captures:int
		named_captures:int
		name_size:int
		names:u_char*
		err:ngx_str_t
	ngx_regex_init()
	ngx_regex_compile()
	ngx_regex_exec()
	ngx_regex_exec_array()
/*}}}*/
ngx_regex.c
	ngx_regex_module:ngx_module_t
		ngx_regex_module_ctx:ngx_core_module_t*
			ngx_regex_create_conf()
			ngx_regex_init_conf()
		ngx_regex_commands:ngx_command_t[]
			ngx_string("pcre_jit")
		ngx_regex_module_init():
	ngx_pcre_pool:ngx_pool_t*
	ngx_pcre_studies:ngx_list_t*
	ngx_regex_init()
		pcre_malloc=ngx_regex_malloc
		pcre_free=ngx_regex_free
	ngx_regex_compile(rc)
		ngx_regex_malloc_init()
			ngx_pcre_pool=pool
		rc->regex=ngx_pcalloc()
		rc->regex->code=pcre_compile()
		ngx_list_push(ngx_pcre_studies)
		regex:ngx_regex_t
		ngx_regex_malloc_done()
			ngx_pcre_pool=NULL
		rc->captures=pcre_fullinfo()
		rc->named_captures=pcre_fullinfo()
		rc->name_size=pcre_fullinfo()
	ngx_regex_exec_array()
		ngx_regex_exec()
	ngx_regex_malloc()
		ngx_palloc()
	ngx_regex_free()
	ngx_pcre_free_studies()
	ngx_regex_module_init()
		ngx_pool_cleanup_add()

	



		


ngx_crc.h/*{{{*/
	ngx_crc()
/*}}}*/
ngx_sha1.h/*{{{*/
	ngx_sha1_t
	ngx_sha1_init()
	ngx_sha1_update()
	ngx_sha1_final()
/*}}}*/
ngx_md5.h ngx_md5.c/*{{{*/
	ngx_md5_t
	ngx_md5_init()
	ngx_md5_update()
	ngx_md5_final()
/*}}}*/
ngx_crc32.h ngx_crc32.c/*{{{*/
	ngx_crc32_short()
	ngx_crc32_long()
	ngx_crc32_init()
	ngx_crc32_update()
	ngx_crc32_final()
	ngx_crc32_table_init()
/*}}}*/
ngx_murmurhash.h ngx_murmurhash.c/*{{{*/
	ngx_murmur_hash2()
/*}}}*/
ngx_crypt.h ngx_crypt.c/*{{{*/
	ngx_crypt()
/*}}}*/

ngx_log.h/*{{{*/
	NGX_LOG_STDERR
	NGX_LOG_EMERG
	NGX_LOG_ALERT
	NGX_LOG_CRIT
	NGX_LOG_ERR
	NGX_LOG_WARN
	NGX_LOG_NOTICE
	NGX_LOG_INFO
	NGX_LOG_DEBUG

	NGX_LOG_DEBUG_CORE
	NGX_LOG_DEBUG_ALLOC
	NGX_LOG_DEBUG_MUTEX
	NGX_LOG_DEBUG_EVENT
	NGX_LOG_DEBUG_HTTP
	NGX_LOG_DEBUG_MAIL
	NGX_LOG_DEBUG_MYSQL

	ngx_log_t
		log_level:ngx_uint_t
		file:ngx_open_file_t
		connection:ngx_atomic_uint_t
		handler:ngx_log_handler_pt
		data:void*
		action:char*
	ngx_log_error() ngx_log_debug() ngx_log_error_core()

	ngx_log_init()
	ngx_log_create()
	ngx_log_set_levels()
	ngx_log_abort()
	ngx_log_stderr()
	ngx_log_errno()
	ngx_write_stderr()
	ngx_errlog_moulde:ngx_module_t
	ngx_use_stderr:ngx_uint_t
/*}}}*/
ngx_log.c/*{{{*/
	ngx_errlog_module:ngx_module_t
		ngx_errlog_module_ctx:ngx_core_module_t*
		ngx_errlog_commands:ngx_command_t[]
			ngx_string("error_log") ngx_error_log()
				ngx_conf_open_file()
				ngx_log_set_levels()
					log->log_level=NGX_LOG_DEBUG
	ngx_log:ngx_log_t
	ngx_log_file:ngx_open_file_t
	ngx_use_stderr:ngx_uint_t
	err_levels:ngx_str_t[]
		ngx_null_string
		ngx_string("emerg")
		ngx_string("alert")
		ngx_string("crit")
		ngx_string("error")
		ngx_string("warn")
		ngx_string("notice")
		ngx_string("info")
		ngx_string("debug")
	debug_levels:char*[]
		"debug_core"
		"debug_alloc"
		"debug_mutex"
		"debug_event"
		"debug_http"
		"debug_mail"
		"debug_mysql"
	ngx_log_error_core()
		ngx_cached_err_log_time
		err_levels[level]
		ngx_log_pid
		ngx_log_tid
		log->connection
		ngx_vslprintf()
		ngx_log_errno()
		log->handler()
		ngx_write_fd()
	ngx_log_error()
		ngx_log_error_core()
	ngx_log_debug_core
		ngx_log_error_core()
	ngx_log_abort()
		ngx_log_error()
	ngx_log_stderr()
		ngx_vslprintf()
		ngx_log_errno()
		ngx_write_console()
	ngx_log_errno()
		ngx_slprintf()
		ngx_strerror()
	ngx_log_init()
		ngx_open_file()
	ngx_log_create()
		ngx_pcalloc()
		log:ngx_log_t*
		ngx_conf_open_file()
		/*}}}*/
ngx_file.h/*{{{*/
	ngx_file_t
		fd:ngx_fd_t
		name:ngx_str_t
		info:ngx_file_info_t

		offset:off_t
		sys_offset:off_t
		log:ngx_log_t*

		aio:ngx_event_aio_t
		valid_info:unsigned
		directio:unsigned
	ngx_path_t
		name:ngx_str_t
		len:size_t
		level:size_t

		manager:ngx_path_manager_pt
		loader:ngx_path_loader_pt
		data:void*
		conf_file:u_char*
		line:ngx_uint_t
	ngx_path_init_t
		name:ngx_str_t
		level:size_t
	ngx_temp_file_t
		file:ngx_file_t
		offset:off_t
		path:ngx_path_t*
		pool:ngx_pool_t*
		warn:char*
		access:ngx_uint_t
		log_level:unsigned
		persistent:unsigned
		clean:unsigned
	ngx_ext_rename_file_t
		access:ngx_uint_t
		path_access:ngx_uint_t
		time:time_t
		fd:ngx_fd_t
		create_path:unsigned
		delete_file:unsigned
		log:ngx_log_t*
	ngx_copy_file_t
		size:off_t
		buf_size:size_t
		access:ngx_uint_t
		time:time_t
		log:ngx_log_t*
	ngx_write_chain_to_temp_file()
	ngx_create_temp_file()
	ngx_create_hashed_filename()
	ngx_create_path()
	ngx_create_full_path()
	ngx_add_path()
	ngx_create_paths()
	ngx_ext_rename_file()
	ngx_copy_file()
	ngx_walk_tree()
	ngx_next_temp_number()
	ngx_conf_set_path_slot()
	ngx_conf_merge_path_value()
	ngx_conf_set_access_slot()
	ngx_temp_number:ngx_atomic_t*
	ngx_random_number:ngx_atomic_int_t
	/*}}}*/
ngx_file.c/*{{{*/
	ngx_write_chain_to_temp_file()
		ngx_create_temp_file()
		ngx_write_chain_to_file()
	ngx_create_temp_file()
		ngx_next_temp_number()
		ngx_pool_cleanup_add()
		ngx_create_path()
		ngx_create_hashed_filename()
		ngx_open_tempfile()
	ngx_create_hashed_filename()
	ngx_create_path()
		ngx_create_dir()
	ngx_create_full_path()
		ngx_create_dir()
	ngx_next_temp_number()
		ngx_atomic_fetch_add()
	ngx_conf_set_path_slot()
		ngx_conf_full_name()
		ngx_add_path()
	ngx_conf_merge_path_value()
		ngx_conf_full_name()
		ngx_add_path()
	ngx_conf_set_access_slot()
	ngx_add_path()
		ngx_array_push(cf->cycle->paths)
		p:ngx_path_t*
	ngx_create_paths()
		ngx_create_dir()
		ngx_file_info()
		chown()
		chmod()
	ngx_ext_rename_file()
		ngx_change_file_access()
		ngx_set_file_time()
		ngx_rename_file()
	ngx_copy_file()
		ngx_open_file()
		ngx_fd_info()
		ngx_file_size()
		ngx_read_fd()
		ngx_write_fd()
		ngx_set_file_time()
		ngx_close_file()
	ngx_walk_tree()
		ngx_open_dir()
		ngx_read_dir()
		ngx_close_dir()
		ctx->file_handler()
		ngx_walk_tree()
		ctx->spec_handler()
		/*}}}*/
ngx_parse.h/*{{{*/
	ngx_parse_size()
	ngx_parse_offset()
	ngx_parse_time()
/*}}}*/
ngx_parse.c/*{{{*/
	ngx_parse_size()
	ngx_parse_offset()
	ngx_parse_time()
/*}}}*/
ngx_conf_file.h/*{{{*/
	NGX_CONF_NOARGS NGX_CONF_TAKE1 NGX_CONF_TAKE12
	NGX_CONF_MAX_ARGS NGX_CONF_ARGS_NUMBER
	NGX_CONF_BLOCK NGX_CONF_FLAG NGX_CONF_ANY
	NGX_CONF_1MORE NGX_CONF_2MORE
	NGX_DIRECT_CONF NGX_MAIN_CONF NGX_ANY_CONF

	NGX_CONF_UNSET
	NGX_CONF_UNSET_UINT
	NGX_CONF_UNSET_PTR
	NGX_CONF_UNSET_SIZE
	NGX_CONF_UNSET_MSEC

	NGX_CONF_OK NGX_CONF_ERROR

	NGX_CONF_BLOCK_START NGX_CONF_BLOCK_DONE NGX_CONF_FILE_DONE
	NGX_CORE_MODULE NGX_CONF_MODULE

	ngx_command_t
		name:ngx_str_t
		type:ngx_uint_t
		set:ngx_conf_handler_pt
		conf:ngx_uint_t
		offset:ngx_uint_t
		post:void*
	ngx_null_command
	ngx_open_file_t
		fd:ngx_fd_t
		name:ngx_str_t
		flush:
		data:void*
	NGX_MODULE_V1 NGX_MODULE_V1_PADDING
	ngx_command_t
		ctx_index:ngx_uint_t
		index:ngx_uint_t
		version:ngx_uint_t
		ctx:void*
		commands:ngx_command_t*
		type:ngx_uint_t
		init_master:
		init_module:
		init_process:
		init_thread:
		exit_thread:
		exit_process:
		exit_master:
	ngx_core_module_t
		name:ngx_str_t
		create_conf:
		init_conf:
	ngx_conf_file_t
		file:ngx_file_t
		buffer:ngx_buf_t*
		line:ngx_uint_t
	ngx_conf_t
		name:char*
		args:ngx_array_t* /ngx_str_t
		cycle:ngx_cycle_t*
		pool:ngx_pool_t*
		temp_pool:ngx_pool_t*
		conf_file:ngx_conf_file_t*
		log:ngx_log_t*
		ctx:void*
		module_type:ngx_uint_t
		cmd_type:ngx_uint_t
		handler:ngx_conf_handler_pt
		handler_conf:char*
	ngx_conf_post_t
		post_handler:ngx_conf_post_handler_pt
	ngx_conf_deprecated_t
		post_handler:ngx_conf_post_handler_pt
		old_name:char*
		new_name:char*
	ngx_conf_num_bounds_t
		post_handler:ngx_conf_post_handler_pt
		low:ngx_int_t
		high:ngx_int_t
	ngx_conf_enum_t
		name:ngx_str_t
		value:ngx_uint_t
	ngx_conf_bitmask_t
		name:ngx_str_t
		mask:ngx_uint_t
	ngx_conf_deprecated()
	ngx_conf_check_num_bounds()
	ngx_get_conf()
	ngx_conf_init_value()
	ngx_conf_init_ptr_value()
	ngx_conf_init_uint_value()
	ngx_conf_init_size_value()
	ngx_conf_init_msec_value()
	ngx_conf_merge_value()
	ngx_conf_merge_ptr_value()
	ngx_conf_merge_uint_value()
	ngx_conf_merge_msec_value()
	ngx_conf_merge_sec_value()
	ngx_conf_merge_size_value()
	ngx_conf_merge_off_value()
	ngx_conf_merge_str_value()
	ngx_conf_merge_bufs_value()
	ngx_conf_merge_bitmask_value()

	ngx_conf_param() ngx_conf_parse() ngx_conf_include()
	ngx_conf_full_name()
	ngx_conf_open_file()
	ngx_conf_log_error()

	ngx_conf_set_flag_slot()
	ngx_conf_set_str_slot()
	ngx_conf_set_str_array_slot()
	ngx_conf_set_keyval_slot()
	ngx_conf_set_num_slot()
	ngx_conf_set_size_slot()
	ngx_conf_set_off_slot()
	ngx_conf_set_msec_slot()
	ngx_conf_set_sec_slot()
	ngx_conf_set_bufs_slot()
	ngx_conf_set_enum_slot()
	ngx_conf_set_bitmask_slot()

	ngx_max_module:ngx_uint_t
	ngx_module:ngx_module_t[]
/*}}}*/
ngx_conf_file.c /*{{{*/
	ngx_conf_module:ngx_module_t
		ngx_conf_commands:ngx_command_t[]
			ngx_string("include") ngx_conf_include()
				ngx_conf_full_name()
				ngx_open_glob()
				ngx_read_glob()
				ngx_conf_parse()
				ngx_close_glob()
	argument_number:ngx_uint_t[]
		NGX_CONF_NOARGS
		NGX_CONF_TAKE1
		NGX_CONF_TAKE2
		NGX_CONF_TAKE3
		NGX_CONF_TAKE4
		NGX_CONF_TAKE5
		NGX_CONF_TAKE6
		NGX_CONF_TAKE7
	ngx_conf_param()
		conf_file:ngx_conf_file_t
		conf_file->b:ngx_buf_t
		ngx_conf_parse()
	ngx_conf_parse()
		conf_file:ngx_conf_file_t
		ngx_open_file()
		ngx_fd_info()
		ngx_conf_read_token()
			ngx_memmove()
			ngx_read_file()
			ngx_array_push()
			ngx_pnalloc()
		ngx_conf_handler()
			ngx_module[i]->commands[j]
			?cf->module_type
			?cf->cmd_type
			ngx_module[i]->commands[j]->set()
		ngx_free()
		ngx_close_file()
	ngx_conf_full_name()
		ngx_conf_test_full_name()
		ngx_cpymem()
	ngx_conf_open_file()
		ngx_conf_full_name()
		ngx_list_push(cycle->open_files)
		file:ngx_open_file_t*
	ngx_conf_flush_files()
		cycle->open_files[i].flush()
	ngx_conf_log_error()
		ngx_vslprintf()
		ngx_log_errno()
		ngx_log_error()
	ngx_conf_set_flag_slot()
		NGX_CONF_UNSET
		ngx_strcasecmp()
		post->post_handler()
	ngx_conf_set_str_slot()
		str->data
		post->post_handler()
	ngx_conf_set_str_array_slot()
		NGX_CONF_UNSET_PTR
		ngx_array_create()
		ngx_array_push()
		post->post_handler()
	ngx_conf_set_keyval_slot()
		ngx_array_create()
		ngx_array_push()
		post->post_handler()
	ngx_conf_set_num_slot()
		NGX_CONF_UNSET
		ngx_atoi()
		post->post_handler()
	ngx_conf_set_size_slot()
		NGX_CONF_UNSET_SIZE
		ngx_parse_size()
		post->post_handler()
	ngx_conf_set_off_slot()
		NGX_CONF_UNSET
		ngx_parse_offset()
		post->post_handler()
	ngx_conf_set_off_slot()
		NGX_CONF_UNSET_MSEC
		ngx_parse_time()
		post->post_handler()
	ngx_conf_set_off_slot()
		NGX_CONF_UNSET
		ngx_parse_time()
		post->post_handler()
	ngx_conf_set_off_slot()
		bufs->num
		ngx_atoi()
		ngx_parse_size()
	ngx_conf_set_enum_slot()
		NGX_CONF_UNSET_UINT
		ngx_strcasecmp()
		ngx_conf_enum_t[]
	ngx_conf_set_enum_slot()
		ngx_strcasecmp()
		ngx_conf_bitmask_t[]
	ngx_conf_deprecated()
	ngx_conf_check_num_bounds()
		
/*}}}*/
ngx_open_file_cache.h ngx_open_file_cache.c/*{{{*/
	ngx_open_file_info_t
		fd:ngx_fd_t
		uniq:ngx_file_uniq_t
		mtime:time_t
		size:off_t
		fs_size:off_t
		directio:off_t
		read_ahead:size_t
		err:ngx_err_t
		failed:char*
		valid:time_t
		min_uses:ngx_uint_t
	ngx_open_file_cache_t
		rbtree:ngx_rbtree_t
		sentinel:ngx_rbtree_node_t
		expire_queue:ngx_queue_t
		current:ngx_uint_t
		max:ngx_uint_t
		inactive:time_t
	ngx_open_file_cache_init()
	ngx_open_cached_file()
/*}}}*/

ngx_inet.h ngx_inet.c/*{{{*/
	ngx_cidr_t
		family:ngx_uint_t
		u:union
			in:ngx_in_cidr_t
				addr:in_addr_t
				mask:in_addr_t
	ngx_addr_t
		sockaddr:struct sockaddr*
		socklen:socklen_t
		name:ngx_str_t
	ngx_url_t
		url:ngx_str_t
		host:ngx_str_t
		port_text:ngx_str_t
		uri:ngx_str_t

		port:in_port_t
		default_port:in_port_t
		family:int

		listen:unsigned
		uri_part:unsigned
		no_resolve:unsigned
		one_addr:unsigned
		no_port:unsigned
		wildcard:unsigned

		socklen:socklen_t
		sockaddr:u_char
		addrs:ngx_addr_t*
		naddrs:ngx_uint_t
		err:char*
	ngx_inet_addr()
	ngx_sock_ntop()
	ngx_inet_ntop()
	ngx_ptocidr()
	ngx_parse_addr()
	ngx_parse_url()
	ngx_inet_resolve_host()
/*}}}*/
ngx_resolver.h ngx_resolver.c/*{{{*/
	ngx_resolver_t
		event:ngx_event_t*
		dummy:void
		log:ngx_log_t*
		indent:ngx_int_t
		udp_connections:ngx_array_t
		last_connection:ngx_uint_t
		name_rbtree:ngx_rbtree_t
		name_sentinel:ngx_rbtree_node_t
		addr_rbtree:ngx_rbtree_t
		addr_sentinel:ngx_rbtree_node_t
		name_resend_queue:ngx_queue_t
		addr_resend_queue:ngx_queue_t
		name_expire_queue:ngx_queue_t
		addr_expire_queue:ngx_queue_t
		resend_timeout:time_t
		expire:time_t
		valid:time_t
		log_level:ngx_uint_t

	ngx_resolver_ctx_t
		next:ngx_resolver_t*
		resolver:ngx_resolver_t*
		udp_connection:ngx_udp_connection_t*

		indent:ngx_int_t
		state:ngx_int_t
		type:ngx_int_t
		name:ngx_str_t
		naddrs:ngx_uint_t
		addrs:in_addr_t*
		add:in_addr_t
		
		handler:ngx_resolver_handler_pt
		data:void*
		time:ngx_msec_t
		
		quick:ngx_uint_t
		recursion:ngx_uint_t
		event:ngx_event_t*

	ngx_resolver_create() ngx_resolve_start()
	ngx_resolve_name() ngx_resolve_name_done()
	ngx_resolve_addr() ngx_resolve_addr_done()
	ngx_resolver_strerror()
/*}}}*/
ngx_connection.h/*{{{*/
	ngx_listening_t
		fd:ngx_socket_t

		sockaddr:struct sockaddr*
		socklen:socklen_t
		addr_text_max_len:size_t
		addr_text:ngx_str_t

		type:int
		backlog:int
		rcvbuf:int
		sndbuf:int

		handler:ngx_connection_handler_pt
		servers:void* /ngx_http_in_addr_t
		log:ngx_log_t
		logp:ngx_log_t*

		pool_size:size_t
		post_accept_buffer_size:size_t
		post_accept_timeout:ngx_msec_t
		previous:ngx_listening_t*
		connection:ngx_connection_t*
		open:unsigned
		remain:unsigned
		ignore:unsigned
		bound:unsigned
		inherited:unsigned
		nonblocking_accept:unsigned
		listen:unsigned
		nonblocking:unsigned
		shared:unsigned
		addr_ntop:unsigned
		
		keepalive:unsigned
		deferred_accept:unsigned
		delete_deferred:unsigned
		add_deferred:unsigned
		accept_filter:char*
		setfib:int

	ngx_connection_t
		data:void*
		read:ngx_event_t*
		write:ngx_event_t*

		fd:ngx_socket_t
		recv:ngx_recv_pt
		send:ngx_recv_pt
		recv_chain:ngx_recv_chain_pt
		send_chain:ngx_recv_chain_pt

		listening:ngx_listening_t*
		sent:off_t
		log:ngx_log_t*
		pool:ngx_pool_t*
		sockaddr:struct sockaddr
		socklen:socklen_t
		addr_text:ngx_str_t
		ssl:ngx_ssl_connection_t*
		local_sockaddr:struct sockaddr

		buffer:ngx_buf_t*
		queue:ngx_queue_t
		number:ngx_atomic_uint_t
		requests:ngx_uint_t

		buffered:unsigned
		log_error:unsigned
		unexpected_eof:unsigned
		timeout:unsigned
		error:unsigned
		destroyed:unsigned
		idle:unsigned
		reusable:unsigned
		close:unsigned
		sendfile:unsigned
		sndlowat:unsigned
		tcp_nodelay:unsigned
		tcp_nopush:unsigned

	ngx_create_listening()
	ngx_set_inherited_sockets()
	ngx_open_listening_sockets()
	ngx_configure_listening_sockets()
	ngx_close_listening_sockets()
	ngx_close_connection()
	ngx_connection_local_sockaddr()
	ngx_connection_error()
	ngx_get_connection()
	ngx_free_connection()
	ngx_reusable_connection()
/*}}}*/
ngx_connection.c/*{{{*/
	ngx_create_listening()
		ls:ngx_listening_t*
		ls->sockaddr=struct sockaddr
		ls->socklen=socklen_t
		ls->add_text=ngx_str_t
		ls->add_text_max_len=size_t
		ls->type=SOCK_STREAM
		ls->backlog=NGX_LISTEN_BACKLOG
	ngx_set_inherited_sockets()
	ngx_open_listening_sockets()
		ngx_socket() bind() listen()
		ls[i].listen=1;
		ls[i].fd=ngx_fd_t
	ngx_configure_listening_sockets()
		ls[i].log=ngx_log_t
		setsockopt()
	ngx_close_listening_sockets()
		ngx_del_event()
		ngx_free_connection()
		ngx_close_socket()
	ngx_get_connection()
		ngx_drain_connections()
		ngx_cycle->files[s]=c;
		c:ngx_connection_t*
		rev:ngx_event_t*
		wev:ngx_event_t*
		c->fd=s
		c->log=log
		c->read=rev
		c->write=wev
		rev->data=c
		wev->data=c
		wev->write=1
	ngx_free_connection()
		ngx_cycle->free_connection=c
		ngx_cycle->free_connection_n++
		ngx_cycle->files[c->fd]=NULL
	ngx_close_connection()
		ngx_del_timer(c->read)
		ngx_del_timer(c->write)
		ngx_del_conn(c)
		ngx_delete_posted_event(c->read)
		ngx_delete_posted_event(c->write)
		ngx_reusable_connection(c,0)
		ngx_free_connection(c)
		ngx_close_socket(c->fd)
	ngx_reusable_connection()
		ngx_cycle->reusable_connections_queue=
	ngx_connection_local_sockaddr()
		c->local_sockaddr
		ngx_sock_ntop()
	ngx_connection_error()
		ngx_log_error()
/*}}}*/

ngx_cpuinfo.c/*{{{*/
	ngx_cpuid()
	ngx_cpuinfo()
/*}}}*/
ngx_times.h /*{{{*/
	ngx_time_t
		sec:time_t
		msec:ngx_uint_t
		gmtoff:ngx_int_t
	ngx_time_init()
	ngx_time_update()
	ngx_time_sigsafe_update()
	ngx_http_time()
	ngx_http_cookie_time()
	ngx_gmtime()
	ngx_next_time()
	ngx_time()
	ngx_timeofday()
	ngx_current_msec:ngx_msec_t
	ngx_cached_time:ngx_time_t*
	ngx_cached_err_log_time:ngx_str_t
	ngx_cached_http_time:ngx_str_t
	ngx_cached_http_log_time:ngx_str_t
	ngx_cached_http_log_iso8601:ngx_str_t
/*}}}*/
ngx_times.c/*{{{*/
	slot:ngx_uint_t
	ngx_time_lock:ngx_atomic_t

	ngx_current_msec:ngx_msec_t
	ngx_cached_time:ngx_time_t*
	ngx_cached_err_log_time:ngx_str_t
	ngx_cached_http_time:ngx_str_t
	ngx_cached_http_log_time:ngx_str_t
	ngx_cached_http_log_iso8601:ngx_str_t

	cached_gmtoff:ngx_int_t
	cached_time:ngx_time_t[]
	cached_err_log_time:u_char[][]
	cached_http_time:u_char[][]
	cached_http_log_time:u_char[][]
	cached_http_log_iso8601:u_char[][]

	week:char*[]
	months:char*[]

	ngx_time_init()
	ngx_time_update()
		ngx_gettimeofday()
		ngx_current_msec=ngx_msec_t
		cached_gmtoff=ngx_int_t
		ngx_cached_time = cached_time[slot]=ngx_time_t
		ngx_cached_http_time = cached_http_time[slot]=ngx_str_t
		ngx_cached_err_log_time = cached_err_log_time[slot]=ngx_str_t
		ngx_cached_http_log_time = cached_http_log_time[slot]=ngx_str_t
		ngx_cached_http_log_iso8061 = cached_http_log_iso8601[slot]=ngx_str_t
	ngx_time_sigsafe_update()
		ngx_gettimeofday()
		ngx_cached_time = cached_time[slot]=ngx_time_t
		ngx_cached_err_log_time = cached_err_log_time[slot]=ngx_str_t
	ngx_http_time()
	ngx_http_cookie_time()
	ngx_gmtime()
	ngx_next_time()
/*}}}*/
ngx_cycle.h/*{{{*/
	ngx_cycle_t
		conf_ctx:void****
		pool:ngx_pool_t*
		log:ngx_log_t*
		new_log:ngx_log_t

		free_connections:ngx_connection_t*
		free_connection_n:ngx_uint_t
		reusable_connections_queue:ngx_queue_t

		files_n:ngx_uint_t
		files:ngx_connection_t**
		open_files:ngx_list_t/ngx_open_file_t
		paths:ngx_array_t/ngx_path_t*
		shared_memory:ngx_list_t/ngx_shm_zone_t
		listening:ngx_array_t/ngx_listening_t

		connection_n:ngx_uint_t
		connections:ngx_connection_t*
		read_events:ngx_event_t*
		write_events:ngx_event_t*

		old_cycle:ngx_cycle_t*
		conf_file:ngx_str_t
		conf_param:ngx_str_t
		conf_prefix:ngx_str_t
		prefix:ngx_str_t
		lock_file:ngx_str_t
		hostname:ngx_str_t
	ngx_core_conf_t
		daemon:ngx_flag_t
		master:ngx_flag_t
		timer_resolution:ngx_msec_t
		worker_processes:ngx_int_t
		debug_points:ngx_int_t
		rlimit_nofile:ngx_int_t
		rlimit_sigpending:ngx_int_t
		rlimit_core:off_t
		priority:int
		cup_affinity_n:ngx_uint_t
		cpu_affinity:uint64_t
		username:char*
		user:ngx_uid_t
		group:ngx_gid_t
		working_directory:ngx_str_t
		lock_file:ngx_str_t
		pid:ngx_str_t
		oldpid:ngx_str_t
		env:ngx_array_t/ngx_str_t
		environment:char**
	ngx_init_cycle()
	ngx_create_pidfile()
	ngx_delete_pidfile()
	ngx_signal_process()
	ngx_reopen_files()
	ngx_set_environment()
	ngx_exec_new_binary()
	ngx_get_cpu_affinity()
	ngx_shared_memory_add()
	ngx_cycle:ngx_cycle_t
	ngx_old_cycle:ngx_array_t
	ngx_core_module:ngx_module_t
	ngx_test_config:ngx_uint_t
	ngx_quiet_mode:ngx_uint_t
/*}}}*/
ngx_cycle.c/*{{{*/
	ngx_cycle:ngx_cycle_t*
	ngx_old_cycles:ngx_array_t
	ngx_temp_pool:ngx_pool_t*
	ngx_cleaner_event:ngx_event_t
	ngx_test_config:ngx_uint_t
	ngx_quiet_mode:ngx_uint_t
	ngx_core_tls_key:ngx_tls_key_t
	dumb:ngx_connection_t
	error_log:ngx_str_t

	ngx_init_cycle(old_cycle)
		ngx_timezone_update()
		ngx_timeofday()
		ngx_time_update()

		cycle->pool=ngx_pool_t*
		cycle->log=old_cycle->log
		cycle->old_cycle=old_cycle
		cycle->conf_prefix=old_cycle->conf_prefix
		cycle->prefix=old_cycle->prefix
		cycle->conf_param=old_cycle->conf_param
		cycle->paths=ngx_array_t/ngx_path_t*
		cycle->open_files=ngx_list_t/ngx_open_file_t
		cycle->shared_memory=ngx_list_t/ngx_shm_zone_t
		cycle->listening=ngx_array_t/ngx_listening_t
		cycle->reusable_connections_queue=ngx_queue_t
		cycle->conf_ctx=void*[]
		cycle->hostname=gethostname()

		ngx_modules[i]->ctx->create_conf()
		conf:ngx_conf_t
		conf.args=ngx_array_t/ngx_str_t
		conf.temp_pool=ngx_pool_t
		conf.ctx=cycle->conf_ctx
		conf.cycle=cycle
		conf.pool=ngx_pool_t
		conf.log=old_cycle->log
		conf.module_type=NGX_CORE_MODULE
		conf.cmd_type=NGX_MAIN_CONF
		ngx_conf_param()
		ngx_conf_parse()
		ngx_modules[i]->ctx->init_conf()
		
		ngx_delete_pidfile()
		ngx_create_pidfile()
		ngx_test_lockfile()
		ngx_create_paths()
		cycle->new.log.file=ngx_conf_open_file()
		ngx_open_file(cycle->open_files)
		cycle->log=cycle->new_log
		ngx_shm_alloc()
		ngx_init_zone_pool()
			sp:ngx_slab_pool_t*
			ngx_shmtx_create()
			ngx_slab_init()
		ngx_cmp_sockaddr()
		ngx_open_listening_sockets()
		ngx_configure_listening_sockets()
		ngx_module[i]->init_module()
		ngx_temp_pool=ngx_pool_t*
		ngx_old_cycles=ngx_array_t/ngx_cycle_t*
		ngx_cleaner_event.handler=ngx_clean_old_cycles
		ngx_add_timer(ngx_cleaner_event_handler)
		ngx_destroy_cycle_pools()
		
	ngx_delete_pidfile()
	ngx_create_pidfile()
	ngx_signal_process()
	ngx_reopen_files()
	ngx_shared_memory_add()
	ngx_clean_old_cycles()

/*}}}*/
nginx.h/*{{{*/
/*}}}*/
nginx.c/*{{{*/
	ngx_debug_points:ngx_conf_enum_t[]
	ngx_core_module:ngx_module_t
		ngx_core_module_ctx:ngx_core_module_t
			ngx_string("core")
			ngx_core_module_create_conf()
				ccf:ngx_core_conf_t
			ngx_core_module_init_conf()
		ngx_core_commands:ngx_command_t[]
			ngx_string("daemon")
				ccf->daemon=ngx_flag_t
			ngx_string("master_process")
				ccf->master=ngx_flag_t
			ngx_string("timer_resolution")
				ccf->timer_resolution=ngx_msec_t
			ngx_string("pid")
				ccf->pid=ngx_str_t
			ngx_string("lock_file")
				ccf->lock_file=ngx_str_t
			ngx_string("worker_processes") ngx_set_worker_processes()
				ccf->worker_processes=ngx_int_t
			ngx_string("debug_points")
				ccf->debug_points=ngx_int_t
			ngx_string("user") ngx_set_user()
				ccf->user=ngx_uid_t
				ccf->group=ngx_gid_t
			ngx_string("worker_priority") ngx_set_priority()
				ccf->priority=int
			ngx_string("worker_cpu_affinity") ngx_set_cpu_affinity()
				ccf->cpu_affinity=uint64_t*
				ccf->cpu_affinity_n=ngx_uint_t
			ngx_string("worker_rlimit_nofile")
				ccf->rlimit_nofile=ngx_int_t
			ngx_string("worker_rlimit_core")
				ccf->rlimit_core=off_t
			ngx_string("worker_rlimit_sigpending")
				ccf->rlimit_sigpending=ngx_int_t
			ngx_string("working_directory")
				ccf->working_dirctory=ngx_str_t
			ngx_string("env") ngx_set_env()
				ccf->env=ngx_array_t/ngx_str_t
	ngx_max_module:ngx_uint_t
	ngx_show_help:ngx_uint_t
	ngx_show_version:ngx_uint_t
	ngx_show_configure:ngx_uint_t
	ngx_prefix:u_char*
	ngx_conf_file:u_char*
	ngx_conf_param:u_char*
	ngx_signal:char*
	ngx_os_environ:char**

	ngx_set_environment()
		ccf->environment=ccf->env
		environ=ccf->env
	ngx_exec_new_binary()
		ctx:ngx_exec_ctx_t
		ngx_execute()
	ngx_get_cpu_affinity()
		=ccf->affinity
	main()
		ngx_debug_init()
		ngx_strerror_init()
		ngx_get_options()
			-h ngx_show_help
			-v ngx_show_version
			-V ngx_show_configure
			-t ngx_test_config
			-q ngx_quiet_mode
			-p ngx_prefix
			-c ngx_conf_file
			-g ngx_conf_params
			-s ngx_signal
				reload reopen stop quit
		ngx_write_stderr()
		ngx_time_init()
		ngx_regex_init()
		ngx_pid = ngx_getpid()
		ngx_log_init()
		ngx_ssl_init()
		ngx_create_pool()
		ngx_save_argv()
			ngx_argc=argc
			ngx_argv=argv
			ngx_os_argv=argv
			ngx_os_environ=environ
		ngx_process_options(cycle)
			cycle->prefix=ngx_prefix
			cycle->config_prefix=ngx_prefix
			cycle->conf_file=ngx_conf_file
			cycle->conf_param=ngx_conf_params
		ngx_os_init()
		ngx_crc32_table_init()
		ngx_add_inherited_sockets()
			cycle->listening
		ngx_max_module=
		ngx_init_cycle()
		ngx_signal_process()
		ngx_os_status()
		ngx_init_signals()
		ngx_daemon()
		ngx_create_pidfile()
		ngx_single_process_cycle()
		ngx_master_process_cycle()
/*}}}*/

ngx_config.h/*{{{*/
	ngx_int_t
	ngx_uint_t
	ngx_flag_t
/*}}}*/
ngx_core.h/*{{{*/
	ngx_module_t
	ngx_conf_t
	ngx_cycle_t
	ngx_pool_t
	ngx_chain_t
	ngx_log_t
	ngx_open_file_t
	ngx_command_t
	ngx_file_t
	ngx_event_t
	ngx_event_aio_t
	ngx_connection_t
	ngx_event_handler_pt
	ngx_connection_handler_pt

	NGX_OK
	NGX_ERROR
	NGX_AGAIN
	NGX_BUSY
	NGX_DONE
	NGX_DECLINED
	NGX_ABORT
/*}}}*/
/*}}}*/
src/event/*{{{*/
ngx_event.h ngx_event.c
ngx_event_mutex.c
ngx_event_accept.c
ngx_event_busy_lock.h ngx_event_busy_lock.c
ngx_event_connect.h ngx_event_connect.c
ngx_event_openssl.h ngx_event_openssl.c
ngx_event_openssl_stapling.c
ngx_event_pipe.h ngx_event_pipe.c
ngx_event_posted.h ngx_event_posted.c
ngx_event_timer.h ngx_event_timer.c
src/event/modules/*{{{*/
ngx_aio_module.c
ngx_devpoll_module.c
ngx_epoll_module.c
ngx_eventport_module.c
ngx_kqueue_module.c
ngx_poll_module.c
ngx_rtsig_module.c
ngx_select_module.c
ngx_win32_select_module.c
/*}}}*/
/*}}}*/
src/http/*{{{*/
ngx_http.h ngx_http.c
ngx_http_busy_lock.h ngx_http_busy_lock.c
ngx_http_config.h
ngx_http_cache.h
ngx_http_copy_filter_module.c
ngx_http_core_module.h ngx_http_core_module.c
ngx_http_file_cache.c
ngx_http_header_filter_module.c
ngx_http_parse.c
ngx_http_parse_time.c
ngx_http_postpone_filter_module.c
ngx_http_request.h ngx_http_request.c
ngx_http_request_body.c
ngx_http_script.h ngx_http_script.c
ngx_http_spdy.h ngx_http_spdy.c
ngx_http_spdy_filter_module.c
ngx_http_spdy_module.h ngx_http_spdy_module.c
ngx_http_special_response.c
ngx_http_upstream.h ngx_http_upstream.c
ngx_http_upstream_round_robin.h ngx_http_upstream_round_robin.c
ngx_http_variables.h ngx_http_variables.c
ngx_http_write_filter_module.c
src/http/modules
ngx_http_access_module.c
ngx_http_addition_filter_module.c
ngx_http_auth_basic_module.c
ngx_http_autoindex_module.c
ngx_http_browser_module.c
ngx_http_charset_filter_module.c
ngx_http_chunked_filter_module.c
ngx_http_dav_module.c
ngx_http_degradation_module.c
ngx_http_empty_gif_module.c
ngx_http_fastcgi_module.c
ngx_http_flv_module.c
ngx_http_geo_module.c
ngx_http_geoip_module.c
ngx_http_gunzip_filter_module.c
ngx_http_gzip_filter_module.c
ngx_http_gzip_static_module.c
ngx_http_headers_filter_module.c
ngx_http_image_filter_module.c
ngx_http_index_module.c
ngx_http_limit_conn_module.c
ngx_http_limit_req_module.c
ngx_http_log_module.c
ngx_http_map_module.c
ngx_http_memcached_module.c
ngx_http_mp4_module.c
ngx_http_not_modified_filter_module.c
ngx_http_proxy_module.c
ngx_http_random_index_module.c
ngx_http_range_filter_module.c
ngx_http_realip_module.c
ngx_http_referer_module.c
ngx_http_rewrite_module.c
ngx_http_scgi_module.c
ngx_http_secure_link_module.c
ngx_http_split_clients_module.c
ngx_http_ssi_filter_module.c
ngx_http_ssi_filter_module.h
ngx_http_ssl_module.c
ngx_http_ssl_module.h
ngx_http_static_module.c
ngx_http_stub_status_module.c
ngx_http_sub_filter_module.c
ngx_http_upstream_ip_hash_module.c
ngx_http_upstream_keepalive_module.c
ngx_http_upstream_least_conn_module.c
ngx_http_userid_filter_module.c
ngx_http_uwsgi_module.c
ngx_http_xslt_filter_module.c
perl
/*}}}*/
src/mail
src/misc
src/os

