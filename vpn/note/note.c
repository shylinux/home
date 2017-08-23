      c
    sh go
  vi php js
ARM Linux HTTP
   mac hub
   vpn vps
   win usb
git share back
   add del
   mod fix
   pro opt

库文件 头文件 源文件 /*{{{*/
类型 变量 函数
语句 表达式
常量 变量 运算符 函数

标识符 常量 变量
分隔符 空白 注释
运算符

code
data
head
stack
/*}}}*/
make gcc gdb /*{{{*/
gcc -c -o
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
C99 9/*{{{*/
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

sudo apt-get install libssl-dev/*{{{*/
#include <openssl/evp.h>
	EVP_MAX_MD_SIZE
	EVP_MAX_KEY_LENGTH
	EVP_MAX_IV_LENGTH
	EVP_MAX_BLOCK_LENGTH

	PKCS5_SALT_LEN
	PKCS5_DEFAULT_ITER

	EVP_MD_CTX EVP_Digest()
	EVP_MD_CTX_init() EVP_MD_CTX_cleanup()
	EVP_MD_CTX_create() EVP_MD_CTX_destroy()
	EVP_DigestInit()
	EVP_DigestInit_ex()
	EVP_DigestUpdate()
	EVP_DigestFinal_ex()
	EVP_DigestFinal()

	EVP_BytesToKey()

	EVP_EncryptInit()
	EVP_EncryptInit_ex()
	EVP_EncryptUpdate()
	EVP_EncryptFinal_ex()
	EVP_EncryptFinal()

	EVP_DecryptInit()
	EVP_DecryptInit_ex()
	EVP_DecryptUpdate()
	EVP_DecryptFinal_ex()
	EVP_DecryptFinal()

	EVP_CipherInit()
	EVP_CipherInit_ex()
	EVP_CipherUpdate()
	EVP_CipherFinal_ex()
	EVP_CipherFinal()

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
wget http://nginx.org/download/nginx-1.4.1.tar.gz /*{{{*/
sudo apt-get install libpcre3-dev zlib1g-dev
./configure && make && sudo make install && sudo nginx

src/os/unix/*{{{*/
ngx_errno.c
ngx_errno.h
ngx_alloc.c
ngx_alloc.h
ngx_files.c
ngx_files.h
ngx_readv_chain.c
ngx_recv.c
ngx_send.c
ngx_writev_chain.c
ngx_file_aio_read.c
ngx_aio_read.c
ngx_aio_write.c
ngx_aio_read_chain.c
ngx_aio_write_chain.c
ngx_process.c
ngx_process.h
ngx_process_cycle.c
ngx_process_cycle.h
ngx_shmem.c
ngx_shmem.h
ngx_socket.c
ngx_socket.h
ngx_time.c
ngx_time.h
ngx_setaffinity.c
ngx_setaffinity.h
ngx_setproctitle.c
ngx_setproctitle.h
ngx_daemon.c
ngx_user.c
ngx_user.h
ngx_os.h
ngx_atomic.h
ngx_channel.c
ngx_channel.h
ngx_thread.h
ngx_udp_recv.c
rfork_thread.S
ngx_pthread_thread.c

ngx_darwin.h
ngx_darwin_config.h
ngx_darwin_init.c
ngx_darwin_sendfile_chain.c
ngx_freebsd.h
ngx_freebsd_config.h
ngx_freebsd_init.c
ngx_freebsd_rfork_thread.c
ngx_freebsd_rfork_thread.h
ngx_freebsd_sendfile_chain.c
ngx_gcc_atomic_amd64.h
ngx_gcc_atomic_ppc.h
ngx_gcc_atomic_sparc64.h
ngx_gcc_atomic_x86.h
ngx_linux.h
ngx_linux_aio_read.c
ngx_linux_config.h
ngx_linux_init.c
ngx_linux_sendfile_chain.c
ngx_posix_config.h
ngx_posix_init.c
ngx_solaris.h
ngx_solaris_config.h
ngx_solaris_init.c
ngx_solaris_sendfilev_chain.c
ngx_sunpro_amd64.il
ngx_sunpro_atomic_sparc64.h
ngx_sunpro_sparc64.il
ngx_sunpro_x86.il
/*}}}*/
src/core/*{{{*/
ngx_config.h/*{{{*/
	#include<ngx_linux_config.h>/*{{{*/
		#include<sys/types.h>
		#include<sys/time.h>
		#include<unistd.h>
		#include<stdarg.h>
		#include<stddef.h>
		#include<stdio.h>
		#include<stdlib.h>
		#include<errno.h>
		#include<string.h>
		#include<signal.h>
		#include<pwd.h>
		#include<grp.h>
		#include<dirent.h>
		#include<glob.h>
		#include<sys/vfs.h>
		#include<sys/uio.h>
		#include<sys/stat.h>
		#include<fcntl.h>
		#include<sys/wait.h>
		#include<sys/mman.h>
		#include<sys/resource.h>
		#include<sched.h>
		#include<sys/socket.h>
		#include<netinet/in.h>
		#include<netinet/tcp.h>
		#include<arpa/inet.h>
		#include<netdb.h>
		#include<sys/un.h>
		#include<time.h>
		#include<malloc.h>
		#include<limits.h>
		#include<sys/ioctl.h>
		#include<sys/sysctl.h>
		#include<crypt.h>
		#include<sys/utsname.h>
		#include<ngx_auto_config.h>
		#include<semaphore.h>
		#include<sys/prctl.h>
		#include<sys/sendfile.h>
		#include<poll.h>
		#include<sys/epoll.h>
		#include<sys/syscall.h>
		#include<linux/aio_abi.h>
	/*}}}*/
	intptr_t
	uintptr_t
	intptr_t
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

	LF
	CR
	CRLF
	ngx_abs
	ngx_max
	ngx_min

	#include <ngx_errno.h>
	#include <ngx_atomic.h>
	#include <ngx_thread.h>
	#include <ngx_rbtree.h>
	#include <ngx_time.h>
	#include <ngx_socket.h>
	#include <ngx_string.h>
	#include <ngx_files.h>
	#include <ngx_shmem.h>
	#include <ngx_process.h>
	#include <ngx_user.h>
	#include <ngx_parse.h>
	#include <ngx_log.h>
	#include <ngx_alloc.h>
	#include <ngx_palloc.h>
	#include <ngx_buf.h>
	#include <ngx_queue.h>
	#include <ngx_array.h>
	#include <ngx_list.h>
	#include <ngx_hash.h>
	#include <ngx_file.h>
	#include <ngx_crc.h>
	#include <ngx_crc32.h>
	#include <ngx_murmurhash.h>
	#include <ngx_regex.h>
	#include <ngx_radix_tree.h>
	#include <ngx_times.h>
	#include <ngx_shmtx.h>
	#include <ngx_slab.h>
	#include <ngx_inet.h>
	#include <ngx_cycle.h>
	#include <ngx_resolver.h>
	#include <ngx_event_openssl.h>
	#include <ngx_process_cycle.h>
	#include <ngx_conf_file.h>
	#include <ngx_open_file_cache.h>
	#include <ngx_os.h>
	#include <ngx_connection.h>
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
	NGX_LOG_DEBUG_ALL

	ngx_log_t
		log_level:ngx_uint_t
		file:*ngx_open_file_t
		connection:ngx_atomic_uint_t
		handler:ngx_log_handler_pt
		data:*void
		action:*char

	ngx_log_error()
	ngx_log_error_core()
	ngx_log_debug()
	ngx_log_debug0()

	ngx_log_init()
	ngx_log_create()
	ngx_log_set_levels()
	ngx_log_abort()
	ngx_log_stderr()
	ngx_log_errno()
	ngx_write_stderr()
	ngx_errlog_module:ngx_module_t
/*}}}*/
ngx_log.c/*{{{*/
	ngx_errlog_module:ngx_module_t
		ngx_errlog_module_ctx:ngx_core_module_t
			ngx_string("errlog")
		ngx_errlog_commands:[]ngx_command_t
			ngx_string("error_log") ngx_error_log(cf)
				cf->cycle->new_log.file=ngx_conf_open_file()
				cf->cycle->new_log.log_level=ngx_log_set_levels()
		NGX_CORE_MODULE
	ngx_log:ngx_log_t
	ngx_log_file:ngx_open_file_t
	ngx_use_stderr:ngx_uint_t
	err_levels:[]ngx_str_t
		ngx_string("emerg")
		ngx_string("alert")
		ngx_string("crit")
		ngx_string("error")
		ngx_string("warn")
		ngx_string("notice")
		ngx_string("info")
		ngx_string("debug")
	debug_levels:[]*char
		"debug_core"
		"debug_alloc"
		"debug_mutex"
		"debug_event"
		"debug_http"
		"debug_mail"
		"debug_mysql"
	ngx_log_error_core()
	ngx_log_error()
	ngx_log_debug_core()
	ngx_log_abort()
	ngx_log_stderr()
	ngx_log_errno()
		ngx_strerror()
	ngx_log_init()
		ngx_open_file()
	ngx_log_create()
		ngx_pcalloc()
		ngx_conf_open_file()
/*}}}*/

ngx_palloc.h/*{{{*/
	ngx_pool_t
		d:ngx_pool_data_t
			last:*u_char
			end:*u_char
			next:*ngx_pool_t
			failed:ngx_uint_t
		max:size_t
		current:*ngx_pool_t
		chain:*ngx_chain_t
		large:*ngx_pool_large_t
			next:*ngx_pool_large_t
			alloc:*void
		cleanup:*ngx_pool_cleanup_t
			handler:ngx_pool_cleanup_pt
			data:*void/ngx_pool_cleanup_file_t
				fd:ngx_fd_t
				name:*u_char
				log:*ngx_log_t
			next:ngx_pool_cleanup_t
		log:*ngx_log_t
	ngx_alloc()
	ngx_calloc()
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
		p:*ngx_pool_t=ngx_memalign()
	ngx_destroy_pool()
		p->cleanup->handler()
		ngx_free(p->large->alloc)
		ngx_free(p->d.next)
	ngx_reset_pool()
		ngx_free(p->large->alloc)
		p->d.last=p+sizeof(ngx_pool_t)

	ngx_palloc()/ngx_pnalloc()/ngx_pcalloc()
		p->d.last
		ngx_palloc_block()
			p->d.next:*ngx_pool_t=ngx_memalign()
		ngx_palloc_large()
			large:*ngx_pool_large_t=ngx_palloc()
			large->alloc=ngx_alloc()
			large->next = p->large
			p->large=large
	ngx_pmemalign()
		large:*ngx_pool_large_t=ngx_palloc()
		large->alloc=ngx_memalign()
		large->next = p->large
		p->large=large
	ngx_pfree()
		ngx_free(p->large->alloc)

	ngx_pool_cleanup_add()
		c:*ngx_pool_cleanup_t=ngx_palloc()
		c->data=ngx_palloc()
		c->next = p->cleanup
		p->cleanup = c
	ngx_pool_run_cleanup_file(p:*ngx_pool_t)
		p->cleanup->handler()
	ngx_pool_cleanup_file()
		ngx_close_file()
	ngx_pool_delete_file()
		ngx_delete_file()
		ngx_close_file()
/*}}}*/

ngx_buf.h/*{{{*/
	ngx_buf_t
		pos:*u_char
		last:*u_char
		file_pos:off_t
		file_last:off_t

		start:*u_char
		end:*u_char
		tag:ngx_buf_tag_t
		file:*ngx_file_t
		shadow:*ngx_buf_t

		temporary:unsigned
		memory:unsigned
		mmap:unsigned
		recycled:unsigned
		in_file:unsigned
		flush:unsigned
		sync:unsigned
		last_buf:unsigned
		last_in_chain:unsigned
		last_shadow:unsigned
		temp_file:unsigned
		num:int
	ngx_chain_t
		buf:*ngx_buf_t
		next:*ngx_chain_t
	ngx_bufs_t
		num:ngx_int_t
		size:size_t
	ngx_output_chain_ctx_t
		buf:*ngx_buf_t
		in:*ngx_chain_t
		free:*ngx_chain_t
		busy:*ngx_chain_t

		sendfile:unsigned
		directio:unsigned
		unaligned:unsigned
		need_in_memory:unsigned
		need_in_temp:unsigned
		aio:unsigned
		aio_handler:ngx_output_chain_aio_pt
		alignment:off_t
		pool:*ngx_pool_t
		allocated:ngx_int_t
		bufs:ngx_bufs_t
		tag:ngx_buf_tag_t
		output_filter:ngx_output_chain_filter_pt
		filter_ctx:*void
	ngx_chain_writer_ctx_t
		out:*ngx_chain_t
		last:**ngx_chain_t
		connection:*ngx_connection_t
		pool:*ngx_pool_t
		limit:off_t
	ngx_buf_in_memory()
	ngx_buf_in_memory_only()
	ngx_buf_special()
	ngx_buf_sync_only()
	ngx_buf_size()

	ngx_create_temp_buf()
	ngx_create_chain_of_bufs()
	ngx_alloc_buf()
	ngx_calloc_buf()
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
		b:*ngx_buf_t=ngx_calloc_buf()
		b->start=ngx_palloc()
		b->temporary=1
	ngx_alloc_chain_link()
		c:*ngx_chain_t=ngx_palloc()
	ngx_create_chain_of_bufs()
		c:*ngx_chain_t=ngx_alloc_chain_link()
		c->buf=ngx_calloc_buf()
		c->buf->start=ngx_palloc()
	ngx_chain_add_copy()
		c:*ngx_chain_t=ngx_alloc_chain_link()
	ngx_chain_get_free_buf()
		c:*ngx_chain_t=ngx_alloc_chain_link()
		c->buf=ngx_calloc_buf()
	ngx_chain_update_chains()
		busy->next=out
		ngx_free_chain(busy)
		free->next=busy
/*}}}*/
ngx_output_chain.c/*{{{*/
	ngx_output_chain(ctx,in)
		ngx_output_chain_as_is()
		ctx->output_filter(in)

		ngx_output_chain_add_copy(ctx->in,in)
			c:*ngx_chain_t=ngx_alloc_chain_link()

		ngx_output_chain_as_is()
		ngx_output_chain_align_file_buf()
			ctx->buf=ngx_create_temp_buf()
		ngx_output_chain_get_buf()
			ctx->buf=ngx_alloc_buf()
			ctx->buf->start=ngx_palloc()
		ngx_output_chain_copy_buf()
			ngx_memcpy()
			ngx_read_file()
		ngx_alloc_chain_link()
		ctx->output_filter(out)
		ngx_chain_update_chains()
	ngx_chain_writer()
		c:*ngx_chain_t=ngx_alloc_chain_link()
		ctx->data->connection->send_chain()
/*}}}*/
ngx_slab.c
ngx_slab.h
ngx_shmtx.c
ngx_shmtx.h

ngx_array.c
ngx_array.h
ngx_list.c
ngx_list.h
ngx_queue.c
ngx_queue.h
ngx_rbtree.c
ngx_rbtree.h
ngx_radix_tree.c
ngx_radix_tree.h
ngx_string.c
ngx_string.h
ngx_parse.c
ngx_parse.h
ngx_regex.c
ngx_regex.h

ngx_crc32.c
ngx_crc32.h
ngx_crypt.c
ngx_crypt.h
ngx_md5.c
ngx_md5.h
ngx_hash.c
ngx_hash.h
ngx_crc.h
ngx_sha1.h
ngx_murmurhash.c
ngx_murmurhash.h

ngx_file.c
ngx_file.h
ngx_conf_file.c
ngx_conf_file.h
ngx_open_file_cache.c
ngx_open_file_cache.h

ngx_inet.c
ngx_inet.h
ngx_resolver.c
ngx_resolver.h
ngx_connection.c
ngx_connection.h

ngx_times.h
ngx_times.c
ngx_cpuinfo.c
ngx_spinlock.c

ngx_cycle.c
ngx_cycle.h
nginx.c
nginx.h

/*}}}*/
src/event/*{{{*/
ngx_event.c
ngx_event.h
ngx_event_timer.c
ngx_event_timer.h
ngx_event_mutex.c
ngx_event_accept.c
ngx_event_connect.c
ngx_event_connect.h
ngx_event_openssl.c
ngx_event_openssl.h
ngx_event_openssl_stapling.c
ngx_event_posted.c
ngx_event_posted.h
ngx_event_pipe.c
ngx_event_pipe.h
ngx_event_busy_lock.c
ngx_event_busy_lock.h
modules/*{{{*/
ngx_aio_module.c
ngx_poll_module.c
ngx_epoll_module.c
ngx_select_module.c
ngx_kqueue_module.c
ngx_devpoll_module.c
ngx_eventport_module.c
ngx_win32_select_module.c
ngx_rtsig_module.c
/*}}}*/
/*}}}*/
src/http/*{{{*/
ngx_http.c
ngx_http.h
ngx_http_request.c
ngx_http_request.h
ngx_http_request_body.c
ngx_http_special_response.c
ngx_http_upstream.c
ngx_http_upstream.h
ngx_http_upstream_round_robin.c
ngx_http_upstream_round_robin.h
ngx_http_script.c
ngx_http_script.h
ngx_http_variables.c
ngx_http_variables.h
ngx_http_core_module.c
ngx_http_core_module.h

ngx_http_copy_filter_module.c/*{{{*/
	ngx_http_copy_filter_conf_t
		bufs:ngx_bufs_t
	ngx_http_copy_filter_module:ngx_module_t
		ngx_http_copy_filter_module_ctx:ngx_http_module_t
			ngx_http_copy_filter_init()
				ngx_http_top_body_filter=ngx_http_copy_filter
			ngx_http_copy_filter_create_conf()
			ngx_http_copy_filter_merge_conf()
		ngx_http_copy_filter_commands:[]ngx_command_t
			ngx_string("output_buffers") ngx_conf_set_bufs_slot()
	ngx_http_copy_filter()
		ngx_output_chain()
/*}}}*/
ngx_http_header_filter_module.c
ngx_http_postpone_filter_module.c
ngx_http_write_filter_module.c/*{{{*/
	ntx_http_write_filter_module:ngx_module_t
		ngx_http_write_filter_module_ctx:ngx_http_module_t
			ngx_http_write_filter_init()
				ngx_http_top_body_filter=ngx_http_write_filter
	ngx_http_write_filter()
		c:*ngx_chain_t=ngx_alloc_chain_link()
		r->connection->send_chain()
/*}}}*/
ngx_http_busy_lock.c
ngx_http_busy_lock.h
ngx_http_cache.h
ngx_http_config.h
ngx_http_file_cache.c
ngx_http_parse.c
ngx_http_parse_time.c
ngx_http_spdy.c
ngx_http_spdy.h
ngx_http_spdy_filter_module.c
ngx_http_spdy_module.c
ngx_http_spdy_module.h

modules/*{{{*/
ngx_http_log_module.c
ngx_http_static_module.c
ngx_http_index_module.c
ngx_http_proxy_module.c
ngx_http_rewrite_module.c
ngx_http_fastcgi_module.c
ngx_http_ssl_module.c
ngx_http_ssl_module.h
ngx_http_autoindex_module.c

ngx_http_not_modified_filter_module.c
ngx_http_range_filter_module.c
ngx_http_chunked_filter_module.c
ngx_http_gunzip_filter_module.c
ngx_http_gzip_filter_module.c
ngx_http_referer_module.c
ngx_http_browser_module.c
ngx_http_auth_basic_module.c
ngx_http_charset_filter_module.c

ngx_http_access_module.c
ngx_http_addition_filter_module.c
ngx_http_dav_module.c
ngx_http_degradation_module.c
ngx_http_empty_gif_module.c
ngx_http_flv_module.c
ngx_http_geo_module.c
ngx_http_geoip_module.c
ngx_http_gzip_static_module.c
ngx_http_headers_filter_module.c
ngx_http_image_filter_module.c
ngx_http_limit_conn_module.c
ngx_http_limit_req_module.c
ngx_http_map_module.c
ngx_http_memcached_module.c
ngx_http_mp4_module.c
ngx_http_random_index_module.c
ngx_http_realip_module.c
ngx_http_scgi_module.c
ngx_http_secure_link_module.c
ngx_http_split_clients_module.c
ngx_http_ssi_filter_module.c
ngx_http_ssi_filter_module.h
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
/*}}}*/
src/mail/*{{{*/
ngx_mail.c
ngx_mail.h
ngx_mail_parse.c
ngx_mail_handler.c
ngx_mail_core_module.c
ngx_mail_ssl_module.c
ngx_mail_ssl_module.h
ngx_mail_imap_handler.c
ngx_mail_imap_module.c
ngx_mail_imap_module.h
ngx_mail_pop3_handler.c
ngx_mail_pop3_module.c
ngx_mail_pop3_module.h
ngx_mail_smtp_handler.c
ngx_mail_smtp_module.c
ngx_mail_smtp_module.h
ngx_mail_auth_http_module.c
ngx_mail_proxy_module.c
/*}}}*/
src/misc/*{{{*/
ngx_cpp_test_module.cpp
ngx_google_perftools_module.c
/*}}}*/
hello
ngx_grammar

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
ngx_regex.c/*{{{*/
	ngx_regex_module:ngx_module_t
		ngx_regex_module_ctx:ngx_core_module_t*
			ngx_regex_create_conf()
				ngx_list_create()
				ngx_pcre_studies:ngx_list_t* /ngx_regex_elt_t
			ngx_regex_init_conf()
		ngx_regex_commands:ngx_command_t[]
			ngx_string("pcre_jit") ngx_regex_pcre_jit()
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
		ngx_regex_malloc_init()
		pcre_study()
		ngx_regex_malloc_done()
/*}}}*/
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
ngx_event.h/*{{{*/
	ngx_event_mutex_t
		lock:ngx_uint_t
		events:ngx_event_t*
		last:ngx_event_t*
	ngx_event_t
		data:void*
		write:unsigned
		accept:unsigned
		instance:unsigned
		active:unsigned
		disable:unsigned
		ready:unsigned
		oneshot:unsigned
		complete:unsigned
		eof:unsigned
		error:unsigned
		timedout:unsigned
		timer_set:unsigned
		delayed:unsigned
		handler:ngx_event_handler_pt
		timer:ngx_rbtree_node_t
		next:ngx_event_t*
		prev:ngx_event_t**
	ngx_event_actions_t
		add:
		del:
		enable:
		disable:
		add_conn:
		del_conn:
		process_changes:
		process_events:
		init:
		done:
	ngx_process_changes ngx_event_actions.process_changes
	ngx_process_events ngx_event_actions.process_events
	ngx_done_events ngx_event_actions.done
	ngx_add_event ngx_event_actions.add
	ngx_del_event ngx_event_actions.del
	ngx_add_conn ngx_event_actions.add_conn
	ngx_del_conn ngx_event_actions.del_conn
	ngx_add_timer ngx_event_add_timer
	ngx_del_timer ngx_event_del_timer
	ngx_io:ngx_os_io_t
	ngx_recv ngx_io.recv
	ngx_send ngx_io.send
	ngx_udp_recv ngx_io.udp_recv
	ngx_recv_chain ngx_io.recv_chain
	ngx_send_chain ngx_io.send_chain

	NGX_EVENT_MODULE
	NGX_EVENT_CONF

	ngx_event_conf_t
		connections:ngx_uint_t
		use:ngx_uint_t
		multi_accept:ngx_flag_t
		accept_mutex:ngx_flag_t
		accept_mutex_delay:ngx_msec_t
		name:u_char*
	ngx_event_module_t
		name:ngx_str_t*
		create_conf:
		init_conf:
		actions:ngx_event_actions_t
	ngx_connection_counter:ngx_atomic_t*
	ngx_accept_mutex_ptr:ngx_atomic_t*
	ngx_accept_mutex:ngx_shmtx_t
	ngx_use_accept_mutex:ngx_uint_t
	ngx_accept_events:ngx_uint_t
	ngx_accept_mutex_delay:ngx_msec_t
	ngx_accept_disabled:ngx_int_t

	ngx_event_timer_alarm:sig_atomic_t
	ngx_event_flags:ngx_uint_t
	ngx_events_module:ngx_module_t
	ngx_event_core_module:ngx_module_t
	ngx_event_get_conf
	ngx_event_accept()
	ngx_trylock_accept_mutex()
	ngx_accept_log_error()
	ngx_process_events_and_timers()
	ngx_handle_read_event()
	ngx_handle_write_event()
	ngx_send_lowat()
/*}}}*/
ngx_event.c/*{{{*/
	ngx_epoll_module:ngx_module_t
	ngx_kqueue_module:ngx_module_t
	ngx_timer_resolution:ngx_uint_t
	ngx_event_timer_alarm:sig_atomic_t
	ngx_event_max_module:ngx_uint_t
	ngx_event_flags:ngx_uint_t
	ngx_event_actions:ngx_event_actions_t
	connection_counter:ngx_atomic_t
	ngx_accept_mutex_ptr:ngx_atomic_t*
	ngx_accept_mutex:ngx_shmtx_t
	ngx_use_accept_mutex:ngx_uint_t
	ngx_accept_events:ngx_uint_t
	ngx_accept_mutex_held:ngx_uint_t
	ngx_accpet_mutex_delay:ngx_msec_t
	ngx_accept_disabled:ngx_int_t
	ngx_accpet_mutex_lock_file:ngx_file_t

	ngx_events_module:ngx_module_t
		ngx_events_module_ctx:ngx_core_module_t*
			ngx_string("events")
			ngx_event_init_conf()
		ngx_events_commands:ngx_command_t[]
			ngx_string("events")
			ngx_events_block()
				ngx_modules[i]->ctx->create_conf()
				cf->ctx=ctx
				cf->module_type=NGX_EVENT_MODULE
				cf->cmd_type=NGX_EVENT_CONF
				ngx_conf_parse()
				ngx_modules[i]->ctx->init_conf()
	ngx_events_core_module:ngx_module_t
		ngx_event_core_module_ctx:ngx_event_module_t
			ngx_event_core_create_conf()
			ngx_event_core_init_conf()
				epoll_create()
		ngx_event_core_commands:ngx_command_t[]
			ngx_string("connections") ngx_event_connections()
			ngx_string("worker_connections") ngx_event_connections()
					NGX_CONF_UNSET_UINT
					ecf->connections=ngx_atoi()
					cf->cycle->connection_n=
			ngx_string("use") ngx_event_use()
				ecf->use=
				ecf->name=
			ngx_string("multi_accept")
				ecf->multi_accept=ngx_flag_t
			ngx_string("accept_mutex")
				ecf->accept_mutex=ngx_flag_t
			ngx_string("accept_mutex_delay")
				ecf->accept_mutex_delay=ngx_msec_t
			ngx_string("debug_connection") ngx_event_debug_connection()
				ngx_array_push(ecf->debug_connection)
				ngx_inet_resolve_host()
		ngx_event_module_init()
			ngx_shm_alloc()
		ngx_event_process_init()
			ngx_event_timer_init()
			ngx_modules[i]->ctx->actions.init()
			sigaction()
			setitimer()
			cycle->connections=ngx_connection_t[]
			cycle->read_events=ngx_event_t[]
			cycle->write_events=ngx_event_t[]
			cycle->free_connections=
			cycle->free_connection_n=
			ngx_get_connection(cycle->listening[i].fd)
			c->read->handler=ngx_event_accept
			ngx_add_event()
	ngx_process_events_and_timers()
		ngx_event_find_timer()
		ngx_trylock_accept_mutex()
		ngx_process_events()
		ngx_event_process_posted()
		ngx_shmtx_unlock()
		ngx_event_expire_timers()
		ngx_event_process_posted()
	ngx_handle_read_event()
		ngx_add_event()
		ngx_del_event()
	ngx_handle_write_event()
		ngx_add_event()
		ngx_del_event()
	ngx_send_lowat()
		setsockopt()
/*}}}*/
ngx_event_timer.h/*{{{*/
	ngx_event_timer_rbtree:ngx_rbtree_t
	ngx_event_del_timer()
		ngx_rbtree_delete()
	ngx_event_add_timer()
		ngx_rbtree_insert()
/*}}}*/
ngx_event_timer.c/*{{{*/
	ngx_event_timer_rbtree:ngx_rbtree_t
	ngx_event_timer_sentinel:ngx_rbtree_node_t
	ngx_event_timer_init()
		ngx_rbtree_init()
	ngx_event_find_timer()
		ngx_rbtree_min()
	ngx_event_expire_timers()
		ngx_rbtree_min()
		ngx_rbtree_delete()
		ev->handler()
/*}}}*/
ngx_event_mutex.c/*{{{*/
	ngx_event_mutex_timedlock()
		ngx_add_timer()
	ngx_event_mutex_unlock()
/*}}}*/
ngx_event_accept.c/*{{{*/
	ngx_event_accept()
		ngx_enable_accept_events()
		accept()
		ngx_disable_accept_events()
		ngx_get_connection()
		c->pool=ngx_create_pool()
		c->sockaddr=
		ngx_nonblocking()
		c->recv=ngx_recv
		c->send==ngx_send
		c->recv_chain=ngx_recv_chain
		c->send_chain=ngx_send_chain
		c->log=ngx_palloc()
		c->pool->log=
		c->listening=ls
		c->sockaddr=
		c->local_sockaddr=
		c->number=ngx_connection_counter
		c->add_text
		ngx_add_conn()
		ls->handler()
	ngx_trylock_accept_mutex()
		ngx_shmtx_trylock(&ngx_accept_mutex)
		ngx_enable_accept_events()
		ngx_accept_mutex_held=1
	ngx_enable_accept_events()
		ngx_add_event(cycle->listening[i]->read)
	ngx_disable_accept_events()
		ngx_del_event(cycle->listening[i]->read)
	ngx_close_accepted_connection()
		ngx_free_connection()
		ngx_close_socket()
		ngx_destroy_pool()
	ngx_accept_log_error()
		/*}}}*/
ngx_event_posted.h/*{{{*/
	ngx_locked_post_event()
	ngx_post_event()
	ngx_delete_posted_event()
	ngx_event_process_posted()
	ngx_wakeup_worker_thread()
	ngx_posted_accept_events:ngx_event_t*
	ngx_posted_events:ngx_event_t*
/*}}}*/
ngx_event_posted.c/*{{{*/
	ngx_posted_accept_events:ngx_event_t*
	ngx_posted_events:ngx_event_t*
	ngx_event_process_posted()
		ngx_delete_posted_event()
		ev->handler()
	ngx_wakeup_worker_thread()
		ngx_cond_signal()
	ngx_event_thread_process_posted()
		ngx_delete_posted_event()
		ev->handler()
/*}}}*/
ngx_event_connect.h/*{{{*/
	ngx_peer_connection_t
		connection:ngx_connection_t*
		sockaddr:struct sockaddr*
		socklen:socklen_t
		name:ngx_str_t*
		tries:ngx_uint_t
		get:ngx_event_get_peer_pt
		free:ngx_event_free_peer_pt
		data:void*
		set_session:ngx_event_set_peer_session_pt
		save_session:ngx_event_save_peer_session_pt
		local:ngx_addr_t*
		rcvbuf:int
		log:ngx_log_t*
		cached:unsigned
		log_error:unsigned
	ngx_event_connect_peer()
	ngx_event_get_peer()
/*}}}*/
ngx_event_connect.c/*{{{*/
	ngx_event_connect_peer()
		ngx_socket()
		ngx_get_connection()
		setsockopt()
		ngx_nonblocking()
		bind()
		c->recv=ngx_recv
		c->send==ngx_send
		c->recv_chain=ngx_recv_chain
		c->send_chain=ngx_send_chain
		ngx_add_conn()
		connect()
		ngx_add_event()
	ngx_event_get_peer()
/*}}}*/
ngx_event_pipe.h
ngx_event_pipe.c
ngx_event_openssl.h
ngx_event_openssl.c
ngx_event_busy_lock.h
ngx_event_busy_lock.c
ngx_event_openssl_stapling.c
src/event/modules/*{{{*/
ngx_epoll_module.c/*{{{*/
	ngx_epoll_module:ngx_module_t
		ngx_epoll_module_ctx:ngx_event_module_t*
			ngx_epoll_create_conf()
			ngx_epoll_init_conf()
				ngx_epoll_add_event()
					epoll_ctl()
				ngx_epoll_del_event()
					epoll_ctl()
				ngx_epoll_add_event()
					epoll_ctl()
				ngx_epoll_del_event()
					epoll_ctl()
				ngx_epoll_add_connection()
					epoll_ctl()
				ngx_epoll_del_connection()
					epoll_ctl()
				NULL
				ngx_epoll_process_events()
					epoll_wait()
					ngx_time_update()
					rev->handler()
					wev->handler()
				ngx_epoll_init()
					epoll_create()
					ngx_epoll_aio_init()
					ngx_event_actions=ngx_epoll_module_ctx.actions
				ngx_epoll_done()
					close()
					ngx_free()
		ngx_epoll_commands:ngx_command_t[]
			ngx_string("epoll_events")
				epcf->events=ngx_int_t
			ngx_string("worker_aio_requests")
				epcf->aio_requests=ngx_int_t
/*}}}*/
ngx_aio_module.c
ngx_devpoll_module.c
ngx_eventport_module.c
ngx_kqueue_module.c
ngx_poll_module.c
ngx_rtsig_module.c
ngx_select_module.c
ngx_win32_select_module.c
/*}}}*/
/*}}}*/
src/http/*{{{*/
ngx_http_config.h/*{{{*/
	ngx_http_conf_ctx_t
		main_conf:void**
		srv_conf:void**
		loc_conf:void**
	ngx_http_module_t
		preconfiguration:
		postconfiguration:
		create_main_conf:
		init_main_conf:
		create_srv_conf:
		merge_srv_conf:
		create_loc_conf:
		merge_loc_conf:
	NGX_HTTP_MODULE
	NGX_HTTP_MAIN_CONF
	NGX_HTTP_SRV_CONF
	NGX_HTTP_LOC_CONF
	NGX_HTTP_UPS_CONF
	NGX_HTTP_SIF_CONF
	NGX_HTTP_LIF_CONF
	NGX_HTTP_LMT_CONF

	NGX_HTTP_MAIN_CONF_OFFSET
	NGX_HTTP_SRV_CONF_OFFSET
	NGX_HTTP_LOC_CONF_OFFSET

	ngx_http_get_module_main_conf()
	ngx_http_get_module_srv_conf()
	ngx_http_get_module_loc_conf()

	ngx_http_conf_get_module_main_conf()
	ngx_http_conf_get_module_srv_conf()
	ngx_http_conf_get_module_loc_conf()

	ngx_http_cycle_get_module_main_conf()
/*}}}*/
ngx_http.h/*{{{*/
	ngx_http_log_ctx_t
		connection:ngx_connection_t*
		request:ngx_http_request_t*
		current_request:ngx_http_request_t*
	ngx_http_chunked_t
		state:ngx_uint_t
		size:off_t
		length:off_t
	ngx_http_status_t
		http_version:ngx_uint_t
		code:ngx_uint_t
		count:ngx_uint_t
		start:u_char*
		end:u_char*
	ngx_http_get_module_ctx() ngx_http_set_ctx()
	ngx_http_add_location()
	ngx_http_add_listen()
	ngx_http_init_connection()
	ngx_http_close_connection()
	ngx_http_ssl_servername()

	ngx_http_parse_request_line()
	ngx_http_parse_uri()
	ngx_http_parse_complex_uri()
	ngx_http_parse_status_line()
	ngx_http_parse_unsafe_uri()
	ngx_http_parse_header_line()
	ngx_http_parse_multi_header_lines()
	ngx_http_arg()
	ngx_http_split_args()
	ngx_http_parse_chunked()

	ngx_http_create_request()
	ngx_http_process_request_uri()
	ngx_http_process_request_header()
	ngx_http_process_request()
	ngx_http_update_location_config()
	ngx_http_handler()
	ngx_http_run_posted_requests()
	ngx_http_post_request()
	ngx_http_finalize_request()
	ngx_http_free_request()

	ngx_http_empty_handler()
	ngx_http_request_empty_handler()
	ngx_http_send_special()
	ngx_http_read_client_request_body()
	ngx_http_send_header()
	ngx_http_special_response_handler()
	ngx_http_filter_finalize_request()
	ngx_http_clean_header()
	ngx_http_parse_time()
	ngx_http_get_time()
	ngx_http_discard_request_body()
	ngx_http_discarded_request_body_handler()
	ngx_http_block_reading()
	ngx_http_test_reading()

	ngx_http_types_slot()
	ngx_http_merge_types()
	ngx_http_set_default_types()
	ngx_http_degraded()
	ngx_http_module:ngx_module_t
	ngx_http_html_defaul_types:ngx_str_t[]
	ngx_http_top_header_filter:ngx_http_output_header_filter_pt
	ngx_http_top_body_filter:ngx_http_output_body_filter_pt
/*}}}*/
ngx_http.c/*{{{*/
	ngx_http_module:ngx_module_t
		ngx_http_module_ctx:ngx_core_module_t*
		ngx_http_commands:ngx_command_t[]
			ngx_string("http") ngx_http_block()
				ngx_pcalloc()
				ctx:ngx_http_conf_ctx_t*
				ngx_http_max_module=
				ctx->main_conf=ngx_pcalloc()
				ctx->srv_conf=ngx_pcalloc()
				ctx->loc_conf=ngx_pcalloc()
				ngx_modules[i]->ctx->create_main_conf()
				ngx_modules[i]->ctx->create_srv_conf()
				ngx_modules[i]->ctx->create_loc_conf()
				ngx_modules[i]->ctx->preconfiguration()
				cf->ctx=ctx
				cf->module_type=NGX_HTTP_MODULE
				cf->cmd_type=NGX_HTTP_MAIN_CONF
				ngx_conf_parse()
				ngx_modules[i]->ctx->init_main_conf()
				ngx_http_merge_servers()
					ngx_modules[i]->ctx->merge_srv_conf()
					ngx_modules[i]->ctx->merge_loc_conf()
					ngx_http_merge_locations()
						ngx_modules[i]->ctx->merge_loc_conf()
						ngx_http_merge_locations()
				ngx_http_init_locations()
					ngx_queue_sort()
					cscf->named_locations=
					cscf->regex_locations=
				ngx_http_init_static_location_trees()
					ngx_http_init_static_location_trees()
					ngx_http_join_exact_locations()
					ngx_http_create_locations_list()
					ngx_http_create_locations_tree()
				ngx_http_init_phases()
					ngx_array_init(cmcf->phases[].handlers)
				ngx_http_init_headers_in_hash()
					ngx_hash_init(cmcf->headers_in_hash)
				ngx_modules[i]->ctx->postconfiguration()
				ngx_http_variables_init_vars()
				ngx_http_init_phase_handlers()
					cmcf->phase_engine.server_rewrite_index=
					cmcf->phase_engine.location_rewrite_index=
					cmcf->phase_engine.handlers[i].checker=
					cmcf->phase_engine.handlers[i].handler=
					cmcf->phase_engine.handlers[i].next=
					NGX_HTTP_POST_READ_PHASE
					ngx_http_core_generic_phase()
					NGX_HTTP_SERVER_REWRITE_PHASE
					ngx_http_core_rewrite_phase()

					NGX_HTTP_FIND_CONFIG_PHASE
					ngx_http_core_find_config_phase()
					NGX_HTTP_REWRITE_PHASE
					ngx_http_core_rewrite_phase()
					NGX_HTTP_POST_REWRITE_PHASE
					ngx_http_core_post_rewrite_phase()

					NGX_HTTP_PREACCESS_PHASE
					ngx_http_core_generic_phase()
					NGX_HTTP_ACCESS_PHASE
					ngx_http_core_access_phase()
					NGX_HTTP_POST_ACCESS_PHASE
					ngx_http_core_post_access_phase()

					NGX_HTTP_TRY_FILES_PHASE
					ngx_http_core_try_files_phase()
					NGX_HTTP_CONTENT_PHASE
					ngx_http_core_content_phase()
					NGX_HTTP_LOG_PHASE
					ngx_http_core_generic_phase()
				ngx_http_optimize_servers()
					ngx_sort()
					ngx_http_server_names()
						ngx_hash_init()
						ngx_hash_wildcard_init()
					ngx_http_init_listening()
						ngx_http_add_listening()
							ngx_create_listening()
							ls:ngx_listening_t*
							ls->handler=ngx_http_init_connection
							ls->log.handler
							ls->back_log
							ls->rcvbuf
							ls->sndbuf
							ls->keepalive
							ls->keepidle
							ls->keepintvl
							ls->keepcnt
							ls->accept_filter
							ls->deferred_accept
							ls->setfib
						ngx_http_add_addrs()
	ngx_http_add_listen()
		cmcf->ports=ngx_array_create()
		ngx_array_push()
		port:ngx_http_conf_port_t*
		ngx_http_add_addresses()
		ngx_http_add_address()
	ngx_http_add_addresses()
		ngx_http_add_server()
		ngx_http_add_address()
	ngx_http_add_address()
		port->addrs=ngx_array_init()
		ngx_array_push()
		addr:ngx_http_conf_addr_t*
		ngx_http_add_server()
	ngx_http_add_server()
		addr->server=ngx_array_init()
		ngx_array_push()
		server:ngx_http_core_srv_conf_t**
		/*}}}*/
ngx_http_core_module.h/*{{{*/
	ngx_http_listen_opt_t
		u:union
			sockaddr
		socklen:socklen_t
		default_server:unsigned
		addr:u_char[]
	ngx_http_phases
	ngx_http_core_main_conf_t
		servers:ngx_array_t/ngx_http_core_srv_conf_t*
		phase_engine:ngx_http_phase_engine_t
			handlers:ngx_http_phase_handler_t*
				checker:ngx_http_phase_handler_pt
				handler:ngx_http_handler_pt
				next:ngx_uint_t
			server_rewrite_index:ngx_uint_t
			location_rewrite_index:ngx_uint_t
		headers_in_hash:ngx_hash_t
		variables_hash:ngx_hash_t
		variables:ngx_array_t
		ncaptures:ngx_uint_t
		server_names_hash_max_size:ngx_uint_t
		server_names_hash_bucket_size:ngx_uint_t
		variables_hash_max_size:ngx_uint_t
		variables_hash_bucket_size:ngx_uint_t
		variables_keys:ngx_hash_keys_arrays_t
		ports:ngx_array_t*
		try_files:ngx_uint_t
		phases:ngx_http_phase_t[]
			handlers:ngx_array_t
	ngx_http_core_srv_conf_t
		server_names:ngx_array_t
		ctx:ngx_http_conf_ctx_t*
		server_name:ngx_str_t
		connection_pool_size:size_t
		request_pool_size:size_t
		client_header_buffer_size:size_t
		large_client_header_buffers:ngx_bufs_t
		client_header_timeout:ngx_msec_t
		ignore_invalid_headers:ngx_flag_t
		merge_slashes:ngx_flag_t
		underscores_in_headers:ngx_flag_t
		listen:unsigned
		caputres:unsigned
		named_locations:ngx_http_core_loc_conf_t**
	ngx_http_core_loc_conf_t
		name:ngx_str_t
		regex:ngx_http_regex_t*
		noname:unsigned
		lmt_excpt:unsigned
		named:unsigned
		exact_match:unsigned
		noregex:unsigned
		auto_redirect:unsigned
		gzip_disable_msie6:unsigned
		static_locations:ngx_http_location_tree_node_t*
			left:ngx_http_location_tree_node_t*
			right:ngx_http_location_tree_node_t*
			tree:ngx_http_location_tree_node_t*
			exact:ngx_http_core_loc_conf_t*
			inclusive:ngx_http_core_loc_conf_t*
			auto_redirect:u_char
			len:u_char
			name:u_char[]
		regex_locations:ngx_http_core_loc_conf_t**
		loc_conf:void**
		limit_except:uint32_t
		limit_except_loc_conf:void**
		handler:ngx_http_handler_pt
		alias:size_t
		root:ngx_str_t
		post_action:ngx_str_t
		root_lengths:ngx_array_t*
		root_values:ngx_array_t*
		types:ngx_array_t*
		type_hash:ngx_hash_t
		default_type:ngx_str_t

		client_max_body_size:off_t
		directio:off_t
		directio_alignment:off_t
		client_body_buffer_size:off_t
		send_lowat:size_t
		postpone_output:size_t
		limit_rate:size_t
		limit_rate_after:size_t
		sendfile_max_chunk:size_t
		read_ahead:size_t

		client_body_timeout:ngx_msec_t
		send_timeout:ngx_msec_t
		keepalive_timeout:ngx_msec_t
		lingering_time:ngx_msec_t
		lingering_timeout:ngx_msec_t
		resolver_timeout:ngx_msec_t

		resolver:ngx_resolver_t*
		keepalive_header:time_t
		keepalive_requests:ngx_uint_t
		keepalive_disable:ngx_uint_t
		satisfy:ngx_uint_t
		lingering_close:ngx_uint_t
		if_modified_since:ngx_uint_t
		max_ranges:ngx_uint_t
		client_body_in_file_only:ngx_uint_t
		client_body_in_single_buffer:ngx_flag_t
		internal:ngx_flag_t
		sendfile:ngx_flag_t
		aio:ngx_flag_t
		tcp_nopush:ngx_flag_t
		tcp_nodelay:ngx_flag_t
		reset_timeout_connection:ngx_flag_t
		server_name_in_redirect:ngx_flag_t
		port_in_redirect:ngx_flag_t
		msie_padding:ngx_flag_t
		msie_refresh:ngx_flag_t
		log_not_found:ngx_flag_t
		log_subrequest:ngx_flag_t
		log_not_found:ngx_flag_t
		recursive_error_pages:ngx_flag_t
		server_tokens:ngx_flag_t
		chunked_transfer_encoding:ngx_flag_t
		etag:ngx_flag_t
		gzip_vary:ngx_flag_t
		gzip_http_version:ngx_uint_t
		gzip_proxied:ngx_uint_t
		gzip_disable:ngx_array_t*
		disable_symlinks:ngx_uint_t
		disable_symlinks_from:ngx_http_complex_value_t
		error_pages:ngx_array_t*
		try_files:ngx_http_try_file_t
		client_body_temp_path:ngx_path_t*
		open_file_cache:ngx_open_file_cache_t*
		open_file_cache_valid:time_t
		open_file_cache_min_uses:ngx_uint_t
		open_file_cache_errors:ngx_flag_t
		open_file_cache_events:ngx_flag_t
		error_log:ngx_log_t*
		types_hash_max_size:ngx_uint_t
		types_hash_bucket_size:ngx_uint_t
		locations:ngx_queue_t*
	ngx_http_core_run_phases()
	ngx_http_core_generic_phase()
	ngx_http_core_rewrite_phase()
	ngx_http_core_find_config_phase()
	ngx_http_core_post_rewrite_phase()
	ngx_http_core_access_phase()
	ngx_http_core_post_access_phase()
	ngx_http_core_try_files_phase()
	ngx_http_core_content_phase()

	ngx_http_test_content_type()
	ngx_http_set_content_type()
	ngx_http_set_exten()
	ngx_http_set_etag()
	ngx_http_send_response()
	ngx_http_map_uri_to_path()
	ngx_http_auth_basic_user()
	ngx_http_gzip_ok()
	ngx_http_subrequest()
	ngx_http_internal_redirect()
	ngx_http_named_location()
	ngx_http_cleanup_add()
	ngx_http_output_header_filter_pt
	ngx_http_output_body_filter_pt
	ngx_http_output_filter()
	ngx_http_write_filter()
	ngx_http_set_disable_symlinks()
	ngx_http_get_forwarded_addr()
	ngx_http_core_module:ngx_module_t
	ngx_http_max_module:ngx_uint_t
	ngx_http_core_get_method:ngx_str_t
	ngx_http_clear_content_length()
	ngx_http_clear_accept_ranges()
	ngx_http_clear_last_modified()
	ngx_http_clear_location()
	ngx_http_clear_etag()
/*}}}*/
ngx_http_core_module.c/*{{{*/
	ngx_http_core_module:ngx_module_t
		ngx_http_core_module_ctx:ngx_http_module_t*
			ngx_http_core_preconfiguration()
				ngx_http_variables_add_core_vars()
			ngx_http_core_create_main_conf()
			ngx_http_core_init_main_conf()
			ngx_http_core_create_srv_conf()
			ngx_http_core_merge_srv_conf()
			ngx_http_core_create_loc_conf()
			ngx_http_core_merge_loc_conf()
		ngx_http_core_commands:ngx_command_t[]
			ngx_string("variables_hash_max_size")
				cmcf->variables_hash_max_size=ngx_uint_t
			ngx_string("variables_hash_bucket_size")
				cmcf->variables_hash_bucket_size=ngx_uint_t
			ngx_string("variables_names_hash_max_size")
				cmcf->variables_names_hash_max_size=ngx_uint_t
			ngx_string("variables_names_hash_bucket_size")
				cmcf->variables_names_hash_bucket_size=ngx_uint_t

			ngx_string("server") ngx_http_core_server()
				ngx_pcalloc()
				ctx:ngx_http_conf_ctx_t*
				ctx->main_conf=cf->ctx->main_conf
				ctx->srv_conf=ngx_pcalloc()
				ctx->loc_conf=ngx_pcalloc()
				ngx_modules[i]->ctx->create_main_conf()
				ngx_modules[i]->ctx->create_loc_conf()
				ngx_array_push(cmcf->servers)
				cf->ctx=ctx
				cf->cmd_type=NGX_HTTP_SRV_CONF
				ngx_conf_parse()
				ngx_sock_ntop()
				ngx_http_add_listen()

			ngx_string("connection_pool_size")
				cscf->connection_pool_size=size_t
			ngx_string("request_pool_size")
				cscf->request_pool_size=size_t

			ngx_string("client_header_timeout")
				cscf->client_header_timeout=ngx_msec_t
			ngx_string("client_header_buffer_size")
				cscf->client_header_buffer_size=size_t
			ngx_string("large_client_header_buffers")
				cscf->large_client_header_buffers=ngx_bufs_t

			ngx_string("optimize_server_names")
				cscf->server_name_in_redirect=ngx_flag_t
			ngx_string("ignore_invalid_headers")
				cscf->ignore_invalid_headers=ngx_flag_t

			ngx_string("merge_slashes")
				cscf->merge_slashes=ngx_flag_t
			ngx_string("underscores_in_headers")
				cscf->underscores_in_headers=ngx_flag_t

			ngx_string("location") ngx_http_core_location()
				ngx_pcalloc()
				ctx:ngx_http_conf_ctx_t*
				ctx->main_conf=cf->ctx->main_conf
				ctx->srv_conf=cf->ctx->srv_conf
				ctx->srv_conf=ngx_pcalloc()
				ngx_modules[i]->ctx->create_loc_conf()
				ngx_http_add_location(clcf->locations)
				ngx_conf_parse()

			ngx_string("listen") ngx_http_core_listen()
				ngx_http_add_listen()
			ngx_string("server_name") ngx_http_core_server_name()
				ngx_array_push(cscf->server_names)

			ngx_string("types_hash_max_size")
				clcf->types_hash_max_size=ngx_uint_t
			ngx_string("types_hash_bucket_size")
				clcf->types_hash_bucket_size=ngx_uint_t
			ngx_string("types") ngx_http_core_types()
			ngx_string("default_type")
				clcf->default_type=ngx_str_t

			ngx_string("root") ngx_http_core_root()
			ngx_string("alias") ngx_http_core_root()

			ngx_string("limit_except") ngx_http_core_limit_except()
			ngx_string("client_max_body_size")
				clcf->client_max_body_size=off_t
			ngx_string("client_body_buffer_size")
				clcf->client_body_buffer_size=size_t
			ngx_string("client_body_timeout")
				clcf->client_body_timeout=ngx_msec_t
			ngx_string("client_body_temp_path")
				clcf->client_body_temp_path=ngx_path_t
			ngx_string("client_body_in_file_only")
				clcf->client_body_in_file_only=ngx_conf_enum_t
			ngx_string("client_body_in_single_buffer")
				clcf->client_body_in_single_buffer=ngx_flag_t

			ngx_string("sendfile")
				clcf->sendfile=ngx_flag_t
			ngx_string("sendfile_max_chunk")
				clcf->sendfile_max_chunk=size_t
			ngx_string("aio")
				clcf->aio=ngx_conf_enum_t
			ngx_string("read_ahead")
				clcf->read_ahead=size_t
			ngx_string("directio") ngx_http_core_directio()
			ngx_string("directio_alignment")
				clcf->directio_alignment=off_t
			ngx_string("tcp_nopush")
				clcf->tcp_nopush=ngx_flag_t
			ngx_string("tcp_nodelay")
				clcf->tcp_nodelay=ngx_flag_t
			ngx_string("send_timeout")
				clcf->send_timeout=ngx_msec_t
			ngx_string("send_lowat")
				clcf->send_lowat=size_t
			ngx_string("postpone_output")
				clcf->postpone_output=size_t
			ngx_string("limit_rate")
				clcf->limit_rate=size_t
			ngx_string("limit_rate_after")
				clcf->limit_rate_after=size_t
			ngx_string("keepalive_timeout") ngx_http_core_keepalive()
			ngx_string("keepalive_requests")
				clcf->keepalive_requests=ngx_int_t
			ngx_string("keepalive_disable")
				clcf->keepalive_disable=ngx_conf_bitmask_t
			ngx_string("satisfy")
				clcf->satisfy=ngx_conf_enum_t
			ngx_string("satisfy_any")
				clcf->satisfy_any=ngx_flag_t
			ngx_string("internal") ngx_http_core_internal()
			ngx_string("lingering_close")
				clcf->lingering_close=ngx_conf_enum_t
			ngx_string("lingering_time")
				clcf->lingering_time=ngx_msec_t
			ngx_string("lingering_timeout")
				clcf->lingering_timeout=ngx_msec_t
			ngx_string("reset_timeout_connection")
				clcf->reset_timeout_connection=ngx_flag_t
			ngx_string("server_name_in_redirect")
				clcf->server_name_in_redirect=ngx_flag_t
			ngx_string("port_in_redirect")
				clcf->port_in_redirect=ngx_flag_t
			ngx_string("msie_padding")
				clcf->msie_padding=ngx_flag_t
			ngx_string("msis_refresh")
				clcf->msis_refresh=ngx_flag_t
			ngx_string("log_not_found")
				clcf->log_not_found=ngx_flag_t
			ngx_string("log_subrequest")
				clcf->log_subrequest=ngx_flag_t
			ngx_string("recursive_error_pages")
				clcf->recursive_error_pages=ngx_flag_t
			ngx_string("server_tokens")
				clcf->server_tokens=ngx_flag_t
			ngx_string("if_modified_since")
				clcf->if_modified_since=ngx_conf_enum_t
			ngx_string("max_ranges")
				clcf->max_ranges=ngx_int_t
			ngx_string("chunked_transfer_encoding")
				clcf->chunked_transfer_encoding=ngx_flag_t
			ngx_string("etag")
				clcf->etag=ngx_flag_t
			ngx_string("error_page") ngx_http_core_error_page()
			ngx_string("try_files") ngx_http_core_try_files()
			ngx_string("post_action")
				clcf->post_action=ngx_str_t
			ngx_string("error_log") ngx_http_core_error_log()
			ngx_string("open_file_cache") ngx_http_core_open_file_cache()
			ngx_string("open_file_cache_valid")
				clcf->open_file_cache_valid=time_t
			ngx_string("open_file_cache_retest")
				clcf->open_file_cache_retest=time_t
			ngx_string("open_file_cacahe_min_uses")
				clcf->open_file_cacahe_min_uses=ngx_int_t
			ngx_string("open_file_cache_errors")
				clcf->open_file_cache_errors=ngx_flag_t
			ngx_string("open_file_cache_events")
				clcf->open_file_cache_events=ngx_flag_t
			ngx_string("resolver") ngx_http_core_resolver()
			ngx_string("resolver_timeout")
				clcf->resolver_timeout=ngx_msec_t
			ngx_string("gzip_vary")
				clcf->gzip_vary=ngx_flag_t
			ngx_string("gzip_http_version")
				clcf->gzip_http_version=ngx_conf_enum_t
			ngx_string("gzip_proxied")
				clcf->gzip_proxied=ngx_conf_bitmask_t
			ngx_string("gzip_disable") ngx_http_gzip_disable()
				clcf->gzip_disable=ngx_flag_t
			ngx_string("disable_symlinks") ngx_http_disable_symlinks()

	ngx_http_handler()
		r->keepalive=1
		r->phase_handler=0
		r->lingering_close=1
		r->write_event_handler=ngx_http_core_run_phases
		ngx_http_core_run_phases()
	ngx_http_core_run_phases()
		cmcf->phase_engine.handlers[r->phase_handler].checker()
	ngx_http_core_generic_phase()
	ngx_http_core_rewrite_phase()
	ngx_http_core_find_config_phase()
		ngx_http_core_find_location()
		ngx_http_update_location_config()
	ngx_http_core_post_rewrite_phase()
	ngx_http_core_access_phase()
		ph->handler()
		?clcf->satisfy
		r->access_code
	ngx_http_core_post_access_phase()
	ngx_http_core_try_files_phase()
		ngx_http_split_args()
		ngx_http_internal_redirect()
		ngx_http_named_location()
		ngx_http_set_disable_symlinks()
		ngx_open_cached_file()
		ngx_http_set_exten()
	ngx_http_core_content_phase()
		r->content_handler()
		ph->handler()
		ngx_http_finalize_request()
	ngx_http_update_location_config()
		r->content_handler=clcf->handler
		r->keepalive=clcf->keepalive_disable
	ngx_http_core_find_location()
		clcf->static_locations
		ngx_http_core_find_static_location()
		clcf->rege_locations
		ngx_http_regex_exec()
		ngx_http_core_find_location()
	ngx_http_test_content_type()
		ngx_hash_find()
	ngx_http_set_content_type()
		r->headers_out.content_type
	ngx_http_set_exten()
		r->exten
	ngx_http_set_etag()
		r->headers_out.etag
	ngx_http_send_response()
		ngx_http_discard_request_body()
		r->headers_out.status
		ngx_http_complex_value()
		ngx_http_set_content_type()
		ngx_http_send_header()
		ngx_http_output_filter()
	ngx_http_send_header()
		ngx_http_top_header_filter()
	ngx_http_output_filter()
		ngx_http_top_body_filter()
	ngx_http_map_uri_to_path()
		ngx_http_script_run()
		ngx_conf_full_name()
	ngx_http_auth_basic_user()
	ngx_http_gzip_ok()
	ngx_http_gzip_accept_encoding()
	ngx_http_gzip_quantity()
	ngx_http_subrequest()
		ngx_pcalloc()
		sr:ngx_http_request_t
		sr->signature=NGX_HTTP_MODULE
		sr->connection=r->connection
		sr->ctx=ngx_pcalloc()
		sr->headers_out.headers=ngx_list_init()
		sr->main_conf=
		sr->srv_conf=
		sr->loc_conf=
		sr->pool=r->pool
		sr->headers_in=r->headers_in
		sr->request_body=r->request_body
		sr->method=NGX_HTTP_GET
		sr->http_version=r->http_version
		sr->request_line=r->request_line
		sr->uri=*uri
		sr->args=*args
		sr->subrequest_in_memory=1
		sr->unparsed_uri=r->unparsed_uri
		sr->method_name=ngx_http_core_get_method
		sr->http_protocol=r->http_protocol
		ngx_http_set_exten()
		sr->main=r->main
		sr->parent=r
		sr->post_subrequest=ps
		sr->read_event_handler=ngx_http_request_empty_handler
		sr->write_event_handler=ngx_http_handler
		sr->variables=r->variables
		sr->log_handler=r->log_handler
		r->postponed=ngx_pcalloc()
		sr->internal=1
		sr->discard_body=r->discard_body
		sr->expect_tested=1
		sr->main_filter_need_in_memory=r->main_filter_need_in_memory
		sr->start_sec=ngx_timeofday()
		ngx_http_post_request()
	ngx_http_internal_redirect()
		r->uri_changes--
		r->uri=*uri
		r->args=*args
		ngx_http_set_exten()
		r->ctx=ngx_memzero()
		r->loc_conf=
		ngx_http_update_location_config()
		r->internal=1
		r->valid_unparsed_uri=0
		ngx_http_handler()
	ngx_http_named_location()
		r->phase_handler=
		ngx_http_core_run_phases()
	ngx_http_cleanup_add()
		cln:ngx_http_cleanup_t*
	ngx_http_set_disable_symlinks()
	ngx_http_get_forwarded_addr()
	ngx_http_get_forwarded_addr_internal()
	ngx_http_core_regex_location()
	/*}}}*/
ngx_http_request.h/*{{{*/
	NGX_HTTP_GET NGX_HTTP_HEAD NGX_HTTP_POST NGX_HTTP_PUT NGX_HTTP_DELETE
	NGX_HTTP_OK

	NGX_HTTP_SPECIAL_RESPONSE
	NGX_HTTP_MOVED_PERMANENTLY
	NGX_HTTP_MOVED_TEMPORARILY
	NGX_HTTP_NOT_MODIFIED
	
	NGX_HTTP_BAD_REQUEST
	NGX_HTTP_UNAUTHORIZED
	NGX_HTTP_FORBIDDEN
	NGX_HTTP_NOT_FOUND
	NGX_HTTP_NOT_ALLOWED

	NGX_HTTP_INTERNAL_SERVER_ERROR
	NGX_HTTP_NOT_IMPLEMENTED
	NGX_HTTP_BAD_GATEWAY
	NGX_HTTP_SERVICE_UNAVAILABLE

	ngx_http_header_t
		name:ngx_str_t
		offset:ngx_uint_t
		handler:ngx_http_header_handler_pt
	ngx_http_header_out_t
	ngx_http_headers_in_t
		headers:ngx_list_t
		host:ngx_table_elt_t*
		connection:ngx_table_elt_t*
		if_modified_since:ngx_table_elt_t*
		if_unmodified_since:ngx_table_elt_t*
		if_match:ngx_table_elt_t*
		if_none_match:ngx_table_elt_t*
		user_agent:ngx_table_elt_t*
		referer:ngx_table_elt_t*
		content_length:ngx_table_elt_t*
		content_type:ngx_table_elt_t*
		range:ngx_table_elt_t*
		if_range:ngx_table_elt_t*
		transfer_encoding:ngx_table_elt_t*
		expect:ngx_table_elt_t*
		upgrade:ngx_table_elt_t*
		accept_encoding:ngx_table_elt_t*
		via:ngx_table_elt_t*
		authoirzation:ngx_table_elt_t*
		keep_alive:ngx_table_elt_t*
		x_forwarded_for:ngx_table_elt_t*
		x_real_ip:ngx_table_elt_t*
		accept:ngx_table_elt_t*
		accept_language:ngx_table_elt_t*
		user:ngx_str_t
		passwd:ngx_str_t
		cookies:ngx_array_t
		server:ngx_str_t
		content_length_n:off_t
		keep_alive_n:time_t
		connection_type:unsigned
		chunked:unsigned
		msie:unsigned
		opera:unsigned
		gecko:unsigned
		chrome:unsigned
		safari:unsigned
		konqueror:unsigned
	ngx_http_headers_out_t
		headers:ngx_list_t
		status:ngx_uint_t
		status_line:ngx_str_t
		server:ngx_table_elt_t*
		data:ngx_table_elt_t*
		content_length:ngx_table_elt_t*
		content_encoding:ngx_table_elt_t*
		location:ngx_table_elt_t*
		refresh:ngx_table_elt_t*
		last_modified:ngx_table_elt_t*
		content_range:ngx_table_elt_t*
		accept_ranges:ngx_table_elt_t*
		www_authericate:ngx_table_elt_t*
		expires:ngx_table_elt_t*
		etag:ngx_table_elt_t*
		overrid_charset:ngx_str_t
		content_type_len:size_t
		content_type:ngx_str_t
		charset:ngx_str_t
		content_type_lowcase:u_char*
		content_type_hash:ngx_uint_t
		cache_control:ngx_array_t
		content_length_n:off_t
		date_time:time_t
		last_modified_time:time_t
	ngx_http_request_body_t
		temp_file:ngx_temp_file_t*
		bufs:ngx_chain_t*
		buf:ngx_buf_t*
		rest:off_t
		free:ngx_chain_t*
		busy:ngx_chain_t*
		chunked:ngx_http_chunked_t*
		post_handler:ngx_http_client_body_handler_pt
	ngx_http_connection_t
		addr_conf:ngx_http_addr_conf_t
		conf_ctx:ngx_http_conf_ctx_t
		ssl_servername:ngx_str_t
		ssl_servername_regex:ngx_http_regex_t
		busy:ngx_buf_t**
		nbusy:ngx_int_t
		free:ngx_buf_t**
		nfree:ngx_int_t
		ssl:ngx_uint_t
	ngx_http_cleanup_t
		handler:ngx_http_cleanup_pt
		data:void*
		next:ngx_http_cleanup_t
	ngx_http_post_subrequest_t
		handler:ngx_http_post_subrequest_pt
		data:void*
	ngx_http_postponed_request_t
		request:ngx_http_request_t*
		out:ngx_chain_t*
		next:ngx_http_postponed_request_t*
	ngx_http_posted_request_t
		request:ngx_http_request_t*
		next:ngx_http_posted_request_t*
	ngx_http_request_t
		signature:uint32_t
		connection:ngx_connection_t*
		
		ctx:void**
		main_conf:void**
		srv_conf:void**
		loc_conf:void**

		read_event_handler:ngx_http_event_handler_pt
		write_event_handler:ngx_http_event_handler_pt

		cache:ngx_http_cache_t*
		upstream:ngx_http_upstream_t*
		upstream_states:ngx_array_t*
		pool:ngx_pool_t*
		header_in:ngx_buf_t*
		headers_in:ngx_http_headers_in_t
		headers_out:ngx_http_headers_out_t
		request_body:ngx_http_request_body_t*

		lingering_time:time_t
		start_sec:time_t
		start_msec:ngx_msec_t

		method:ngx_uint_t
		http_version:ngx_uint_t
		request_line:ngx_str_t
		uri:ngx_str_t
		args:ngx_str_t
		exten:ngx_str_t
		unparsed_uri:ngx_str_t
		method_name:ngx_str_t
		http_protocol:ngx_str_t
		
		out:ngx_chain_t*
		main:ngx_http_request_t*
		parent:ngx_http_request_t*
		postponed:ngx_http_postponed_request_t*
		post_subrequest:ngx_http_post_subrequest_t*
		posted_requests:ngx_http_posted_request_t*

		phase_handler:ngx_int_t
		content_handler:ngx_http_handler_pt
		access_code:ngx_uint_t
		variables:ngx_http_variable_value_t

		ncaptures:ngx_uint_t
		captures:int*
		captures_data:u_char*

		limit_rate:size_t
		header_size:size_t
		request_length:off_t
		err_status:ngx_uint_t
		http_connection:ngx_http_connection_t*
		log_handler:ngx_http_log_handler_pt
		cleanup:ngx_http_cleanup_t
		subrequests:unsigned
		count:unsigned
		blocked:unsigned
		aio:unsigned
		http_state:unsigned
	ngx_http_headers_in:ngx_http_header_t[]
	ngx_http_headers_out:ngx_http_header_out_t[]
/*}}}*/
ngx_http_request.c/*{{{*/
	ngx_http_headers_in:ngx_http_header_t[]
		ngx_string("Host") ngx_http_process_host()
			ngx_http_validate_host()
			ngx_http_set_virtual_server()
			r->headers_in.server=host
		ngx_string("Host")
		ngx_string("Connection") ngx_http_process_connection()
			r->headers_in.connection_type=ngx_strcasestrn()
		ngx_string("If-Modifyied-Since")
		ngx_string("If_Unmodified-Since")
		ngx_string("If-Match")
		ngx_string("If-None-Match")
		ngx_string("User-Agent") ngx_http_process_user_agent()
			r->headers_in.user_agent=
			r->headers_in.msie6=
			r->headers_in.opera=
			r->headers_in.gecko=
			r->headers_in.chrome=
			r->headers_in.safari=
			r->headers_in.konqueror=
		ngx_string("Referer")
		ngx_string("Content-Length")
		ngx_string("Content-Type")
		ngx_string("Range")
		ngx_string("If-Range")
		ngx_string("Transfer-Encoding")
		ngx_string("Expect")
		ngx_string("Upgrade")
		ngx_string("Accept-Encoding")
		ngx_string("Via")
		ngx_string("Authorization")
		ngx_string("Keep-Alive")
		ngx_string("X-Forwarded-For")
		ngx_string("X-Real-IP")
		ngx_string("Accept")
		ngx_string("Accept-Language")
		ngx_string("Depth")
		ngx_string("Destination")
		ngx_string("Overwrite")
		ngx_string("Date")
		ngx_string("Cookie") ngx_http_process_multi_header_lines()
			ngx_array_push()
	ngx_http_init_connection()
		ngx_connection_local_sockaddr()
		hc:ngx_http_connection_t*
		hc->addr_conf=c->listening->servers->addrs[i].conf
		hc->conf_ctx=hc->add_conf->default_server->ctx
		c->log=
		c->read->handler=ngx_http_wait_request_handler
		c->write->handler=ngx_http_empty_handler
		c->read->handler=ngx_http_ssl_handshake
		ngx_post_event()
		c->read->handler()
		ngx_add_timer()
		ngx_reusable_connection()
		ngx_handle_read_event()
	ngx_http_wait_request_handler()
		c->buffer=ngx_create_temp_buf()
		c->recv()
		rev->handler=ngx_http_process_request_line
		ngx_http_process_request_line()
	ngx_http_create_request()
		ngx_pcalloc()
		r:ngx_http_request_t*
		r->pool=ngx_create_pool()
		r->http_connection=hc
		r->signature=NGX_HTTP_MODULE
		r->connection=c
		r->main_conf=hc->conf_cx->main_conf
		r->srv_conf=hc->conf_cx->srv_conf
		r->loc_conf=hc->conf_cx->loc_conf
		r->read_event_handler=ngx_http_block_reading
		r->header_in=
		r->headers_out=ngx_list_init()
		r->ctx=ngx_pcalloc()
		r->variables=ngx_pcalloc()
		r->main=r
		r->count=1
		r->start_sec=ngx_timeofday()
		r->start_msec=ngx_timeofday()
		r->http_state=NGX_HTTP_READING_REQUEST_STATE
		r->connection->log->data->request=r
		r->connection->log->data->current_request=r
		r->log_handler=ngx_http_log_error_handler
	ngx_http_ssl_handshake()
		recv()
		ngx_ssl_create_connection()
		ngx_ssl_handshake()
		ngx_ssl_handshake_handler()
		rev->handler=ngx_http_wait_request_handler
		ngx_http_wait_request_handler()
	ngx_http_ssl_handshake_handler()
		rev->handler=ngx_http_wait_request_handler
		ngx_reusable_connection()
		ngx_http_wait_request_handler()
	ngx_http_ssl_servername()
		SSL_get_servername()
		ngx_ssl_get_connection()
		ngx_http_validate_host()
		ngx_http_find_virtual_server()
		hc->ssl_servername=
		hc->conf_ctx=
		SSL_set_SSL_CTX()
		SSL_set_verify()
		SSL_set_verify_depth()
		SSL_clear_options()
		SSL_set_options()
	ngx_http_process_request_line()
		ngx_http_read_request_header()
		ngx_http_parse_request_line()
		r->request_line=
		r->request_length=
		r->method_name=
		r->http_protocol=
		ngx_http_process_request_uri()
		ngx_http_validate_host()
		ngx_http_set_virtual_server()
		rev->handler=ngx_http_process_request_headers
		ngx_http_process_request_headers()
		ngx_http_alloc_large_header_buffer()
		ngx_http_finalize_request()
	ngx_http_process_request_uri()
		ngx_http_parse_complex_uri()
		r->unparsed_uri=
		r->exten=
		r->args=
		r->uri=
	ngx_http_process_request_headers()
		ngx_http_alloc_large_header_buffer()
		ngx_http_read_request_header()
		ngx_http_parse_header_line()
		ngx_list_push()
		ngx_hash_find()
		hh->handler()
		ngx_http_process_request_header()
			ngx_http_set_virtual_server()
		ngx_http_process_request()
			SSL_get_verify_result()
			c->read->handler=ngx_http_request_handler
			c->write->handler=ngx_http_request_handler
			r->read_event_handler=ngx_http_block_reading
			ngx_http_handler()
			ngx_http_run_posted_requests()

	ngx_http_read_request_header()
		c->recv()
		r->header_in
		ngx_handle_read_event()
	ngx_http_alloc_large_header_buffer()
		r->header_in=ngx_create_temp_buf()
	ngx_http_process_header_line()
	ngx_http_process_unique_header_line()
	ngx_http_validate_host()
	ngx_http_set_virtual_server()
		ngx_http_find_virtual_server()
		r->srv_conf=
		r->loc_conf=
	ngx_http_find_virtual_server()
		ngx_hash_find_combined()
	ngx_http_request_handler()
		r->write_event_handler()
		r->read_event_handler()
		ngx_http_run_posted_requests()
	ngx_http_run_posted_requests()
		r->write_event_handler()
	ngx_http_post_request()
	ngx_http_finalize_request()
		ngx_http_finalize_connection()
			ngx_http_set_keepalive()
				ngx_add_timer()
				ngx_reusable_connection()
				rev->handler=ngx_http_keepalive_handler()
					ngx_http_create_request()
					rev->handler=ngx_http_process_request_line
					ngx_http_process_request_line()
			ngx_http_set_lingering_close()
				rev->handler=ngx_http_lingering_close_handler
			ngx_http_close_request()
		ngx_http_core_run_phases()
		r->post_subrequest->handler()
		ngx_del_timer()
		ngx_http_special_response_handler()
		ngx_http_set_write_handler()
			ngx_handle_write_event()
			r->write_event_handler=ngx_http_writer
				ngx_http_output_filter()
		ngx_http_post_request()
		ngx_http_post_action()
			ngx_http_internal_redirect()
			ngx_http_named_location()
		ngx_http_close_request()
		ngx_http_terminate_request()
			r->cleanup->handler()
			ngx_http_close_request()
	ngx_http_test_reading()
	ngx_http_send_special()
	ngx_http_close_request()
		ngx_http_free_request()
			r->cleanup->handler()
			ngx_http_log_request()
			ngx_destroy_pool()
		ngx_http_close_connection()
	ngx_http_log_request()
		cmcf->phases[NGX_HTTP_LOG_PHASE].hadnlers[i]()
	ngx_http_close_connection()
		ngx_ssl_shutdown()
		ngx_close_connection()
		ngx_destroy_pool()
	ngx_http_log_error()
	ngx_http_log_error_handler()
		/*}}}*/
ngx_http_request_body.c/*{{{*/
	ngx_http_read_client_request_body()
		ngx_http_test_expect()
		rb:ngx_http_request_body_t*=ngx_pcalloc()
		rb->post_handler=post_handler
		ngx_http_request_body_filter()
		rb->buf=ngx_create_temp_buf()
		r->read_event_handler=ngx_http_read_client_request_body_handler
			ngx_http_do_read_client_request_body()
		ngx_http_do_read_client_request_body()
			ngx_http_write_request_body()
				ngx_write_chain_to_temp_file()
			ngx_http_request_body_filter()
				ngx_http_request_body_chunked_filter()
					ngx_chain_get_free_buf()
					ngx_http_request_body_save_filter()
					ngx_chain_update_chains()
				ngx_http_request_body_length_filter()
					ngx_chain_get_free_buf()
					ngx_http_request_body_save_filter()
					ngx_chain_update_chains()
						ngx_chain_add_copy()
			c->recv()
			rb->post_handler()
	ngx_http_discard_request_body()
		ngx_http_test_expect()
			r->connection->send()
		ngx_http_read_discarded_request_body()
			r->connection->recv()
			ngx_http_discard_request_body_filter()
		r->read_event_handler=ngx_http_discarded_request_body_handler
			ngx_http_read_discarded_request_body()
			ngx_http_finalize_request()
		r->count++
		r->discard_body=1
		ngx_handle_read_event()
/*}}}*/
ngx_http_variables.h/*{{{*/
	NGX_HTTP_VAR_CHANGEABLE
	NGX_HTTP_VAR_NOCACHEABLE
	NGX_HTTP_VAR_INDEXED
	NGX_HTTP_VAR_NOHASH
	ngx_http_variable_t
		name:ngx_str_t
		set_handler:ngx_http_set_variable_pt
		get_handler:ngx_http_get_variable_pt
		data:uintptr_t
		flag:ngx_uint_t
		index:ngx_uint_t
	ngx_http_add_variable()
	ngx_http_get_variable_index()
	ngx_http_get_indexed_variable()
	ngx_http_get_flushed_variable()
	ngx_http_get_variable()
	ngx_http_variable_unknown_header()
	ngx_http_regex_variable_t
		capture:ngx_uint_t
		index:ngx_int_t
	ngx_http_regex_t
		regex:ngx_regex_t*
		ncaptures:ngx_uint_t
		variables:ngx_http_regex_variable_t
		nvariables:ngx_uint_t
		name:ngx_str_t
	ngx_http_map_regex_t
		regex:ngx_http_regex_t
		value:void*
	ngx_http_regex_compile()
	ngx_http_regex_exec()
	ngx_http_map_t
		hash:ngx_hash_combined_t
		regex:ngx_http_map_regex_t*
		nregex:ngx_uint_t
	ngx_http_map_find()
	ngx_http_variables_add_core_vars()
	ngx_http_variables_init_vars()
	ngx_http_variable_null_value:ngx_http_variable_value_t
	ngx_http_variable_true_value:ngx_http_variable_value_t
/*}}}*/
ngx_http_variables.c/*{{{*/
	ngx_http_core_variables:ngx_http_variable_t[]
		ngx_string("http_host") ngx_http_variable_header()
			r->headers_in.host
		ngx_string("http_user_agent") ngx_http_variable_header()
			r->headers_in.user_agent
		ngx_string("http_referer") ngx_http_variable_header()
			r->headers_in.referer
		ngx_string("http_via") ngx_http_variable_header()
			r->headers_in.via
		ngx_string("http_x_forwarded_for") ngx_http_variable_header()
			r->headers_in.x_forwarded_for
		ngx_string("http_cookie") ngx_http_variable_cookie()
			ngx_http_parse_multi_header_lines()
			r->headers_in.cookie
		ngx_string("content_length") ngx_http_variable_content_length()
		ngx_string("content_type") ngx_http_variable_header()
			r->headers_in.content_type
		ngx_string("host") ngx_http_variable_host()
		ngx_string("binary_remote_addr") ngx_http_variable_binary_remote_addr()
		ngx_string("remote_addr") ngx_http_variable_remote_addr()
		ngx_string("server_addr") ngx_http_variable_server_addr()
		ngx_string("server_port") ngx_http_variable_server_port()
		ngx_string("server_protocol") ngx_http_variable_request()
			r->headers_in.http_protocol
		ngx_string("scheme") ngx_http_variable_scheme()
		ngx_string("https") ngx_http_variable_https()
		ngx_string("request_uri") ngx_http_variable_request()
			r->headers_in.unparsed_uri
		ngx_string("uri") ngx_http_variable_request()
			r->headers_in.uri
		ngx_string("document_uri") ngx_http_variable_request()
			r->headers_in.uri
		ngx_string("request") ngx_http_variable_request_line()
		ngx_string("document_root") ngx_http_variable_document_root()
			ngx_http_script_run()
			ngx_conf_full_name()
		ngx_string("realpath_root") ngx_http_variable_realpath_root()
			ngx_http_script_run()
			ngx_conf_full_name()
		ngx_string("query_string") ngx_http_variable_request()
			r->headers_in.args
		ngx_string("args") ngx_http_variable_request()
			r->headers_in.args
		ngx_string("is_args") ngx_http_variable_is_args()
		ngx_string("request_filename") ngx_http_variable_request_filename()
			ngx_http_map_uri_to_path()
		ngx_string("server_name") ngx_http_variable_server_name()
		ngx_string("request_method") ngx_http_variable_request_method()
		ngx_string("remote_user") ngx_http_variable_remote_user()
		ngx_string("bytes_sent") ngx_http_variable_bytes_sent()
		ngx_string("body_bytes_sent") ngx_http_variable_body_bytes_sent()
		ngx_string("pipe") ngx_http_variable_pipe()
		ngx_string("request_body") ngx_http_variable_request_body()
		ngx_string("request_body_file") ngx_http_variable_request_body_file()
		ngx_string("request_length") ngx_http_variable_request_length()
		ngx_string("request_time") ngx_http_variable_request_time()
		ngx_string("status") ngx_http_variable_status()
		ngx_string("sent_http_content_type") ngx_http_variable_sent_content_type()
		ngx_string("sent_http_content_length") ngx_http_variable_sent_content_length()
		ngx_string("sent_http_location") ngx_http_variable_sent_location()
		ngx_string("sent_http_last_modified") ngx_http_variable_sent_last_modified()
		ngx_string("sent_http_connection") ngx_http_variable_sent_connection()
		ngx_string("sent_http_keep_alive") ngx_http_variable_sent_keep_alive()
		ngx_string("sent_http_transfer_encoding") ngx_http_variable_sent_transfer_encoding()
		ngx_string("sent_http_cache_control") ngx_http_variable_headers()
			r->headers_out.cache_control
		ngx_string("limit_rate") ngx_http_variable_request_set_size()
			r->limit_rate=ngx_parse_size()
		ngx_string("connection") ngx_http_variable_connection()
		ngx_string("connection_requests") ngx_http_variable_connection_requests()
		ngx_string("nginx_version") ngx_http_variable_nginx_version()
		ngx_string("hostname") ngx_http_variable_hostname()
		ngx_string("pid") ngx_http_variable_pid()
		ngx_string("msec") ngx_http_variable_msec()
		ngx_string("time_iso8601") ngx_http_variable_time_iso8601()
		ngx_string("time_local") ngx_http_variable_time_local()
		ngx_string("tcpinfo_rtt") ngx_http_variable_tcpinfo()
		ngx_string("tcpinfo_rttvar") ngx_http_variable_tcpinfo()
		ngx_string("tcpinfo_snd_cwnd") ngx_http_variable_tcpinfo()
		ngx_string("tcpinfo_rcv_space") ngx_http_variable_tcpinfo()
	ngx_http_variable_null_value:ngx_http_variable_value_t
	ngx_http_variable_true_value:ngx_http_variable_value_t
	ngx_http_add_variable()
		v:ngx_http_variable_t
		ngx_hash_add_key(cmcf->variables_keys)
	ngx_http_get_variable_index()
		v:ngx_http_variable_t
		ngx_array_push(cmcf->variables)
	ngx_http_get_indexed_variable()
		r->variables[index].get_handler()
	ngx_http_get_flushed_variable()
		ngx_http_get_indexed_variable()
	ngx_http_get_variable()
		ngx_hash_find(cmcf->variables_hash)
		NGX_HTTP_VAR_INDEXED
		ngx_http_get_flushed_variable()
		v->get_handler()
		ngx_http_variable_unknown_header_in()
		ngx_http_variable_unknown_header_out()
		ngx_http_upstream_header_variable()
		ngx_http_variable_cookie()
		ngx_http_variable_argument()
			ngx_http_arg()

	ngx_http_variable_request()
	ngx_http_variable_request_set()
	ngx_http_variable_header()
	ngx_http_variable_tcpinfo()
		getsockopt()
	ngx_http_map_find()
		ngx_hash_find_combined()
		ngx_http_regex_exec()
	ngx_http_regex_compile()
		ngx_regex_compile()
	ngx_http_regex_exec()
		ngx_regex_exec()
	ngx_http_variables_add_core_vars()
	ngx_http_variables_init_vars()
		cmcf->variables_hash
		ngx_hash_init()
		/*}}}*/
ngx_http_script.h/*{{{*/
	ngx_http_script_engine_t
		ip:u_char*
		pos:u_char*
		sp:ngx_http_variable_value_t*
		buf:ngx_str_t
		line:ngx_str_t
		args:u_char*
		flushed:unsigned
		skip:unsigned
		quote:unsigned
		is_args:unsigned
		log:unsigned
		status:ngx_int_t
		request:ngx_http_request_t*
	ngx_http_script_compile_t
		cf:ngx_conf_t*
		source:ngx_str_t*
		flushes:ngx_array_t**
		lengths:ngx_array_t**
		values:ngx_array_t**
		variables:ngx_uint_t
		ncaptures:ngx_uint_t
		captures_mask:ngx_uint_t
		size:ngx_uint_t
		main:void*
	ngx_http_complex_value_t
		value:ngx_str_t
		flushes:ngx_uint_t*
		lengths:void*
		values:void*
	ngx_http_compile_complex_value_t
		cf:ngx_conf_t*
		value:ngx_str_t*
		complex_value:ngx_http_complex_value_t*
	ngx_http_script_copy_code_t
		code:ngx_http_script_code_pt
		len:uintptr_t
	ngx_http_script_var_code_t
		code:ngx_http_script_code_pt
		index:uintptr_t
	ngx_http_script_var_handler_code_t
		code:ngx_http_script_code_pt
		handler:ngx_http_set_variable_pt
		data:uintptr_t
	ngx_http_script_copy_capture_code_t
		code:ngx_http_script_code_pt
		n:uintptr_t
	ngx_http_script_regex_code_t
		code:ngx_http_script_code_pt
		regex:ngx_http_regex_t*
		lengths:ngx_array_t*
	ngx_http_script_flush_complex_value()
	ngx_http_complex_value()
	ngx_http_compile_complex_value()
	ngx_http_set_complex_value_slot()
	ngx_http_test_predicates()
	ngx_http_set_predicate_slot()
	ngx_http_script_variables_count()
	ngx_http_script_compile()
	ngx_http_script_run()
	ngx_http_script_flush_no_cacheable_variables()
	ngx_http_script_start_code()
	ngx_http_script_add_code()
	ngx_http_script_copy_len_code()
	ngx_http_script_copy_code()
	ngx_http_script_copy_var_len_code()
	ngx_http_script_copy_var_code()
	ngx_http_script_copy_capture_len_code()
	ngx_http_script_copy_capture_code()
	ngx_http_script_mark_args_code()
	ngx_http_script_start_args_code()
	ngx_http_script_regex_start_code()
	ngx_http_script_regex_end_code()
	ngx_http_script_return_code()
	ngx_http_script_break_code()
	ngx_http_script_if_code()
	ngx_http_script_equal_code()
	ngx_http_script_not_equal_code()
	ngx_http_script_file_code()
	ngx_http_script_complex_value_code()
	ngx_http_script_value_code()
	ngx_http_script_set_var_code()
	ngx_http_script_var_set_handler_code()
	ngx_http_script_var_code()
	ngx_http_script_nop_code()
/*}}}*/
ngx_http_script.c/*{{{*/
	ngx_http_complex_value()
		ngx_http_script_flush_complex_value()
	ngx_http_compile_complex_value()
		ngx_http_script_compile()
	ngx_http_set_complex_value_slot()
	ngx_http_test_predicates()
	ngx_http_set_predicate_slot()
	ngx_http_script_variables_count()

	ngx_http_script_compile()
		ngx_http_script_init_arrays()
			sc->flushes=ngx_array_create()
			sc->lengths=ngx_array_create()
			sc->values=ngx_array_create()
		ngx_http_script_add_capture_code()
		ngx_http_script_add_var_code()
		ngx_http_script_add_args_code()
		ngx_http_script_add_copy_code()
		ngx_http_script_done()
			ngx_http_script_add_copy_code()
			ngx_http_script_add_full_name_code()
			ngx_http_script_add_code()
			ngx_http_script_add_code()
	ngx_http_script_run()
	ngx_http_script_flush_no_cacheable_variables()
	ngx_http_script_start_code()
		ngx_array_push_n()
	ngx_http_script_add_code()
		ngx_array_push_n()
	ngx_http_script_add_copy_code()
	ngx_http_script_copy_len_code()
	ngx_http_script_copy_code()
	ngx_http_script_add_var_code()
	ngx_http_script_copy_var_len_code()
	ngx_http_script_copy_var_code()
	ngx_http_script_add_args_code()
	ngx_http_script_mark_args_code()
	ngx_http_script_start_args_code()
	ngx_http_script_regex_start_code()
		ngx_http_regex_exec()
	ngx_http_script_regex_end_code()
	ngx_http_script_add_capture_code()
	ngx_http_script_copy_capture_len_code()
	ngx_http_script_copy_capture_code()
	ngx_http_script_add_full_name_code()
	ngx_http_script_full_name_len_code()
	ngx_http_script_full_name_code()
	ngx_http_script_return_code()
	ngx_http_script_break_code()
	ngx_http_script_if_code()
		ngx_http_update_location_config()
	ngx_http_script_equal_code()
	ngx_http_script_not_equal_code()
	ngx_http_script_file_code()
		ngx_http_set_disable_symlinks()
		ngx_open_cached_file()
	ngx_http_script_complex_value_code()
	ngx_http_script_value_code()
	ngx_http_script_set_var_code()
	ngx_http_script_var_set_handler_code()
	ngx_http_script_var_code()
	ngx_http_script_nop_code()
/*}}}*/
ngx_http_upstream.h/*{{{*/
	ngx_http_upstream_state_t
		bl_time:ngx_msec_t
		bl_state:ngx_uint_t
		status:ngx_uint_t
		response_sec:time_t
		response_msec:ngx_uint_t
		response_length:off_t
		peer:ngx_str_t*
	ngx_http_upstream_main_conf_t
		headers_in_hash:ngx_hash_t
		upstreams:ngx_array_t
	ngx_http_upstream_peer_t
		init_upstream:ngx_http_upstream_init_pt
		init:ngx_http_upstream_init_peer_pt
		data:void*
	ngx_http_upstream_server_t
		addrs:ngx_addr_t*
		naddrs:ngx_uint_t
		weight:ngx_uint_t
		max_fails:ngx_uint_t
		fail_timeout:time_t
		down:unsigned
		backup:unsigned
	ngx_http_upstream_srv_conf_t
		peer:ngx_http_upstream_peer_t
		srv_conf:void**
		servers:ngx_array_t*
		flags:ngx_uint_t
		host:ngx_str_t
		file_name:u_char*
		line:ngx_uint_t
		port:in_port_t
		default_port:in_port_t
		no_port:ngx_uint_t
	ngx_http_upstream_local_t
		addr:ngx_addr_t*
		value:ngx_http_complex_value_t*
	ngx_http_upstream_conf_t
		upstream:ngx_http_upstream_srv_conf_t*
		connect_timeout:ngx_msec_t
		send_timeout:ngx_msec_t
		read_timeout:ngx_msec_t
		timeout:ngx_msec_t
		send_lowat:size_t
		buffer_size:size_t
		busy_buffers_size:size_t
		max_temp_file_size:size_t
		temp_file_write_size:size_t
		busy_buffers_size_conf:size_t
		max_temp_file_size_conf:size_t
		temp_file_write_size_conf:size_t
		bufs:ngx_bufs_t
		ignore_headers:ngx_uint_t
		next_upstream:ngx_uint_t
		store_access:ngx_uint_t
		buffering:ngx_flag_t
		pass_request_headers:ngx_flag_t
		pass_request_body:ngx_flag_t
		ignore_client_abort:ngx_flag_t
		intercept_errors:ngx_flag_t
		cyclic_temp_file:ngx_flag_t
		temp_path:ngx_path_t*
		hide_headers_hash:ngx_hash_t
		hide_headers:ngx_array_t*
		pass_headers:ngx_array_t*
		local:ngx_http_upstream_local_t*
		cache:ngx_shm_zone_t*
		cache_min_uses:ngx_uint_t
		cache_use_stale:ngx_uint_t
		cache_method:ngx_uint_t
		cache_lock:ngx_flag_t
		cache_lock_timeout:ngx_msec_t
		cache_valid:ngx_array_t*
		cache_bypass:ngx_array_t*
		no_cache:ngx_array_t*
		store_lengths:ngx_array_t*
		store_values:ngx_array_t*
	ngx_http_upstream_header_t
		name:ngx_str_t
		handler:ngx_http_header_handler_pt
		offset:ngx_uint_t
		copy_handler:ngx_http_header_handler_pt
		conf:ngx_uint_t
		redirect:ngx_uint_t
	ngx_http_upstream_headers_in_t
		headers:ngx_list_t
		status_n:ngx_uint_t
		status_line:ngx_str_t
		status:ngx_table_elt_t*
		date:ngx_table_elt_t*
		server:ngx_table_elt_t*
		connection:ngx_table_elt_t*
		expires:ngx_table_elt_t*
		etag:ngx_table_elt_t*
		x_accel_expires:ngx_table_elt_t*
		x_accel_redirect:ngx_table_elt_t*
		x_accel_limit_rate:ngx_table_elt_t*
		content_type:ngx_table_elt_t*
		content_length:ngx_table_elt_t*
		last_modified:ngx_table_elt_t*
		location:ngx_table_elt_t*
		accept_ranges:ngx_table_elt_t*
		www_authericate:ngx_table_elt_t*
		transfer_encoding:ngx_table_elt_t*
		content_encoding:ngx_table_elt_t*
		content_length_n:ngx_table_elt_t*
		cache_control:ngx_table_elt_t*
		connection_close:ngx_table_elt_t*
		chunked:ngx_table_elt_t*
	ngx_http_upstream_resolved_t
		host:ngx_str_t
		port:in_port_t
		no_port:ngx_uint_t
		naddrs:ngx_uint_t
		addrs:in_addr_t*
		sockaddr:struct sockaddr*
		socklen:socklen_t
		ctx:ngx_resolver_ctx_t*
	ngx_http_upstream_t
		read_event_handler:ngx_http_upstream_handler_pt
		write_event_handler:ngx_http_upstream_handler_pt
		peer:ngx_peer_connection_t
		pipe:ngx_event_pipe_t*
		request_bufs:ngx_chain_t
		output:ngx_output_chain_ctx_t
		writer:ngx_chain_writer_ctx_t
		conf:ngx_http_upstream_conf_t*
		headers_in:ngx_http_upstream_headers_in_t
		resolved:ngx_http_upstream_resolved_t*
		from_client:ngx_buf_t
		buffer:ngx_buf_t
		length:off_t
		out_bufs:ngx_chain_t*
		busy_bufs:ngx_chain_t*
		free_bufs:ngx_chain_t*
		intput_filter_init:
		input_filter:
		input_filter_ctx:void*
		create_key:
		create_request:
		reinit_request:
		process_header:
		abort_request:
		finalize_request:
		rewrite_redirect:
		rewrite_cookie:
		timeout:ngx_msec_t
		state:ngx_http_upstream_state_t*
		method:ngx_str_t
		schema:ngx_str_t
		uri:ngx_str_t
		cleanup:ngx_http_cleanup_pt
	ngx_http_upstream_next_t
		status:ngx_uint_t
		mask:ngx_uint_t
	ngx_http_upstream_param_t
		key:ngx_str_t
		value:ngx_str_t
		skip_empty:ngx_uint_t
	ngx_http_upstream_header_variable()
	ngx_http_upstream_create()
	ngx_http_upstream_init()
	ngx_http_upstream_add()
	ngx_http_upstream_bind_set_slot()
	ngx_http_upstream_param_set_slot()
	ngx_http_upstream_hide_headers_hash()
/*}}}*/
ngx_http_upstream.c/*{{{*/
	ngx_http_upstream_headers_in:ngx_http_upstream_header_t[]
		ngx_string("Status")
		ngx_string("Content-type")
		ngx_string("Content-Length")
		ngx_string("Date")
		ngx_string("Last-Modified")
		ngx_string("ETag")
		ngx_string("Server")
		ngx_string("WWW-Authenticate")
		ngx_string("Location")
		ngx_string("Refresh")
		ngx_string("Set-Cookie")
		ngx_string("Content-Disposition")
		ngx_string("Cache-Control")
		ngx_string("Expires")
		ngx_string("Accept-Ranges")
		ngx_string("Connection")
		ngx_string("Keep-Alive")
		ngx_string("X-Powered-By")
		ngx_string("X-Accel-Expires")
		ngx_string("X-Accel-Redirect")
		ngx_string("X-Accel-Limit-Rate")
		ngx_string("X-Accel-Buffering")
		ngx_string("X-Accel-Charset")
		ngx_string("Transfer-Encoding")
		ngx_string("Content-Encoding")
	ngx_http_upstream_module:ngx_module_t
		ngx_http_upstream_module_ctx:ngx_http_module_t*
			ngx_http_upstream_add_variables()
			ngx_http_upstream_create_main_conf()
			ngx_http_upstream_init_main_conf()
		ngx_http_upstream_commands:ngx_command_t[]
			ngx_string("upstream") ngx_http_upstream()
				cf->main_conf=cf->ctx->main_conf
				cf->srv_conf=ngx_pcalloc()
				cf->loc_conf=ngx_pcalloc()
				cf->ctx=ctx
				cf->cmd_type=NGX_HTTP_UPS_CONF
				ngx_conf_parse()
			ngx_string("server") ngx_http_upstream_server()
	ngx_http_upstream_vars:ngx_http_variable_t[]
		ngx_string("upstream_addr")
		ngx_string("upstream_status")
		ngx_string("upstream_response_time")
		ngx_string("upstream_response_length")
		ngx_string("upstream_cache_status")
	ngx_http_upstream_create()
		u:ngx_http_upstream_t*
	ngx_http_upstream_init()
		ngx_http_upstream_init_request()
		u->create_request()
		u->request_bufs=r->request_body->bufs
		ngx_http_upstream_get_local()
		r->upstream_states=ngx_pcalloc()
		ngx_http_cleanup_add()
		cln:ngx_http_cleanup_t
		cln->handler=ngx_http_upstream_cleanup
		ngx_http_upstream_create_round_robin_peer()
		ngx_resolve_start()
		ngx_resolve_name()
		ngx_http_upstream_connect()
	ngx_http_upstream_cache()
	ngx_http_upstream_cache_send()
	ngx_http_upstream_resolve_handler()
		ngx_http_upstream_create_round_robin_peer()
		ngx_resolve_name_done()
		ngx_http_upstream_connect()
		ngx_http_run_posted_requests()
	ngx_http_upstream_handler()
		u->write_event_handler()
		u->read_event_handler()
		ngx_http_run_posted_requests()
	ngx_http_upstream_check_broken_connection()
	ngx_http_upstream_connect()
		ngx_event_connect_peer()
		u->peer.connection->data=r
		u->peer.connection->write->handler=ngx_http_upstream_handler
		u->peer.connection->read->handler=ngx_http_upstream_handler
		u->write_event_handler=ngx_http_upstream_send_request_handler
		u->read_event_handler=ngx_http_upstream_process_header
		u->peer.connection->pool=ngx_create_pool()
		u->peer.connection->log=r->connection->log
		u->peer.connection->pool->log=r->connection->log
		u->peer.connection->read->log=r->connection->log
		u->peer.connection->write->log=r->connection->log
		ngx_http_upstream_reinit()
			u->output.free=
		u->output.free=
		ngx_http_upstream_ssl_init_connection()
		ngx_http_upstream_send_request()
	ngx_http_upstream_ssl_init_connection()
		ngx_ssl_create_connection()
		ngx_ssl_handshake()
		ngx_http_upstream_ssl_handshake()
			ngx_http_upstream_send_request()
	ngx_http_upstream_send_request()
		ngx_output_chain()
		ngx_handle_write_event()
		ngx_add_timer()
	ngx_http_upstream_process_header()
		u->buffer=ngx_pcalloc()
		u->headers_in.headers=ngx_list_init()
		c->recv()
		u->process_header()
		ngx_http_upstream_send_response()
			ngx_http_send_header()
			ngx_http_upstream_process_non_buffered_upstream()
				ngx_http_upstream_process_non_buffered_request()
			ngx_http_upstream_process_non_buffered_downstream()
				ngx_http_upstream_process_non_buffered_request()
					ngx_http_output_filter()
					ngx_chain_update_chains()
					r->upstream->peer.connection->recv()
					r->upstream->input_filter() ngx_http_upstream_non_buffered_filter()
						ngx_chain_get_free_buf()

			ngx_http_upstream_process_downstream()
				ngx_http_upstream_process_request()
			ngx_http_upstream_process_upstream()
				ngx_http_upstream_process_request()
					ngx_http_upstream_store()
						ngx_create_temp_file()
						ngx_ext_rename_file()
					ngx_http_file_cache_free()
		u->input_filter_init()
		u->input_filter()
		ngx_http_upstream_process_body_in_memory()
	ngx_http_upstream_test_next()
		ngx_http_upstream_next()
		ngx_http_upstream_cache_send()
	ngx_http_upstream_intercept_errors()
	ngx_http_upstream_test_connect()
	ngx_http_upstream_process_headers()
		ngx_hash_find()
		ngx_http_upstream_copy_header_line()
	ngx_http_upstream_process_body_in_memory()
		c->recv()
		u->input_filter()
	ngx_http_upstream_upgrade()
	ngx_http_upstream_finalize_request()
		ngx_close_connection()
		ngx_http_file_cache_free()
		ngx_http_finalize_request()
/*}}}*/
ngx_http_busy_lock.h
ngx_http_busy_lock.c
ngx_http_upstream_round_robin.h
ngx_http_upstream_round_robin.c

ngx_http_special_response.c
ngx_http_cache.h
ngx_http_file_cache.c
ngx_http_parse.c
ngx_http_parse_time.c

ngx_http_spdy.h ngx_http_spdy.c
ngx_http_spdy_filter_module.c
ngx_http_spdy_module.h ngx_http_spdy_module.c

ngx_http_postpone_filter_module.c
ngx_http_copy_filter_module.c
ngx_http_header_filter_module.c
ngx_http_write_filter_module.c

src/http/modules/*{{{*/
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
/*}}}*/
src/mail
src/misc
src/os

ngx_modules:ngx_module_t[]* /*{{{*/
	ngx_core_module:ngx_module_t/*{{{*/
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
/*}}}*/
	ngx_errlog_module:ngx_module_t/*{{{*/
		ngx_errlog_module_ctx:ngx_core_module_t*
			ngx_string("errlog")
		ngx_errlog_commands:ngx_command_t[]
			ngx_string("error_log") ngx_error_log()
				cycle->new_log.file=ngx_conf_open_file()
				cycle->new_log.log_level=ngx_log_set_levels()
/*}}}*/
	ngx_conf_module:ngx_module_t/*{{{*/
		ngx_conf_commands:ngx_command_t[]
			ngx_string("include") ngx_conf_include()
				ngx_conf_full_name()
				ngx_open_glob()
				ngx_read_glob()
				ngx_conf_parse()
				ngx_close_glob()
		ngx_conf_flush_files()
			cycle->open_files.part->elts[i].flush()
/*}}}*/
	ngx_events_module:ngx_module_t/*{{{*/
		ngx_events_module_ctx:ngx_core_module_t*
			ngx_string("events")
			ngx_event_init_conf()
		ngx_events_commands:ngx_command_t[]
			ngx_string("events") ngx_events_block()
				ngx_event_max_module++
				*ctx=ngx_pcalloc(n*(void*))
				ngx_modules[i]->ctx->create_conf()
				cf->ctx=ctx
				cf->module_type=NGX_EVENT_MODULE
				cf->cmd_type=NGX_EVENT_CONF
				ngx_conf_parse()
				ngx_modules[i]->ctx->init_conf()
/*}}}*/
	ngx_event_core_module:ngx_module_t/*{{{*/
		ngx_event_core_module_ctx:ngx_event_module_t*
			ngx_string("event_core")
			ngx_event_core_create_conf()
				ecf:ngx_event_conf_t*
			ngx_event_core_init_conf()
				epoll_create()
				ecf->use=ngx_epoll_module->ctx_index
				ecf->name=ngx_epoll_module->name->data
		ngx_event_core_commands:ngx_command_t[]
			ngx_string("worker_connections") ngx_event_connections()
				ecf->connection=ngx_atoi()
				cycle->connection_n=
			ngx_string("connections") ngx_event_connections()
			ngx_string("use") ngx_event_use()
				ecf->use=ngx_module[m]->ctx_index
				ecf->name=ngx_module[m]->ctx->name
			ngx_string("multi_accept")
				ecf->multi_accept=ngx_flag_t
			ngx_string("accept_mutex")
				ecf->accept_mutex=ngx_flag_t
			ngx_string("accept_mutex_delay")
				ecf->accept_mutex_delay=ngx_msec_t
			ngx_string("debug_connection") ngx_event_debug_connection()
		ngx_event_module_init()
			ngx_timer_resolution=ccf->timer_resolution
			shm:ngx_shm_t
			shm:ngx_shm_alloc()
			ngx_accept_mutex=ngx_shmtx_create()
			ngx_connection_counter=
		ngx_event_process_init()
			ngx_user_accept_mutex=1
			ngx_accept_mutex_held=0
			ngx_accept_mutex_delay=ecf->accept_mutex_delay
			ngx_event_timer_init()
				ngx_event_timer_rbtree=ngx_rbtree_init()
				ngx_event_timer_mutex=ngx_mutex_init()
			ngx_modules[i]->ctx->actions.init()
			sa:struct sigaction
			sa.sa_handler=ngx_timer_signal_handler
			sigaction() setitimer()

			cycle->files_n=getrlimit()
			cycle->files=ngx_calloc(n*(ngx_connection_t*))
			cycle->connections=ngx_calloc(n*(ngx_connection_t*))
			cycle->read_events=ngx_calloc(n*(ngx_event_t*))
			cycle->write_events=ngx_calloc(n*(ngx_event_t*))
			cycle->free_connections=next
			cycle->free_connection_n=n

			c=ngx_get_connection()
			c->log=cycle->listening.elts[i].log
			c->listening=&cycle->listening.elts[i]
			c->read->log=c->log
			c->read->accept=1
			c->read->handler=ngx_event_accept
			ngx_add_event()
/*}}}*/
	ngx_kqueue_module
		ngx_core_module_ctx:ngx_core_module_t*
		ngx_core_commands:ngx_command_t[]
	ngx_regex_module
		ngx_core_module_ctx:ngx_core_module_t*
		ngx_core_commands:ngx_command_t[]
	ngx_http_module:ngx_module_t/*{{{*/
		ngx_http_module_ctx:ngx_core_module_t*
			ngx_string("http")
		ngx_http_commands:ngx_command_t[]
			ngx_string("http") ngx_http_block()
				ctx:ngx_http_conf_ctx_t*
				ctx=ngx_pcalloc()
				ngx_http_max_module++
				ctx->main_conf=ngx_pcalloc()
				ctx->srv_conf=ngx_pcalloc()
				ctx->loc_conf=ngx_pcalloc()
				ngx_modules[i]->ctx->create_main_conf()
				ngx_modules[i]->ctx->create_srv_conf()
				ngx_modules[i]->ctx->create_loc_conf()
				ngx_modules[i]->ctx->preconfiguration()
				cf->ctx=ctx
				cf->module_type=NGX_HTTP_MODULE
				cf->cmd_type=NGX_HTTP_MAIN_CONF
				ngx_conf_parse()
				ngx_modules[i]->ctx->init_main_conf()
				ngx_http_merge_servers()
					ngx_modules[i]->ctx->merge_srv_conf()
					ngx_modules[i]->ctx->merge_loc_conf()
					ngx_http_merge_locations()
						ngx_modules[i]->ctx->merge_loc_conf()
						ngx_http_merge_locations()
				ngx_http_init_locations()
					clcf->locations=ngx_queue_sort()
					ngx_http_init_locations()
					ngx_queue_split()
					cscf->named_locations=ngx_pcalloc(n*ngx_http_core_loc_conf_t**)
					ngx_queue_split()
					cscf->regex_locations=ngx_pcalloc(r*ngx_http_core_loc_conf_t**)
				ngx_http_init_static_location_trees()
					ngx_http_init_static_location_trees()
					ngx_http_join_exact_locations()
					ngx_http_create_locations_list()
					clcf->static_locations=ngx_http_create_locations_tree()
						ngx_queue_middle()
						node:ngx_http_location_tree_node_t*
						node->tree=ngx_http_create_locations_tree()
						node->left=ngx_http_create_locations_tree()
						node->right=ngx_http_create_locations_tree()
				ngx_http_init_phases()
					ngx_array_init(cmcf->phases[i].handlers)
				ngx_http_init_headers_in_hash()
					ngx_hash_init(cmcf->headers_in_hash)
				ngx_modules[i]->ctx->postconfiguration()
				ngx_http_variables_init_vars()
					cmcf->variables.elts[i].get_handler=
					cmcf->variables.elts[i].data=
					cmcf->variables_keys.elts[i]->index=i
					cmcf->variables_keys.elts[i]->index=i
					cmcf->variables_hash=ngx_hash_init()
				ngx_http_init_phase_handlers()
					cmcf->phase_engine.server_rewrite_index=
					cmcf->phase_engine.location_rewrite_index=
					cmcf->phase_engine.handlers[i].checker=
					cmcf->phase_engine.handlers[i].handler=
					cmcf->phase_engine.handlers[i].next=
					NGX_HTTP_POST_READ_PHASE
					ngx_http_core_generic_phase()
					NGX_HTTP_SERVER_REWRITE_PHASE
					ngx_http_core_rewrite_phase()

					NGX_HTTP_FIND_CONFIG_PHASE
					ngx_http_core_find_config_phase()
					NGX_HTTP_REWRITE_PHASE
					ngx_http_core_rewrite_phase()
					NGX_HTTP_POST_REWRITE_PHASE
					ngx_http_core_post_rewrite_phase()

					NGX_HTTP_PREACCESS_PHASE
					ngx_http_core_generic_phase()
					NGX_HTTP_ACCESS_PHASE
					ngx_http_core_access_phase()
					NGX_HTTP_POST_ACCESS_PHASE
					ngx_http_core_post_access_phase()

					NGX_HTTP_TRY_FILES_PHASE
					ngx_http_core_try_files_phase()
					NGX_HTTP_CONTENT_PHASE
					ngx_http_core_content_phase()
					NGX_HTTP_LOG_PHASE
					ngx_http_core_generic_phase()
				ngx_http_optimize_servers()
					ngx_sort(cmcf->ports.elts[i].addrs)
					ngx_http_server_names()
						ha=ngx_hash_keys_array_init()
						ngx_hash_add_key(cscf->server_names)
						cmcf->ports.elts[i].addrs.elts[j]->hash=ngx_hash_init()
						cmcf->ports.elts[i].addrs.elts[j]->wc_hash=ngx_hash_wildcard_init()
						cmcf->ports.elts[i].addrs.elts[j]->regex=ngx_palloc(n*ngx_http_server_name_t)
					ngx_http_init_listening()
						ngx_http_add_listening(cmcf->ports.elts[i].addrs.elts[j])
							ls=ngx_create_listening()
								ls:ngx_listening_t*
								ls=ngx_array_push(cycle->listening)
								ls->sockaddr=sa
								ls->socklen=socklen
								ls->addr_text=text
								ls->type=SOCK_STREAM
							ls->handler=ngx_http_init_connection
							ls->pool_size
							ls->log.data
							ls->log.handler
							ls->back_log
							ls->rcvbuf
							ls->sndbuf
							ls->keepalive
							ls->keepidle
							ls->keepintvl
							ls->keepcnt
							ls->accept_filter
							ls->deferred_accept
							ls->setfib
						ls->servers=ngx_pcalloc(ngx_http_port_t)
						ls->servers=ngx_http_add_addrs()
							ls->servers->addrs=ngx_pcalloc(n*ngx_http_in_addr_t)
							ls->servers->addrs[i].addr=
							ls->servers->addrs[i].conf.default_server=
							ls->servers->addrs[i].conf.ssl=
							ls->servers->addrs[i].conf.virtual_names=ngx_pcalloc(ngx_http_virtual_names_t)
							ls->servers->addrs[i].conf.virtual_names->names.hash=
							ls->servers->addrs[i].conf.virtual_names->names.wc_head=
							ls->servers->addrs[i].conf.virtual_names->names.wc_tail=
/*}}}*/
	ngx_http_core_module:ngx_module_t/*{{{*/
		ngx_http_core_module_ctx:ngx_http_module_t*
			ngx_http_core_preconfiguration()
				ngx_http_variables_add_core_vars()
					cmcf->variables_keys=ngx_pcalloc(n*ngx_hash_keys_arrays_t)
					cmcf->variables_keys->pool=cf->pool
					cmcf->variables_keys->temp_pool=cf->pool
					cmcf->variables_keys=ngx_hash_keys_array_init()
					cmcf->variables_keys=ngx_hash_add_key(ngx_http_core_variables)
			ngx_http_core_create_main_conf()
				cmcf:ngx_http_core_main_conf_t*
			ngx_http_core_init_main_conf()
			ngx_http_core_create_srv_conf()
				cscf:ngx_http_core_srv_conf_t*
			ngx_http_core_merge_srv_conf()
			ngx_http_core_create_loc_conf()
				clcf:ngx_http_core_loc_conf_t*
			ngx_http_core_merge_loc_conf()
		ngx_http_core_commands:ngx_command_t[]
			ngx_string("variables_hash_max_size")
				cmcf->variables_hash_max_size=ngx_uint_t
			ngx_string("variables_hash_bucket_size")
				cmcf->variables_hash_bucket_size=ngx_uint_t
			ngx_string("variables_names_hash_max_size")
				cmcf->variables_names_hash_max_size=ngx_uint_t
			ngx_string("variables_names_hash_bucket_size")
				cmcf->variables_names_hash_bucket_size=ngx_uint_t

			ngx_string("server") ngx_http_core_server()
				ngx_pcalloc()
				ctx:ngx_http_conf_ctx_t*
				ctx->main_conf=cf->ctx->main_conf
				ctx->srv_conf=ngx_pcalloc()
				ctx->loc_conf=ngx_pcalloc()
				ngx_modules[i]->ctx->create_srv_conf()
				ngx_modules[i]->ctx->create_loc_conf()
				ngx_array_push(cmcf->servers)
				cf->ctx=ctx
				cf->cmd_type=NGX_HTTP_SRV_CONF
				ngx_conf_parse()
				ngx_sock_ntop()
				ngx_http_add_listen()
					cmcf->ports=ngx_array_create(2*ngx_http_conf_port_t)
					cmcf->ports.elts[i]=ngx_array_push()
					ngx_http_add_addresses()
					ngx_http_add_address()
						cmcf->ports.elts[i]->addrs=ngx_array_init(4*ngx_http_conf_addr_t)
						cmcf->ports.elts[i]->addrs.elts[j]=ngx_array_push()
						ngx_http_add_server()
							cmcf->ports.elts[i]->addrs.elts[j]->servers=ngx_array_push()
							cmcf->ports.elts[i]->addrs.elts[j]->servers.elts[k]=ngx_array_push()
							cmcf->ports.elts[i]->addrs.elts[j]->servers.elts[k]=cscf
			ngx_string("connection_pool_size")
				cscf->connection_pool_size=size_t
			ngx_string("request_pool_size")
				cscf->request_pool_size=size_t

			ngx_string("client_header_timeout")
				cscf->client_header_timeout=ngx_msec_t
			ngx_string("client_header_buffer_size")
				cscf->client_header_buffer_size=size_t
			ngx_string("large_client_header_buffers")
				cscf->large_client_header_buffers=ngx_bufs_t

			ngx_string("optimize_server_names")
				cscf->server_name_in_redirect=ngx_flag_t
			ngx_string("ignore_invalid_headers")
				cscf->ignore_invalid_headers=ngx_flag_t

			ngx_string("merge_slashes")
				cscf->merge_slashes=ngx_flag_t
			ngx_string("underscores_in_headers")
				cscf->underscores_in_headers=ngx_flag_t

			ngx_string("location") ngx_http_core_location()
				ngx_pcalloc()
				ctx:ngx_http_conf_ctx_t*
				ctx->main_conf=cf->ctx->main_conf
				ctx->srv_conf=cf->ctx->srv_conf
				ctx->srv_conf=ngx_pcalloc()
				ngx_modules[i]->ctx->create_loc_conf()
				ngx_http_core_regex_location()
				ngx_http_add_location(clcf->locations)
					clcf->locaitons=ngx_palloc(ngx_http_location_queue_t)
					clcf->locaitons=ngx_queue_init()
					ngx_queue_insert_tail()
				ngx_conf_parse()
			ngx_string("listen") ngx_http_core_listen()
				ngx_http_add_listen()
			ngx_string("server_name") ngx_http_core_server_name()
				ngx_array_push(cscf->server_names)

			ngx_string("types_hash_max_size")
				clcf->types_hash_max_size=ngx_uint_t
			ngx_string("types_hash_bucket_size")
				clcf->types_hash_bucket_size=ngx_uint_t
			ngx_string("types") ngx_http_core_types()
			ngx_string("default_type")
				clcf->default_type=ngx_str_t

			ngx_string("root") ngx_http_core_root()
			ngx_string("alias") ngx_http_core_root()

			ngx_string("limit_except") ngx_http_core_limit_except()
			ngx_string("client_max_body_size")
				clcf->client_max_body_size=off_t
			ngx_string("client_body_buffer_size")
				clcf->client_body_buffer_size=size_t
			ngx_string("client_body_timeout")
				clcf->client_body_timeout=ngx_msec_t
			ngx_string("client_body_temp_path")
				clcf->client_body_temp_path=ngx_path_t
			ngx_string("client_body_in_file_only")
				clcf->client_body_in_file_only=ngx_conf_enum_t
			ngx_string("client_body_in_single_buffer")
				clcf->client_body_in_single_buffer=ngx_flag_t

			ngx_string("sendfile")
				clcf->sendfile=ngx_flag_t
			ngx_string("sendfile_max_chunk")
				clcf->sendfile_max_chunk=size_t
			ngx_string("aio")
				clcf->aio=ngx_conf_enum_t
			ngx_string("read_ahead")
				clcf->read_ahead=size_t
			ngx_string("directio") ngx_http_core_directio()
			ngx_string("directio_alignment")
				clcf->directio_alignment=off_t
			ngx_string("tcp_nopush")
				clcf->tcp_nopush=ngx_flag_t
			ngx_string("tcp_nodelay")
				clcf->tcp_nodelay=ngx_flag_t
			ngx_string("send_timeout")
				clcf->send_timeout=ngx_msec_t
			ngx_string("send_lowat")
				clcf->send_lowat=size_t
			ngx_string("postpone_output")
				clcf->postpone_output=size_t
			ngx_string("limit_rate")
				clcf->limit_rate=size_t
			ngx_string("limit_rate_after")
				clcf->limit_rate_after=size_t
			ngx_string("keepalive_timeout") ngx_http_core_keepalive()
			ngx_string("keepalive_requests")
				clcf->keepalive_requests=ngx_int_t
			ngx_string("keepalive_disable")
				clcf->keepalive_disable=ngx_conf_bitmask_t
			ngx_string("satisfy")
				clcf->satisfy=ngx_conf_enum_t
			ngx_string("satisfy_any")
				clcf->satisfy_any=ngx_flag_t
			ngx_string("internal") ngx_http_core_internal()
			ngx_string("lingering_close")
				clcf->lingering_close=ngx_conf_enum_t
			ngx_string("lingering_time")
				clcf->lingering_time=ngx_msec_t
			ngx_string("lingering_timeout")
				clcf->lingering_timeout=ngx_msec_t
			ngx_string("reset_timeout_connection")
				clcf->reset_timeout_connection=ngx_flag_t
			ngx_string("server_name_in_redirect")
				clcf->server_name_in_redirect=ngx_flag_t
			ngx_string("port_in_redirect")
				clcf->port_in_redirect=ngx_flag_t
			ngx_string("msie_padding")
				clcf->msie_padding=ngx_flag_t
			ngx_string("msis_refresh")
				clcf->msis_refresh=ngx_flag_t
			ngx_string("log_not_found")
				clcf->log_not_found=ngx_flag_t
			ngx_string("log_subrequest")
				clcf->log_subrequest=ngx_flag_t
			ngx_string("recursive_error_pages")
				clcf->recursive_error_pages=ngx_flag_t
			ngx_string("server_tokens")
				clcf->server_tokens=ngx_flag_t
			ngx_string("if_modified_since")
				clcf->if_modified_since=ngx_conf_enum_t
			ngx_string("max_ranges")
				clcf->max_ranges=ngx_int_t
			ngx_string("chunked_transfer_encoding")
				clcf->chunked_transfer_encoding=ngx_flag_t
			ngx_string("etag")
				clcf->etag=ngx_flag_t
			ngx_string("error_page") ngx_http_core_error_page()
			ngx_string("try_files") ngx_http_core_try_files()
			ngx_string("post_action")
				clcf->post_action=ngx_str_t
			ngx_string("error_log") ngx_http_core_error_log()
			ngx_string("open_file_cache") ngx_http_core_open_file_cache()
			ngx_string("open_file_cache_valid")
				clcf->open_file_cache_valid=time_t
			ngx_string("open_file_cache_retest")
				clcf->open_file_cache_retest=time_t
			ngx_string("open_file_cacahe_min_uses")
				clcf->open_file_cacahe_min_uses=ngx_int_t
			ngx_string("open_file_cache_errors")
				clcf->open_file_cache_errors=ngx_flag_t
			ngx_string("open_file_cache_events")
				clcf->open_file_cache_events=ngx_flag_t
			ngx_string("resolver") ngx_http_core_resolver()
			ngx_string("resolver_timeout")
				clcf->resolver_timeout=ngx_msec_t
			ngx_string("gzip_vary")
				clcf->gzip_vary=ngx_flag_t
			ngx_string("gzip_http_version")
				clcf->gzip_http_version=ngx_conf_enum_t
			ngx_string("gzip_proxied")
				clcf->gzip_proxied=ngx_conf_bitmask_t
			ngx_string("gzip_disable") ngx_http_gzip_disable()
				clcf->gzip_disable=ngx_flag_t
			ngx_string("disable_symlinks") ngx_http_disable_symlinks()
/*}}}*/
	ngx_http_log_module
		ngx_core_module_ctx:ngx_core_module_t*
		ngx_core_commands:ngx_command_t[]
	ngx_http_upstream_module
		ngx_core_module_ctx:ngx_core_module_t*
		ngx_core_commands:ngx_command_t[]

	ngx_http_static_module/*{{{*/
		ngx_http_static_module:ngx_http_module_t
			ngx_http_static_module_ctx:ngx_http_module_t*
				ngx_http_static_init()
					h:ngx_http_handler_pt*
					h#ngx_array_push(&cmcf->phases[NGX_HTTP_CONTENT_PHASE].handlers)
					*h=ngx_http_static_handler
						ngx_http_map_uri_to_path()
						of:ngx_open_file_info_t
						ngx_http_set_disable_symlinks()
						ngx_open_cached_file()
						r->headers_out.location=
						return NGX_HTTP_MOVED_PERMANENTLY

						ngx_http_discard_request_body()
						r->headers_out.status=NGX_HTTP_OK
						r->headers_out.content_length_n=of.size
						r->headers_out.last_modified_time=of.mtime
						ngx_http_set_etag()
						ngx_http_set_content_type()
						r->allow_ranges=1
						ngx_http_send_header()

						b:ngx_buf_t*
						b->file=ngx_file_t
						b->file_pos=0
						b->file_last=of.size
						b->in_file=b->file_last
						b->last_buf=1
						b->last_in_chain=1
						b->file->fd=of.fd
						b->file->name=path
						b->file->log=log
						b->file->directio=of.directio

						out:ngx_chain_t
						out.buf=b
						out.next=NULL
						ngx_http_output_filter()
/*}}}*/
	ngx_http_autoindex_module
	ngx_http_index_module
	ngx_http_auto_basic_module
	ngx_http_access_module
	ngx_http_limit_conn_module
	ngx_http_limit_req_module
	ngx_http_geo_module
	ngx_http_map_module
	ngx_http_split_clients_module
	ngx_http_referer_module
	ngx_http_rewrite_module
	ngx_http_proxy_module
	ngx_http_fastcgi_module
	ngx_http_uwsgi_module
	ngx_http_scgi_module
	ngx_http_memcached_module
	ngx_http_empty_gif_module
	ngx_http_browser_module
	ngx_http_upstream_ip_hash_module
	ngx_http_upstream_least_conn_module
	ngx_http_upstream_keepalive_module

	ngx_http_write_filter_module/*{{{*/
		ngx_http_write_filter_module_ctx:ngx_http_module_t
			ngx_http_write_filter_init()
				ngx_http_top_body_filter=ngx_http_write_filter
					ngx_http_write_filter()
						c->send_chain()
/*}}}*/
	ngx_http_header_filter_module/*{{{*/
		ngx_http_header_filter_module_ctx:ngx_http_module_t*
			ngx_http_header_filter_init()
				ngx_http_top_header_filter=ngx_http_header_filter
					ngx_http_write_filter()
/*}}}*/
	ngx_http_chunked_filter_module/*{{{*/
		ngx_http_chunked_filter_module:ngx_module_t
			ngx_http_chunked_filter_module_ctx:ngx_http_module_t*
				ngx_http_chunked_filter_init()
					ngx_http_top_header_filter:ngx_http_chunked_header_filter
					ngx_http_top_body_filter:ngx_http_chunked_body_filter
						ngx_alloc_chain_link()
						ngx_chain_get_free_buf()
						ngx_chain_update_chains()
/*}}}*/
	ngx_http_range_header_filter_module
	ngx_http_gzip_filter_module
	ngx_http_postpone_filter_module/*{{{*/
		ngx_http_postpone_filter_module:ngx_http_module_t
			ngx_http_postpone_filter_module_ctx:ngx_http_module_t
				ngx_http_postpone_filter_init()
					ngx_http_top_body_filter=ngx_http_postpone_filter
						ngx_http_post_request()
						ngx_http_postpone_filter_add()
							pr:ngx_http_postponed_request_t*
							ngx_chain_add_copy()
/*}}}*/
	ngx_http_ssi_filter_module
	ngx_http_charset_filter_module
	ngx_http_userid_filter_module
	ngx_http_headers_filter_module
	ngx_http_copy_filter_module/*{{{*/
		ngx_http_copy_filter_module:ngx_module_t
			ngx_http_copy_filter_module_ctx:ngx_http_module_t*
				ngx_http_copy_filter_init()
					ngx_http_top_body_filter=ngx_http_copy_filter
						ngx_pcalloc()
						ctx:ngx_output_chain_ctx_t*
						ctx->sendfile=c->sendfile
						ctx->need_in_memmory=r->main_filter_need_in_memory
						ctx->need_in_temp=r->filter_need_temporary
						ctx->alignment=clcf->directio_alignment
						ctx->pool=r->pool
						ctx->bufs=conf->bufs
						ctx->tag=&ngx_http_copy_filter_module
						ctx->output_filter=ngx_http_next_body_filter
						ctx->filter_ctx=r
						ctx->aio_handler=ngx_http_copy_aio_handler
						ctx->aio=r->aio
						ngx_output_chain()
				ngx_http_copy_filter_create_conf()
				ngx_http_copy_filter_merge_conf()
			ngx_http_copy_filter_commands:ngx_command_t[]
				ngx_string("output_buffers")
					clcf->bufs=ngx_bufs_t
/*}}}*/
	ngx_http_range_body_filter_module/*{{{*/
		ngx_http_range_body_filter_module_ctx:ngx_http_module_t*
			ngx_http_range_body_filter_init()
				ngx_http_top_header_filter=ngx_http_range_header_filter
					ngx_http_range_parse()
					r->headers_out.status=NGX_HTTP_PARTIAL_CONTENT
					r->headers_out.status_line.len=0
					ngx_http_range_singlepart_header()
					ngx_http_range_multipart_header()
					ngx_http_range_not_satisfiable()
					r->headers_out.accept_ranges
				ngx_http_top_body_filter=ngx_http_range_body_filter
					ngx_http_range_singlepart_body()
					ngx_http_range_test_overlapped()
					ngx_http_range_multipart_body()
/*}}}*/
	ngx_http_not_modified_filter_module/*{{{*/
		ngx_http_not_modified_filter_module_ctx:ngx_http_module_t*
			ngx_http_not_modified_filter_init()
				ngx_http_top_header_filter=ngx_http_not_modified_header_filter
					ngx_http_test_if_unmodified()
					ngx_http_test_if_match()
					ngx_http_test_if_modified()
					r->headers_out.status=NGX_HTTP_NOT_MODIFIED
					r->status_line.len=0
					r->content_type.len=0
					ngx_http_next_header_filter()
/*}}}*/
/*}}}*/

@main()/*{{{*/
	ngx_debug_init()
	ngx_strerror_init()
		ngx_sys_errlist:ngx_str_t*
		ngx_sys_errlist#malloc()
		ngx_sys_errlist[i]=strerror(i)
	ngx_get_options()
		ngx_show_version=1
		ngx_show_help=1
		ngx_show_version=1
		ngx_show_configure=1
		ngx_quite_mode=1
		ngx_prefix=1
		ngx_conf_file=1
		ngx_conf_params=1
		ngx_signal=1
		ngx_process=1
	ngx_time_init()
		ngx_cached_err_log_time.len=
		ngx_cached_http_time.len=
		ngx_cached_http_log_time.len=
		ngx_cached_http_log_iso8601.len=
		ngx_cached_time=
		ngx_time_update()
			ngx_gettimeofday()
			ngx_cached_err_log_time.data=
			ngx_cached_http_time.data=
			ngx_cached_http_log_time.data=
			ngx_cached_http_log_iso8601.data=
			ngx_cached_time=
	ngx_regex_init()
		pcre_malloc=ngx_regex_malloc
		pcre_free=ngx_regex_free
	ngx_pid=ngx_getpid()
	ngx_ssl_init()
		OPENSSL_config()
		SSL_libary_init()
		SSL_load_error_strings()
		OpenSSL_add_all_algorithms()
	ngx_cycle=&init_cycle
	init_cycle.log=ngx_log_init()
		ngx_log.file=&ngx_log_file
		ngx_log.log_level=NGX_LOG_NOTICE
		ngx_log_file.fd=ngx_open_file()
	init_cycle.pool=ngx_create_pool()
	ngx_save_argv()
		ngx_os_argv=argv
		ngx_argc=argc
		ngx_argv=argv
		ngx_os_environ=environ
	ngx_process_options()
		cycle->conf_prefix=ngx_prefix||NGX_CONF_PREFIX
		cycle->prefix=ngx_prefix||NGX_PREFIX
		cycle->conf_file=ngx_conf_file||NGX_CONF_PATH
		cycle->conf_param=ngx_conf_param
	ngx_os_init()
		ngx_linux_kern_ostype=uname()
		ngx_linux_kern_osrelease=uname()
		ngx_os_io=ngx_linux_io
		ngx_pagesize=getpagesize()
		ngx_cacheline_size=NGX_CPU_CACHE_LINE
		ngx_pagesize_shift=
		ngx_ncpu=sysconf()
		ngx_max_sockets=getrlimit()
		ngx_inherited_nonblocking=1
		srandom(ngx_time())
	ngx_crc32_table_init()
		ngx_crc32_table_short=
	ngx_add_inherited_sockets()
		cycle->listening=ngx_array_init(ngx_listening_t)
		ls=ngx_array_push(&cycle->listening)
		ls->fd=s
		ngx_set_inherited_sockets()
			cycle->listening.elts[i].sockaddr=getsockname()
			cycle->listening.elts[i].socklen=getsockname()
			cycle->listening.elts[i].addr_text_max_len=
			cycle->listening.elts[i].addr_text=ngx_sock_ntop()
			cycle->listening.elts[i].rcvbuf=getsockopt()
			cycle->listening.elts[i].sndbuf=getsockopt()
			cycle->listening.elts[i].accept_filter=getsockopt()
			cycle->listening.elts[i].deferred_accept=getsockopt()
	ngx_max_module++
	cycle=ngx_init_cycle()/*{{{*/
		ngx_timezone_update()
		ngx_time_update()
		cycle:ngx_cycle_t*
		cycle=ngx_pcalloc()
		cycle->pool=ngx_create_pool()
		cycle->log=log
		cycle->new_log.log_level=NGX_LOG_ERR
		cycle->old_cycle=old_cycle
		cycle->conf_prefix=old_cycle->conf_prefix
		cycle->prefix=old_cycle->prefix
		cycle->conf_file=old_cycle->conf_file
		cycle->conf_param=old_cycle->conf_param
		cycle->paths.elts=ngx_pcalloc(n*(ngx_path_t*))
		cycle->open_files=ngx_list_init(n*ngx_open_file_t)
		cycle->shared_memory=ngx_list_init(n*ngx_shm_zone_t)
		cycle->listening.elts=ngx_list_init(n*ngx_listening_t)
		cycle->resuable_connections_queue=ngx_queue_init()
		cycle->conf_ctx=ngx_pcalloc(ngx_max_module*(void*))
		cycle->hostname=gethostname()
		cycle->conf_ctx[i]=ngx_modules[i]->ctx->create_conf()

		conf:ngx_conf_t
		conf.args=ngx_array_create(10*ngx_str_t)
		conf.temp_pool=ngx_create_pool()
		conf.ctx=cycle->conf_ctx
		conf.cycle=cycle
		conf.pool=pool
		conf.log=log
		conf.module_type=NGX_CORE_MODULE
		conf.cmd_type=NGX_MAIN_CONF
		ngx_conf_param()
			cf->conf_file=ngx_memzero()
			cf->conf_file->buffer=ngx_buf_t
			cf->conf_file->buffer.pos=cycle->conf_param->data
			ngx_conf_parse()
		ngx_conf_parse()
			cf->conf_file=ngx_conf_file_t
			cf->conf_file->buffer=ngx_buf_t
			cf->conf_file->buffer.start=ngx_alloc()
			cf->conf_file->file.fd=ngx_open_file()
			cf->conf_file->file.info=ngx_fd_info()
			cf->conf_file->file.name=name
			cf->conf_file->file.offset=0
			cf->conf_file->file.line=1
			ngx_conf_read_token()
				ngx_memmove()
				ngx_read_file()
				ch=cf->conf_file->buffer.pos++
				cf->conf_file->line++
				cf->args.elts[i]=ngx_array_push()
				cf->args.elts[i].data=ngx_pcalloc()
			cf->handler()
			ngx_conf_handler()
				ngx_modules[i]->commands[j]->set()
			ngx_free()
			ngx_close_file()
		ngx_modules[i]->ctx->init_conf()

		ngx_create_pidfile()
			ngx_write_file(ngx_pid)
		ngx_test_lockfile()
		ngx_create_paths()
			cycle->paths.elts[i]=ngx_create_dir()
			chown() chmod()
		cycle->new_log.file=ngx_conf_open_file()
		cycle->open_files.part->elts[i].fd=ngx_open_file()
		cycle->shared_memory.part->elts[i].shm.log=log
		ngx_shm_alloc(cycle->shared_memory.part->elts[i].shm)
			mmap()
		ngx_init_zone_pool(cycle->shared_memory.part->elts[i])
			ngx_shmtx_create()
			ngx_slab_init()
		cycle->shared_memory.part->elts[i].init()
		ngx_open_listening_sockets()
			cycle->listening.elts[i].fd=ngx_socket()
			ngx_nonblocking() bind() listen()
		ngx_configure_listening_sockets()
			setsockopt(cycle->listening.elts[i].rcvbuf)
			setsockopt(cycle->listening.elts[i].sndbuf)
			setsockopt(cycle->listening.elts[i].keepalive)
			setsockopt(cycle->listening.elts[i].keepidle)
			setsockopt(cycle->listening.elts[i].keepintvl)
			setsockopt(cycle->listening.elts[i].keepcnt)
			setsockopt(cycle->listening.elts[i].baclog)
			setsockopt(cycle->listening.elts[i].delete_deferred)
			setsockopt(cycle->listening.elts[i].add_deferred)
		ngx_modules[i]->init_module()
		ngx_temp_pool=ngx_create_pool()
		ngx_array_push(ngx_old_cycle)
/*}}}*/
	ngx_signal_process()
		ngx_os_signal_process()
	ngx_os_status()
	ngx_cycle=cycle
	ngx_process=NGX_PROCESS_MASTER
	ngx_init_signals()
		sigaction(signals)
	ngx_daemon()
		fork() setsid() umask() open("/dev/null")
	ngx_daemonized=1
	ngx_create_pidfile()
		ngx_write_file(ngx_pid)
	ngx_master_process_cycle()/*{{{*/
		sigprocmask()
		ngx_setproctitle()
		ngx_start_worker_processes()
			ngx_spawn_process()
				ngx_processes[s].channel=socketpair()
				fork() ngx_worker_process_cycle()
				ngx_processes[s].channel=socketpair()
				ngx_processes[s].pid=pid
				ngx_last_process++
			ngx_pass_open_channel()
				ngx_write_channel()
					sendmsg()
		ngx_start_cache_manager_processes()
			ngx_spawn_process()
			ngx_pass_open_channel()
			ngx_spawn_process()
			ngx_pass_open_channel()
		for(){
			setitimer()
			sigsuspend()
			ngx_time_update()
				ngx_current_msec=ngx_gettimeofday()
				ngx_cached_err_log_time.data=
				ngx_cached_http_time.data=
				ngx_cached_http_log_time.data=
				ngx_cached_http_log_iso8601.data=
				ngx_cached_time=
			ngx_reap_children()
				ngx_spawn_process()
				ngx_pass_open_channel()
			ngx_master_process_exit()
				ngx_delete_pidfile()
				ngx_modules[i]->exit_master()
				ngx_close_listening_sockets()
				ngx_destroy_pool()
			ngx_signal_worker_processes()
				ngx_write_channel()
			ngx_close_socket()
			ngx_start_worker_processes()
			ngx_start_cache_manager_processes()
			ngx_init_cycle()
			ngx_reopen_files()
				cycle->open_files.part->elts[i].flush()
				cycle->open_files.part->elts[i].fd=ngx_open_file()
				ngx_file_info() chown() chmod() fcntl() ngx_close_file() dup2()
			ngx_exec_new_binary()
				ngx_set_environment()
				ngx_rename_file()
				ngx_execute()
					ngx_spawn_process()
						ngx_execute_proc()
							execve()
		}
/*}}}*/
	ngx_single_process_cycle()/*{{{*/
		ngx_set_environment()
		ngx_modules[i]->init_process()
		for(){
			ngx_process_events_and_timers()
			ngx_master_process_exit()
			ngx_init_cycle()
			ngx_reopen_files()
		}
/*}}}*/
/*}}}*/
@ngx_signal_handler()/*{{{*/
	ngx_time_sigsafe_update()
		ngx_trylock(&ngx_time_lock)
		ngx_gettimeofday() ngx_gmtime()
		slot++
		cached_err_log_time[slot]=ngx_sprintf()
		ngx_unlock(&ngx_time_lock)
	ngx_quit=1
	ngx_terminate=1
	ngx_noaccept=1
	ngx_reconfigure=1
	ngx_reopen=1
	ngx_change_binary=1
	ngx_sigalarm=1
	ngx_sigio=1
	ngx_reap=1
	ngx_process_get_status()
		waitpid()
		ngx_processes[i].status=status
		ngx_processes[i].exited=1
		ngx_unlock_mutexes()
		ngx_shmtx_force_unlock(&ngx_accept_mutex, pid)
		ngx_shmtx_force_unlock(&shm_zone[i].shm.addr->mutex, pid)
	ngx_set_errno()
/*}}}*/
fork() ngx_cache_manager_process_cycle()/*{{{*/
	ngx_process=NGX_PROCESS_HELPER
	ngx_close_listening_sockets()
	ngx_worker_process_init()
	ngx_setproctitle()
	ngx_add_timer()
	for(){
		ngx_reopen_files()
		ngx_process_events_and_timers()
			ngx_process_events()
			ngx_event_expire_timers()
	}
/*}}}*/
@ngx_cache_manager_process_handler()/*{{{*/
	ngx_cycle->paths.elts[i]->manager()
	ngx_time_update()
	ngx_add_timer()
/*}}}*/
@ngx_cache_loader_process_handler()/*{{{*/
	ngx_cycle->paths.elts[i]->loader()
	ngx_time_update()
	exit(0)
/*}}}*/
@ngx_channel_handler()/*{{{*/
	ngx_read_channel()
	ngx_quit=1
	ngx_terminate=1
	ngx_reopen=1
	ngx_processes[i].pid=ch.pid
	ngx_processes[i].channel[0]=ch.fd
/*}}}*/
fork() ngx_worker_process_cycle()/*{{{*/
	ngx_worker_process_init()
		ngx_set_environment()
		setpriority() setrlimit()
		setgid() initgroups() setuid()
		ngx_setaffinity()
		prctl() chdir() sigprocmask()
		ngx_modules[i]->init_process()
		ngx_add_channel_event()
			ngx_get_connection()
			ngx_add_conn()
			ev->handler=ngx_channel_handler
	ngx_setproctitle()
	for(){
		ngx_worker_process_exit()
			ngx_modules[i]->exit_process()
		ngx_process_events_and_timers()
			ngx_event_find_timer()
				ngx_mutex_lock()
				ngx_rbtree_min()
				ngx_mutex_unlock()
			ngx_trylock_accept_mutex()
			ngx_process_events() ngx_epoll_process_events()
				epoll_wait()
				ngx_time_update()
				ngx_mutex_lock(ngx_posted_events_mutex)
				ngx_locked_post_event()
				rev->handler()
				wev->handler()
				ngx_mutex_unlock(ngx_posted_events_mutex)
			ngx_event_process_posted(ngx_posted_accept_events)
				ngx_delete_posted_event()
				ev->handler()
			ngx_shmtx_unlock(ngx_accept_mutex)
			ngx_event_expire_timers()
				ngx_mutex_lock(ngx_event_timer_mutex)
				ngx_rbtree_min() ngx_rbtree_delete()
				ev->handler()
				ngx_mutex_unlock(ngx_event_timer_mutex)
			ngx_event_process_posted(ngx_posted_events)
				ngx_delete_posted_event()
				ev->handler()
		ngx_setproctitle()
		ngx_close_listening_sockets()
			ngx_free_connection()
			ngx_close_socket()
			ngx_delete_file()
		ngx_reopen_files()
			cycle->open_files.part->elts[i].flush()
			cycle->open_files.part->elts[i].fd=ngx_open_file()
			ngx_file_info() chown() chmod() fcntl() ngx_close_file() dup2()
	}
/*}}}*/
@ngx_timer_signal_handler()/*{{{*/
	ngx_event_timer_alarm=1
/*}}}*/

@ngx_event_accept()/*{{{*/
	s=accept()
	ngx_stat_accepted++
	ngx_stat_handled++
	ngx_stat_active++
	c:ngx_connection_t*
	c=ngx_get_connection()
		c=cycle->free_connections
		cycle->free_connection_n--
		c->fd=s
		c->log=log
	c->pool=ngx_create_pool()
	c->sockaddr=sa
	log=ngx_pcalloc()
	c->recv=ngx_recv
	c->send=ngx_send
	c->recv_chain=ngx_recv_chain
	c->send_chain=ngx_send_chain
	c->log=log
	c->pool->log=log
	c->socklen=socklen
	c->listening=ls
	c->local_sockaddr=ls->sockaddr
	c->read->log=log
	c->write->log=log
	c->number=ngx_connection_counter++
	c->add_text=ngx_sock_ntop()
	ngx_add_conn()
	ls->handler=ngx_http_init_connection

		hc:ngx_http_connection_t*
		hc=ngx_pcalloc()
		c->data=hc
		hc->addr_conf=c->listening->servers->addrs[i].conf
		hc->conf_ctx=hc->addr_conf->default_server->ctx
		ctx:ngx_http_log_ctx_t*
		ctx=ngx_palloc()
		ctx->connection=c
		ctx->request=NULL
		ctx->current_request=NULL
		c->log->connection=c->number
		c->log->handler=ngx_http_log_error
		c->log->data=ctx
		c->log->action="waiting for request"
		c->log_error=NGX_ERROR_INFO
		c->read->handler=ngx_http_wait_request_handler
		c->write->handler=ngx_http_empty_handler
		c->log->action="SSL handshaking"
		c->read->handler=ngx_http_ssl_handshake

		ngx_post_event(ngx_posted_events)
		c->read_handler()
		ngx_add_timer(c->read)
		ngx_reusable_connection(c,1)
		ngx_handle_read_event(c->read)
/*}}}*/
@ngx_http_wait_request_handler()/*{{{*/
	c->buffer=ngx_create_temp_buf()
	c->recv()
	c->log->action="read client request line"
	ngx_reusable_connection(c,0)
	c->data=ngx_http_create_request()
		c->request++
		r=ngx_pcalloc(ngx_http_request_t*)
		r->pool=ngx_create_pool()
		r->http_connection=hc
		r->signature=NGX_HTTP_MODULE
		r->connection=c
		r->main_conf=hc->conf_ctx->main_conf
		r->srv_conf=hc->conf_ctx->srv_conf
		r->loc_conf=hc->conf_ctx->loc_conf
		r->read_event_handler=ngx_http_block_reading
		r->header_in=c->buffer
		r->headers_out.headers=ngx_list_init(20*ngx_table_elt_t)
		r->ctx=ngx_pcalloc(n*(void*))
		r->variables=ngx_pcalloc(n*ngx_http_variable_value_t)
		r->main=r
		r->count=1
		r->start_msec=ngx_timeofday()
		r->method=NGX_HTTP_UNKNOWN
		r->log_handler=ngx_http_log_error_handler
		c->log->data->request=r
		c->log->data->current_request=r
	c->read->handler=ngx_http_process_request_line()
	ngx_http_process_request_line()
		ngx_http_read_request_header()
			c->read()
		ngx_http_parse_request_line()
			r->method=NGX_HTTP_GET
		r->request_line=ngx_str_t
		r->request_length=ngx_int_t
		r->method_name=ngx_str_t
		r->http_protocol=ngx_str_t
		ngx_http_process_request_uri()
			r->uri=ngx_str_t
			ngx_http_parse_complex_uri()
			r->unparsed_uri=ngx_str_t
			r->exten=ngx_str_t
			r->args=ngx_str_t
			ngx_http_set_exten()
		r->headers_in.headers=ngx_list_init(20*ngx_table_elt_t)
		c->log->action="reading client request headers"
		c->read->handler=ngx_http_process_request_headers
		ngx_http_alloc_large_header_buffer()
		ngx_http_process_request_headers()
			ngx_http_read_request_header()
			ngx_http_parse_header_line()
			r->request_length+=
			h:ngx_table_elt_t*
			h=ngx_list_push(r->headers_in.headers)
			h->hash=
			h->key=ngx_str_t
			h->value=ngx_str_t
			hh:ngx_http_header_t*
			hh=ngx_hash_find(cmcf->headers_in_hash)
			hh->handler()
			ngx_http_process_request_header()
				ngx_http_set_virtual_server()
					ngx_http_find_virtual_server()
						ngx_hash_find_combined(hc->addr_conf->virtual_names->names)
						ngx_http_regex_exec()
					r->srv_conf=cscf->srv_conf
					r->loc_conf=cscf->loc_conf
			ngx_http_process_request()
				ngx_del_timer()
				c->read_handler=ngx_http_request_handler
				c->write->handler=ngx_http_request_handler
				r->read_event_handler=ngx_http_block_reading
				ngx_http_handler()
					r->keepalive=1
					r->lingering_cloase=1
					r->phase_handler=0
					r->valid_location=1
					r->write_event_handler=ngx_http_core_run_phases
					ngx_http_core_run_phases()
						cmcf->phase_engine.handlers[r->phase_handler].checker()
						NGX_HTTP_POST_READ_PHASE ngx_http_core_generic_phase()
							ph->handler()
							NGX_OK?r->phase_handler=ph->next
							NGX_DECLINED?r->phase_handler++
							NGX_AGAIN?NGX_OK
							NGX_DONE?NGX_OK
							ngx_http_finalize_request()
						NGX_HTTP_SERVER_REWRITE_PHASE ngx_http_core_rewrite_phase()
							ph->handler() ngx_http_rewrite_handler()
							NGX_DECLINED?r->phase_handler++
							NGX_DONE?NGX_OK
							ngx_http_finalize_request()
						NGX_HTTP_FIND_CONFIG_PHASE ngx_http_core_find_config_phase()
							ngx_http_core_find_location()
								ngx_http_core_find_static_location(clcf->static_locations)
									r->loc_conf=node->exact->loc_conf
									r->loc_conf=node->inclusive->loc_conf
								ngx_http_core_find_location()
								ngx_http_regex_exec(clcf->regex_locations->regex)
								r->loc_conf=clcf->loc_conf
								ngx_http_core_find_location()
							ngx_http_update_location_config()
								r->connection->log=clcf->error_log
								r->connection->sendfile=1
								r->keepalive=0
								r->content_handler=clcf->handler
							r->phase_handler++
						NGX_HTTP_REWRITE_PHASE ngx_http_core_rewrite_phase()
							ph->handler() ngx_http_rewrite_handler()
							NGX_DECLINED?r->phase_handler++
							NGX_DONE?NGX_OK
							ngx_http_finalize_request()
						NGX_HTTP_POST_REWRITE_PHASE ngx_http_core_post_rewrite_phase()
							r->phase_handler++
							r->phase_handler=ph->next
						NGX_HTTP_PREACCESS_PHASE ngx_http_core_generic_phase()
							ph->handler()
							ngx_http_limit_req_handler()
							ngx_http_limit_conn_handler()
							NGX_OK?r->phase_handler=ph->next
							NGX_DECLINED?r->phase_handler++
							NGX_AGAIN?NGX_OK
							NGX_DONE?NGX_OK
							ngx_http_finalize_request()
						NGX_HTTP_ACCESS_PHASE ngx_http_core_access_phase()
							ph->handler()
							ngx_http_access_handler()
							ngx_http_auth_basic_handler()
							NGX_DECLINED?r->phase_handler++
							NGX_AGAIN?NGX_OK
							NGX_DONE?NGX_OK
							NGX_OK?NGX_HTTP_SATISFY_ALL?r->phase_handler++
							NGX_OK?r->phase_handler=ph->next
							NGX_HTTP_FORBIDDEN?r->phase_handler++
							NGX_HTTP_UNAUTHORIZED?r->phase_handler++
							ngx_http_finalize_request()
						NGX_HTTP_POST_ACCESS_PHASE ngx_http_core_post_access_phase()
							r->access_code?ngx_http_finalize_request()
							r->phase_handler++
						NGX_HTTP_TRY_FILES_PHASE ngx_http_core_try_files_phase()
							ngx_http_map_uri_to_path()
							ngx_http_set_disable_symlinks()
							ngx_open_cached_file()
							ngx_http_set_exten()
							phase_handler++
						NGX_HTTP_CONTENT_PHASE ngx_http_core_content_phase()
							r->content_handler()
							ngx_http_finalize_request()
							ph->handler()
							ngx_http_finalize_request()
						NGX_HTTP_LOG_PHASE ngx_http_core_generic_phase()
				ngx_http_run_posted_requests()
					r->main->posted_requests->request->write_event_handler()
ngx_http_send_header()
	ngx_http_top_header_filter()
	ngx_http_not_modified_header_filter()
	ngx_http_headers_filter()
	ngx_http_userid_filter()
	ngx_http_charset_header_filter()
	ngx_http_ssi_header_filter()
	ngx_http_gzip_header_filter()
	ngx_http_range_header_filter()
	ngx_http_chunked_header_filter()
	ngx_http_header_filter()
	ngx_http_write_filter()
ngx_http_output_filter()
	ngx_http_top_body_filter()
	ngx_http_range_body_filter()
	ngx_http_copy_filter()
		ngx_output_chain()
ngx_http_finalize_request()
	NGX_DONE?ngx_http_finalize_connection()
	NGX_DECLINED?ngx_http_core_run_phases()

	r->post_subrequest->handler()

	NGX_ERROR?
	ngx_http_post_action()
	ngx_http_terminate_request()

	NGX_HTTP_SPECIAL_RESPONSE?
	ngx_http_terminate_request()
	ngx_http_special_response_handler()
	ngx_http_finalize_request()

	r->done=1
	r->request_complete=1
	ngx_http_post_action()
	ngx_del_timer(c->read)
	ngx_del_timer(c->write)
	ngx_http_finalize_connection()
		ngx_http_set_keepalive()
			ngx_http_free_request()
			c->read->handler=ngx_http_keepalive_handler
			c->log->action="keepalive"
			ngx_reusable_connection(c,1)
			ngx_add_timer()
			ngx_post_event(ngx_posted_events)
		ngx_http_set_lingering_close()
			c->read->handler=ngx_http_lingering_close_handler
			ngx_add_timer()
		ngx_http_close_request()
			r->count--
			ngx_http_free_request()
				r->cleanup->handler()
				r->connection->log->action="logging request"
				ngx_http_log_request()
				r->connection->log->action="closing request"
				r->pool=ngx_destroy_pool()
			ngx_http_close_connection()
				ngx_close_connection()
					ngx_del_timer(c->read)
					ngx_del_timer(c->write)
					ngx_del_event(c->read)
					ngx_del_event(c->write)
					ngx_reusable_connection(c,0)
					ngx_free_connection(c)
					ngx_close_socket(c->fd)
				c->pool=ngx_destroy_pool()
/*}}}*/
@ngx_http_keepalive_handler()/*{{{*/
	ngx_http_close_connection()
		ngx_close_connection()
			ngx_del_timer()
			ngx_del_conn()
			ngx_reusable_connection(c,0)
			ngx_free_connection()
			ngx_close_socket()
		ngx_destroy_pool()
/*}}}*/
/*}}}*/
