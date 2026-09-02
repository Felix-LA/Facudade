<?php

use miniMVC\Controller\UsuarioController;
use miniMVC\Controller\InicialController;

$url = parse_url($_SERVER['REQUEST_URI'], PHP_URL_PATH);
// echo $url;

switch($url)
{
    case "/minimvc/":
        InicialController::index();
    break;

    case '/minimvc/usuario':
        UsuarioController::all();
    break;

    case  '/minimvc/usuario/cadastro':
        UsuarioController::cadastro();
    break;

    case  '/minimvc/admin':
        UsuarioController::cadastro();
    break;
}