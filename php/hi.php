#!/usr/bin/php
<? preg_match('/(?P<hh>he)/', 'hehihi', $result);
var_dump($result);
?>
<? preg_match('/(hi)\1/', 'hehihi', $result1);
var_dump($result1);
?>
