ARM UNIX HTTP
    c
  sh  go
vi  py  js

make gcc gdb
库文件 头文件 源文件
类型 变量 函数
语句 表达式
常量 变量 运算符 函数



标识符 常量 变量
分隔符 空白 注释
运算符



char int float double void
signed unsigned short long
auto register volatile const

typedef
struct union enum
static extern
[] * & {.=,}

sizeof

if else
for do while
switch case default
break continue
goto return

//
/**/

'a' "a"
#include<>
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

C89 15/*{{{*/
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
#include <errno.h>/*{{{*/
	errno
/*}}}*/
#include <assert.h>/*{{{*/
	assert()
/*}}}*/
#include <setjmp.h>/*{{{*/
	jmp_buf setjmp() longjmp()
/*}}}*/
#include <limits.h>/*{{{*/
/*}}}*/
#include <locale.h>/*{{{*/
	struct lconv
	localeconv()
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
 #include <stdarg.h>/*{{{*/
	va_list
	va_start()
	va_arg()
	va_end()
/*}}}*/
/*}}}*/
C99 24/*{{{*/
#include <complex.h>
#include <fenv.h>
#include <inttypes.h>
#include <stdint.h>
#include <wchar.h>
#include <wctype.h>
#include <tgmath.h>
 #include <iso646.h>
 #include <stdbool.h>
/*}}}*/
POSIX std 26/*{{{*/
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

#include <unistd.h>/*{{{*/
	STDIN_FILENO
	STDOUT_FILENO
	STDERR_FILENO

	_exit()
	access()
	alarm()
	chdir()
	chown()
	chdir()
	close()
	dup()
	dup2()
	execl() execle() execlp()
	execv() execve() execvp()
	fork()
	fpathconf()
	getcwd()
	getegid()
	geteuid()
	getgid()
	getgroups()
	getlogin()
	getgprp()
	getpid()
	getppid()
	getuid()
	isatty()
	link()
	lseek()
	pathconf()
	pause()
	pipe()
	read()
	rmdir()
	setgid()
	setpgid()
	setsid()
	setuid()
	sleep()
	sysconf()
	tcgetpgrp()
	tcsetgrp()
	ttyname()
	unlink()
	write()
	confstr()
	getopt()



	getcwd()
	chdir()

	rmdir()
	unlink()

	lseek()
	read()
	write()
	close()

	fork()
	exec()
	exit()
	wait()
	sleep()
/*}}}*/

#include <fnmatch.h>
#include <glob.h>
#include <grp.h>
#include <netdb.h>
#include <pwd.h>
#include <regex.h>
#include <tar.h>
#include <termios.h>
#include <utime.h>
#include <wordexp.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/times.h>
#include <sys/types.h>
#include <sys/un.h>
#include <sys/utsname.h>
#include <sys/wait.h>
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
#include <aio.h>
#include <mqueue.h>
#include <pthread.h>
#include <sched.h>
#include <semaphore.h>
#include <spawn.h>
#include <stropts.h>
 #include <trace.h>
/*}}}*/


gcc -c -o

/etc/ld.so.conf
ldconfig


