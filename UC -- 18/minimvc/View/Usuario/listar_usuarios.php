<?php
    include VIEW . '/Includes/header.php';
    include VIEW . '/Includes/navbar.php';
    echo '<h1>Listar Usuarios</h1>';
    // print_r($usuarios);
?>
 <table class="table table-striped">
  <thead>
    <tr>
      <th scope="col">Id</th>
      <th scope="col">Nome</th>
      <th scope="col">Email</th>
      <th scope="col">Tipo</th>
      <th scope="col">Ação</th>
    </tr>
  </thead>
  <tbody>
    <?php
        foreach($usuarios as $user):
            echo '<tr>
                    <th scope="row"> '.$user->id_usuario.' </th>
                    <td> '.$user->nome.' </td>
                    <td> '.$user->email.'  </td>
                    <td> '.$user->tipo.' </td>
                    <td> <a href="/minimvc/usuario/cadastro?id_user='.$user->id_usuario.' "> <i class="bi bi-clipboard-check-fill"></i> </a> </td>
                </tr>';
        endforeach;
    ?>
  </tbody>
</table>

<?php
    include VIEW . '/Includes/footer.php';
?>
 