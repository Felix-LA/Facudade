<?php
    include VIEW . '/Includes/header.php';
    include VIEW . '/Includes/navbar.php';
    echo '<h1>Cadastro de Usuario</h1>';
    // print_r($usuarios);
?>

<form method="POST" action="/minimvc/usuario/cadastro">
  <div class="mb-3">
    <label for="nome" class="form-label">Nome</label>
    <input type="text" class="form-control" id="nome" name="nome">
  </div> 
  <div class="mb-3">
    <label for="email" class="form-label">E-mail</label>
    <input type="email" class="form-control" id="email" name="email">
  </div>
  <div class="mb-3">
    <label for="senha" class="form-label">Senha</label>
    <input type="password" class="form-control" id="senha" name="senha">
  </div>
  <div class="mb-3">
    <label for="tipo" class="form-label">Tipo</label>
    <select class="form-select" name="tipo" id="tipo">
      <option selected>Selecione o Tipo</option>
      <option value="ADM"> Administrador </option>
      <option value="FUN"> Funcionário </option>
      <option value="MED"> Médico</option>
    </select>
  </div>
  <button type="submit" class="btn btn-primary">Salvar</button>
</form>


<?php
    include VIEW . '/Includes/footer.php';
?>
 