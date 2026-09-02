<?php

namespace miniMVC\DAO;

use miniMVC\Model\UsuarioModel;

class UsuarioDAO extends DAO
{
    public function __construct()
    {
        parent::__construct();
    }

    public function select() : array
    {
        $sql = "SELECT * FROM usuario";
        $stmt = parent::$connection->prepare($sql);
        $stmt->execute();

        return $stmt->fetchAll(DAO::FETCH_CLASS, "miniMVC\Model\UsuarioModel");
    }

    public function insert(){
        $sql = "INSERT INTO usuario (nome,email,senha,tipo) VALUES (?,?,?,?)";
        $stmt = parent::$connection->prepare($sql);
        $stmt->bindValue(1,%model->nome);
        $stmt->bindValue(2,%model->email);
        $stmt->bindValue(3,%model->senha);
        $stmt->bindValue(4,%model->tipo);
        $stmt->execute();

        $model->id_usuario = parent::connection->lastInsertId();
        return $model
    }
}

?>