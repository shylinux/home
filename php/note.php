<? /**/ // # ?>
<? boolean string integer float double array object null ?>
<? null true false '' "" <<<end ?>
<? $a=array(=>,) $a[] ?>
<? unset() settype() empty() echo ?>
<? is_bool() is_string() is_float() is_double() is_integer() is_int() ?>
<? is_null() is_array() is_object() is_numeric() ?>
<? define() constant() defined() ?>
<? __FILE__ __LINE__ PHP_VERSION PHP_OS TRUE FALSE NULL E_ERROR E_WARNING E_PARSE E_NOTICE ?>
<? function f() {static global $a=&$$b} ?>
<? include() ?>
<? + - * / % ++ -- ?>
<? . ?>
<? & | ^ << >> ~ ?>
<?  ?>
<? && || ! ?>
<? < <= > >= == !=  === !== ?>
<? ?: ?>
<? if () {} else {} ?>
<? switch () {case: default:} ?>
<? while () {} ?>
<? while (list($k, $v)=each($a)) {} ?>
<? do {} while (); ?>
<? for (;;) {} ?>
<? foreach (a as $v) {} ?>
<? foreach (a as $k=>$v) {} ?>

<? var_dump() ?>
<? rand() ?>
<?
	trim() ltrim() rtrim()
	strlen()
	substr()
	strcmp()
	strncmp()
	strstr()
	substr_count()
	str_replace()
	str_ireplace()
	number_format()
	strcasecmp()
	strnatcmp() ?>
<?
	explode()
	implode()
?>
<?
	array()
   	count()
	print_r()
	array_search()
	array_pop()
	array_push()
	array_unique()
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
<? $_FILES[] move_uploaded_file() ?>
<? $_SERVER[] ?>
<? $GLOBALS[] ?>

<?
	die() exit()
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
	interface mod {}
	class Student extends Human implements mod {
		const num;
		public static total;
		public size;
final 
abstract
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
		public function __call($name, $arg) {}
		public function __sleep() {}
		public function __wakeup() {}


	}
	$stu = new Student();
	$stu = clone $stu;
	serialize($stu);
	unserialize($stu);
	instanceof
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

	show databases;
	create database db;
	drop database db;
	use db;

	create table tb(id primary key not null auto_increment);
	alter table tb add email varchar(50) not null;
	drop table tb;
	show columns from tb;
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

