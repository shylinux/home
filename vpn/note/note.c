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

ngx_palloc.h ngx_palloc.c/*{{{*/
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
ngx_buf.h ngx_buf.c ngx_output_chain.c/*{{{*/
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
ngx_slab.h ngx_slab.c
ngx_shmtx.h ngx_shmtx.c
ngx_open_file_cache.h ngx_open_file_cache.c

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
ngx_queue.h ngx_queue.c
ngx_rbtree.h ngx_rbtree.c
ngx_radix_tree.h ngx_radix_tree.c

ngx_regex.h ngx_regex.c/*{{{*/
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
ngx_crc.h
ngx_sha1.h
ngx_cpuinfo.c
ngx_md5.h ngx_md5.c
ngx_crypt.h ngx_crypt.c
ngx_crc32.h ngx_crc32.c
ngx_murmurhash.h ngx_murmurhash.c

ngx_file.h ngx_file.c/*{{{*/
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
ngx_connection.h ngx_connection.c
	ngx_listening_t
		fd:ngx_socket_t
		sockaddr:struct sockaddr*
		socklen:socklen_t
		addr_text_max_len:size_t
		addr_text:ngx_str_t
		type:int



nginx.h nginx.c
ngx_spinlock.c
ngx_cycle.h ngx_cycle.c
ngx_times.h ngx_times.c
ngx_parse.h ngx_parse.c
ngx_conf_file.h ngx_conf_file.c
ngx_log.h ngx_log.c

