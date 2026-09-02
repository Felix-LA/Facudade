<?php

namespace miniMVC\Controller;

use miniMVC\Model\UsuarioModel;

class UsuarioController
{

    public static function all()
    {
        $usuarios = UsuarioModel::getAllRows();
        include VIEW . '/usuario/listar_usuarios.php';
    }

    public static function cadastro()
    {
        if($_SERVER['REQUEST_METHOD'] == 'POST')
        {
            $model = new UsuarioModel();
            $model->nome = $_POST['nome'];
            $model->email = $_POST['email'];
            $model->senha = $_POST['senha'];
            $model->tipo = $_POST['tipo'];

            $result = $model->save();
            if($result){
                header("Location: /minimvc/usuario");
            }
        }
        include VIEW . '/usuario/form_usuario.php';
    }
}

