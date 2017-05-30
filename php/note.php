c
sh go
vi py js
ARM Linux HTTP
事件 函数 资源 conf arch module html css jscript
通信 计算 存储 boot kernel root apache php mysql

<? /**/ // # ?>
<? boolean string integer float double array object null ?>
<? null true false '' "" <<<end ?>
<? var_dump() ?>

<? $a=array(=>,) $a[] ?>
<? unset() isset() gettype() settype() empty() echo ?>
<? is_bool() is_string() is_integer() is_int() is_float() is_double() ?>
<? is_null() is_array() is_object() is_numeric() ?>
<? define() constant() defined() ?>
<? __FILE__ __LINE__ __FUNCTION__ __CLASS__ __METHOD__ ?>
<? PHP_VERSION PHP_OS TRUE FALSE NULL E_ERROR E_WARNING E_PARSE E_NOTICE ?>
<? function f() {static global $a=&$$b} ?>
<? func_get_args() func_num_args() func_get_arg() ?>
<? include() require_once() require() include_once() ?>
<? + - * / % ++ -- ?>
<? . ?>
<? & | ^ << >> ~ ?>
<? instanceof ?>
<? and xor or && || ! ?>
<? < <= > >= == !=  === !== ?>
<? ?: ?>
<? `` shell_exec()
	die() exit() return
 ?>
<? if () {} else {} ?>
<? switch () {case: default:} ?>
<? while () {} ?>
<? while (list($k, $v)=each($a)) {} ?>
<? do {} while (); ?>
<? for (;;) {} ?>
<? foreach (a as $v) {} ?>
<? foreach (a as $k=>$v) {} ?>

<? rand() ?>
<?
	strlen() trim() ltrim() rtrim()
	strtolower() strtoupper() ucfirst() ucwords()
	chr() ord()
	htmlspecialchars() htmlentities() nl2br()
	addslashes() stripslashes()
	strcmp() strncmp() strcasecmp() strncasecmp() strnatcmp() strnatcasecmp()
	substr() substr_replace() substr_count()
	strpos() strrpos()

	sprintf()
	parse_url()
	strstr()
	str_replace()
	str_ireplace()
	number_format()
	strcasecmp()
	strnatcmp() ?>
<?
	explode() implode()
?>
<?
	array()
	list()
   	count()
	print_r()
	array_search()
	array_pop() array_push()
	array_unique()
	array_reverse()
	array_slice()
	usort() sort() rsort() asort() arsort() ksort() krsort() natsort()

	array_chunk() array_merge()
	array_keys() array_values() array_combine()
	array_intersect() array_intersect_assoc()
	array_diff() array_diff_assoc()
	array_filter() array_map() array_flip()
?>

<?
   	ereg() eregi()
	ereg_replace() eregi_replace()
	split() spliti()
?>
<? /^\b\B\d\D\s\S\w\W.[^-](|)?*+{,}$/ ?>
<? /(?P<name>)(?P=name)\1/ ?>
<?
   	preg_grep()
	preg_match() preg_match_all()
	preg_quote()
	preg_replace()
	preg_replace_callback()
	preg_split()
?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<?  ?>
<? mktime() time() getdate() checkdate() strftime() date()?>
<script>
	Number String Boolean
	Array Object Function
	null undefined
	true false "" '' /**/ //
	var;
	function(){}
	alert()
	if () else {}
	switch () {case: default:}
	while () {}
	for (;;) {}
</script>
<script>
	var xhr = new XMLHttpRequest();
	var xhr = new ActiveXObject("Msxml2.XMLHTTP");
	var xhr = new XMLHttpRequest("Microsoft.XMLHTTP");
	xhr.open("GET", "/", false);
	xhr.setRequestHeader();
	xhr.send(body);
	xhr.abort();
	xhr.getResponseHeader()
	xhr.getAllResponseHeaders();
	xhr.onreadystatechange
	xhr.readyState
	xhr.status
	xhr.statusText
	xhr.responseText
	xhr.responseXML

</script>
<form method="POST" action="/" target="_blank" enctype="mutlipart/form-data">
<input type="text" name="" value="" size="" maxlength="">
<input type="password" name="" value="" size="" maxlength="">
<input type="file" name="" value="" size="" maxlength="">
<input type="radio" name="" value="" checked>
<input type="checkbox" name="" value="" checked>
<input type="submit" name="" value="">
<input type="reset" name="" value="">
<input type="button" name="" value="">
<input type="hidden" name="" value="">
<textarea name="" rows="" cols="" wrap=""></textarea>
<select name="" size="" multiple>
	<option value="" selected></option>
</select>

</form>
<? $_GET[] urlencode() urldecode() ?>
<? $_POST[] ?>
<? $_COOKIE[] setcookie(name, value, expire, path, domain, secure) ?>
<? $_SESSION[] session_save_path() session_start() session_name() session_id() session_destroy() ?>
<? $_REQUEST[] ?>
<? $_FILES[] move_uploaded_file() ?>
<? $_SERVER[] ?>
<? $_ENV[] ?>
<? $GLOBALS[] ?>
<? header() ?>

<?
	socket_create()
	socket_bind()
	socket_listen()
	socket_accept()
	socket_write()
	socket_read()
	socket_close()
	socket_connect()
	socket_last_error()
	socket_strerror()
?>

<?
	basename() dirname() realpath() pathinfo()


   	fopen() fclose() flock()
	feof() fseek() ftell() rewind()
	fgetc() fgets() fread() fwrite()

	file() readfile()
	file_get_contents() file_put_contents()
	copy() rename() unlink()
	stat() fileatime() filemtime() filesize()
	pathinfo() realpath()

	is_dir() is_file()
	scandir() mkdir() rmdir() getcwd() chdir()
	opendir() readdir() rewinddir() closedir()
	disk_free_space() disk_total_space()


 ?>
<?
	interface class
	extends implements
	final abstract
	public protected private
	static
	const
	self parent
	new clone instanceof serialize() unserialize()
	function __autoload($name) {}

	interface mod {}
	class Student extends Human implements mod {
		const num;
		public static total;
		public size;
		public $name;
		protected $age;
		private $score;

			$this;
			self::name;
			parent::name;
		public function __clone() {}
		public function __construct() {}
		public function __destruct() {}
		public function __get($name) {}
		public function __set($name, $value) {}
		public function __isset($name) {}
		public function __unset($name) {}
		public function __call($name, $arg) {}
		public function __sleep() {}
		public function __wakeup() {}


	}
	$stu = new Student();
	$stu = clone $stu;
	serialize($stu);
	unserialize($stu);
	$stu->name;
	Student::size;
?>
<?
	crypt()
	md5()
	sha1()
?>
<?
	wget "https://cdn.mysql.com//Downloads/MySQL-5.7/mysql-5.7.18-macos10.12-x86_64.dmg"
	cd /usr/local/mysql/bin && sudo su && ./mysqld_safe --skip-grant-tables
	mysql; use mysql; flush privileges; set password for 'root'@'localhost'=password(';');
	mysql -uroot -h127.0.0.1 -proot

	create user shy@localhost identified by 1;
	drop user shy@localhost;
	set password for shy@localhost=password('1');
	grant all on *.* to shy@%;
	flush privileges;

	show databases;
	create database db;
	drop database db;
	use db;

	show tables from db;
	create table tb(id type default val primary key not null auto_increment);
	alter table tb add email varchar(50) not null;
	alter table tb rename as tb;
	alter table tb modify id int;
	alter table tb add age int;
	drop table tb;
	show columns from tb;
	show index from tb;
	show table status;
	describe tb;
	rename table tb1 to tb2;

	insert into tb(,) values(,);
	select * from tb where name=1 group by name order by age having age=1 limit 10;
	update tb set name=2 where age=1;
	delete from tb where age=1;

	mysql_connect('host', 'name', 'pwd')
	mysql_select_db('db')
	mysql_error()
	mysql_query()
	mysql_num_rows()
	mysql_fetch_row()
	mysql_fetch_array()
	mysql_fetch_object()
	mysql_close()

?>
    mysql
     php
    apache
css chrome js
     html

