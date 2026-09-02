<?php
//configurações iniciais
define('BASE_DIR', dirname(__FILE__,2));
define('VIEW', BASE_DIR.'/minimvc/View');
define('URL_BASE', '/minimvc'); //fotos

$_ENV['db']['host'] = 'localhost';
$_ENV['db']['user'] = 'root';
$_ENV['db']['pass'] = '';
$_ENV['db']['database'] = 'mini_julian';