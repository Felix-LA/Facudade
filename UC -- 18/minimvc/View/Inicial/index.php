<?php
    include VIEW . '/Includes/header.php';
    include VIEW . '/Includes/navbar.php';
?>
    <!-- Hero Section -->
    <header class="bg-primary text-white text-center py-5 mt-5">
        <div class="container py-5">
            <h1 class="display-4 fw-bold">Segurança Especializada para Ambientes Hospitalares</h1>
            <p class="lead my-4">Protegendo pacientes, equipes médicas e patrimônio com rigor, discrição e tecnologia avançada.</p>
            <a href="#contato" class="btn btn-light btn-lg text-primary fw-semibold">Solicitar Orçamento</a>
        </div>
    </header>

    <!-- Sobre -->
    <section id="sobre" class="py-5">
        <div class="container text-center">
            <h2 class="fw-bold mb-3">Quem Somos</h2>
            <p class="text-muted mx-auto" style="max-width: 700px;">
                A SafeHealth é líder em soluções de segurança voltadas exclusivamente para o setor de saúde. Entendemos a dinâmica sensível de hospitais e clínicas, garantindo um ambiente seguro e humanizado.
            </p>
        </div>
    </section>

    <!-- Serviços -->
    <section id="servicos" class="bg-light py-5">
        <div class="container">
            <h2 class="fw-bold text-center mb-5">Nossos Serviços</h2>
            <div class="row g-4">
                <div class="col-md-4">
                    <div class="card h-100 border-0 shadow-sm p-3">
                        <div class="card-body">
                            <h3 class="h5 fw-bold text-primary">Controle de Acesso</h3>
                            <p class="text-muted">Monitoramento rigoroso de visitantes, funcionários e áreas restritas como UTIs e centros cirúrgicos.</p>
                        </div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="card h-100 border-0 shadow-sm p-3">
                        <div class="card-body">
                            <h3 class="h5 fw-bold text-primary">Monitoramento 24h</h3>
                            <p class="text-muted">Central de vigilância integrada com CFTV de última geração e resposta rápida a incidentes.</p>
                        </div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="card h-100 border-0 shadow-sm p-3">
                        <div class="card-body">
                            <h3 class="h5 fw-bold text-primary">Escolta Hospitalar</h3>
                            <p class="text-muted">Segurança humanizada e ostensiva para contenção de conflitos e proteção de equipes de plantão.</p>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- Contato -->
    <section id="contato" class="py-5">
        <div class="container" style="max-width: 600px;">
            <h2 class="fw-bold text-center mb-4">Entre em Contato</h2>
            <form>
                <div class="mb-3">
                    <label for="nome" class="form-label">Nome</label>
                    <input type="text" class="form-control" id="nome" placeholder="Seu nome ou da instituição">
                </div>
                <div class="mb-3">
                    <label for="email" class="form-label">E-mail</label>
                    <input type="email" class="form-control" id="email" placeholder="seu@email.com">
                </div>
                <div class="mb-3">
                    <label for="mensagem" class="form-label">Mensagem</label>
                    <textarea class="form-control" id="mensagem" rows="4" placeholder="Como podemos ajudar?"></textarea>
                </div>
                <button type="submit" class="btn btn-primary w-100">Enviar Mensagem</button>
            </form>
        </div>
    </section>

    <!-- Footer -->
    <footer class="bg-dark text-white text-center py-3">
        <div class="container">
            <p class="mb-0">&copy; 2026 SafeHealth. Todos os direitos reservados.</p>
        </div>
    </footer>

    <!-- Bootstrap 5 JS Bundle -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>